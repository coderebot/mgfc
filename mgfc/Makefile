

CC=g++
FLAGS=-Iinc -DMGWNDHLP_USE_DEFAULT -g
OBJS = mgwnd.o mgwndhlp.o mgctrl.o mggdi.o mgapp.o
SRC = ./src/mgwnd.cpp ./src/mgwndhlp.cpp ./src/mgctrl.cpp ./src/mgapp.cpp
TARGET=libmgfc.a
all:$(OBJS)
	ar r $(TARGET) $(OBJS)
	ranlib $(TARGET)
mgwnd.o:./src/mgwnd.cpp
	$(CC) -c $(FLAGS) $<
mgwndhlp.o:./src/mgwndhlp.cpp
	$(CC) -c $(FLAGS) $<

mgctrl.o:./src/mgctrl.cpp
	$(CC) -c $(FLAGS) $<
	
mggdi.o:./src/mggdi.cpp
	$(CC) -c $(FLAGS) $<

mgapp.o:./src/mgapp.cpp
	$(CC) -c $(FLAGS) $<
clean:
	rm -f *.o *.a
