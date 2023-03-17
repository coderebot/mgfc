
CC=g++
FLAGS=-I./mgfc/inc  -DMGWNDHLP_USE_DEFAULT -g 
LIBS=-lpthread -lpng -ljpeg -lz -lmgfc -lminigui -lmgext

TARGETS=hello dialogbox msgmap mgnotepad mgcalendar mgimgview mgpainter mgctrldemo mginit bmptest

.PHONY:clean

all:$(TARGETS)
	

clean:
	rm -f *.o *.a $(TARGETS)

	
#sample hello
hello:hello.o
	$(CC) -o hello hello.o $(LIBS) -L./mgfc
hello.o:./mgfcsample/hello.cpp
	$(CC) -c $(FLAGS) $<
	

#sample dialogbox
dialogbox:dialogbox.o
	$(CC) -o dialogbox dialogbox.o $(LIBS) -L./mgfc

dialogbox.o:./mgfcsample/dialogbox.cpp
	$(CC) -c $(FLAGS) $<


#sample msgmap
msgmap:msgmap.o
	$(CC) -o msgmap msgmap.o $(LIBS) -L./mgfc
	
msgmap.o:./mgfcsample/msgmap.cpp
	$(CC) -c $(FLAGS) $<

#sample mgnotepad
mgnotepad:mgnotepad.o
	$(CC) -o mgnotepad mgnotepad.o $(LIBS) -L./mgfc

mgnotepad.o:./mgfcsample/mgnotepad.cpp
	$(CC) -c $(FLAGS) $<

mgcalendar:mgcalendar.o
	$(CC) -o mgcalendar mgcalendar.o $(LIBS) -L./mgfc
mgcalendar.o:./mgfcsample/mgcalendar.cpp
	$(CC) -c $(FLAGS) $<

mgimgview:image.o imageview.o
	$(CC) -o mgimgview  image.o imageview.o $(LIBS) -L./mgfc
image.o:./mgfcsample/mgimgview/image.cpp
	$(CC) -c $(FLAGS) $<
imageview.o:./mgfcsample/mgimgview/imageview.cpp
	$(CC) -c $(FLAGS) $<

mgpainter:mgpainter.o mgpaintctrl.o
	$(CC) -o mgpainter mgpainter.o mgpaintctrl.o $(LIBS) -L./mgfc
mgpainter.o:./mgfcsample/mgpainter/mgpainter.cpp
	$(CC) -c $(FLAGS) $<
mgpaintctrl.o:./mgfcsample/mgpainter/mgpaintctrl.cpp
	$(CC) -c $(FLAGS) $<

mgctrldemo:ctrldemomain.o staticdemo.o buttondemo.o
	$(CC) -o mgctrldemo ctrldemomain.o staticdemo.o buttondemo.o $(LIBS) -L./mgfc
ctrldemomain.o:./mgfcsample/ctrldemo/ctrldemomain.cpp
	$(CC) -c $(FLAGS) $<
staticdemo.o:./mgfcsample/ctrldemo/staticdemo.cpp
	$(CC) -c $(FLAGS) $<
buttondemo.o:./mgfcsample/ctrldemo/buttondemo.cpp
	$(CC) -c $(FLAGS) $<

mginit:mgdesktop.o
	$(CC) -o mginit mgdesktop.o $(LIBS) -L./mgfc

mgdesktop.o:./mgfcsample/mgdesk/mgdesktop.cpp
	$(CC) -c $(FLAGS) $<


#bmptest
bmptest:bmptest.o
	$(CC) -o bmptest bmptest.o $(LIBS) -L./mgfc
bmptest.o:./mgfcsample/bmptest.cpp
	$(CC) -c $(FLAGS) $<

