#ifndef MGSINGLELIST_H
#define MGSINGLELIST_H

template<class T>
class TMGSingleList
{
protected:
	template<class TNodeValue>	
	class TNode{
	public:
		TNodeValue data;
		TNode *next;
	};
	TNode<T> *m_head;
public:
	class Iterator{
		TNode<T> *_pnode;
	public:
		Iterator(const TMGSingleList<T> &list){_pnode=list.m_head;}
		Iterator(const Iterator &i){_pnode=i._pnode;}
		Iterator(){_pnode=NULL;}
		T operator*(){
			return _pnode?_pnode->data:NULL;
		}
		void operator++(){
			if(_pnode)_pnode=_pnode->next;
		}
		bool operator!(){ return _pnode==NULL; }
		Iterator & operator=(const Iterator& i){
			_pnode = i._pnode;
		}
	};
	TMGSingleList()
	{
		m_head=NULL;
	}
	~TMGSingleList()
	{
		empty();
	}

	bool isEmpty(){ return m_head==NULL;}
	bool push_head(const T data){
		TNode<T> *pnode = new TNode<T>;
		pnode->data = data;
		pnode->next = m_head;
		m_head = pnode;
		return true;
	}
	T pop_head(){
		TNode<T> *pnode;
		pnode = m_head;
		m_head = m_head->next;
		T pdata = pnode->data;
		delete pnode;
		return pdata;
	}
	
	bool insert(const T data,int index/*=0*/)
	{
		if(m_head==NULL)
		{
			m_head = new TNode<T>;
			m_head->data = data;
			m_head->next = NULL;
			return true;
		}
		if(index==0)
			return push_head(data);
		else 
		{
			int i;
			TNode<T> *pnode = m_head;
			for(i=1;i!=index && pnode->next;i++,pnode=pnode->next);
			TNode<T> *pnewNode = new TNode<T>;
			pnewNode->data = data;
			pnewNode->next = pnode->next;
			pnode->next = pnewNode;
		}
		return true;
	}

	bool  push_back(const T data){
		return insert(data,-1);
	}
	T getTop(){
		return m_head?m_head->data:NULL;
	}
	T& operator[](int index) {
		int i;
		if(index<0)
			throw("the index out of bounds");
		TNode<T> *pnode = m_head;
		for(i=0;i!=index && pnode;i++,pnode=pnode->next);
		if(pnode==NULL)
			throw("the index out of bounds");
		return pnode->data;
	}
	
	void empty(){
		TNode<T>*pnode;
		while(m_head)
		{
			pnode = m_head;
			m_head = m_head->next;
			delete pnode;
		}
		m_head=NULL;
	}
	Iterator begin()
	{
		return Iterator(*this);
	}
};

#if 0
#include <stdio.h>
int main(void)
{
	TMGSingleList<int> list;
	for(int i=0;i<10;i++)
		list.push_head(i+1);
	for(TMGSingleList<int>::Iterator it=list.begin();!!it;++it)
		printf("%d\t",*it);
	list.empty();	
	return 0;
}
#endif

#endif
