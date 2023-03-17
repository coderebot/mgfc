#ifndef MGPAINTCTRL_H
#define MGPAINTCTRL_H

#include "mgctrl.h"
#include "mggdi.h"

#define MGFC_CTRL_PAINTCTRL "mgPaintCtrl"

template<typename T>
class ListStack
{
    template<typename TValue>
    struct ListNode{
        TValue t;
        ListNode<TValue> * next;
    };

	ListNode<T> * m_pNode;
public:
    template<typename TValue>
    class iterator
    {
        ListNode<TValue> *pNode;
    public:
        iterator(const iterator<TValue> &it)
        {
            pNode = it.pNode;
        }
        iterator(ListNode<TValue> *pNode)
        {
            this->pNode = pNode;
        }
        operator TValue (){
            return pNode->t;
        }
        BOOL operator!(){
            return !pNode;
        }
        iterator<TValue> & operator=(const iterator<TValue> &it)
        {
            pNode = it.pNode;
            return *this;
        }
     //   friend BOOL operator==(const iterator<TValue> &it1,iterator<TValue> &it2);
     //   friend BOOL operator!=(const iterator<TValue> &it1,iterator<TValue> &it2);
        void operator ++()
        {
            pNode = pNode->next;
        }
    };

    ListStack()
    {
        m_pNode=NULL;
    }
    ~ListStack()
    {
        ListNode<T> *pNode;
        while(m_pNode)
        {
            pNode = m_pNode;
            m_pNode = m_pNode->next;
            delete pNode;
        }
    }

    void push(T t)
    {
        ListNode<T> *pNode = new ListNode<T>;
        pNode->next = m_pNode;
        pNode->t = t;
        m_pNode = pNode;
    }
    T pop()
    {
        if(m_pNode==NULL)
                return T(0);
        ListNode<T> *pNode = m_pNode;
        m_pNode = m_pNode->next;
        T t = pNode->t;
        delete pNode;
        return t;
    }

    T getTop()
    {
        if(m_pNode==NULL)
            return T(0);
        return m_pNode->t;
    }

    iterator<T> begin()
    {
        return iterator<T>(m_pNode);
    }
};

/*template<typename TValue>
BOOL operator==(const ListStack<TValue>::iterator<TValue> &it1,const ListStack<TValue>::iterator<TValue> &it2)
{
    return it1.pNode==it2.pNode;
}

template<typename TValue>
BOOL operator!=(const ListStack<TValue>::iterator<TValue> &it1,const ListStack<TValue>::iterator<TValue> &it2)
{
    return it1.pNode!=it2.pNode;
}*/

class MGSharp
{
public:
	virtual void Draw(MGDC *pDC)=0;
	virtual void BeginDraw(MGDC *pDC)=0;
	virtual void SetPoint(MGDC *pDC,int x,int y)=0;
	virtual void EndDraw(MGDC *pDC)=0;
	virtual void Move(int xoffset=0,int yoffset=0)=0;
	virtual BOOL GetRect(RECT &rt)=0;
};


class MGPaintCtrl:public MGUserCtrl, protected TMGScrollWnd<MGPaintCtrl>
{
public:
	static BOOL Register()
	{
		return  MGUserCtrl::Register(MGFC_CTRL_PAINTCTRL,0,WS_CHILD,WS_EX_NONE,GetSystemCursor (IDC_ARROW),GetWindowElementColor (BKC_CONTROL_DEF));
	}
	
	MGPaintCtrl();
	~MGPaintCtrl();

	void AddSharp(MGSharp *pSharp){if(pSharp)m_sharpStack.push(pSharp); }

	MGSharp* UnSharp()
	{
		return m_sharpStack.pop();
	}

	void UpdateScrollWnd(int newXPos,int newYPos,DWORD dwFlag)
	{
		InvalidateRect();
	}

protected:
	DECLARE_CTRL_CLASS(MGFC_CTRL_PAINTCTRL)
	
	void OnHScroll(int hs_nc,int pos)
	{
		OnScroll(SB_HORZ,hs_nc,pos);
	}
	void OnVScroll(int vs_nc,int pos)
	{
		OnScroll(SB_VERT,vs_nc,pos);
	}

	void OnLButtonDown(int x,int y,DWORD key_status);
	void OnLButtonUp(int x,int y,DWORD key_status);
	void OnMouseMove(int x,int y,DWORD key_status);
	void OnPaint(HDC hdc);

	typedef ListStack<MGSharp*>  SharpStack;
	typedef ListStack<MGSharp*>::iterator<MGSharp*>  SharpIterator;
	SharpStack  m_sharpStack;


	DECLARE_MSG_MAP;
};

#endif
