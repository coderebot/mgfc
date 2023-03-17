TARGET=restest
CFLAG=-I../../mgfc/inc
LIBS=-L../../mgfc -lpthread -lpng -ljpeg -lz -lmgfc -lminigui -lmgext
OBJS=res.o res_main.o
CC=g++

$(TARGET):$(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

%.o:%.cpp
	$(CC) -c $(CFLAG) $<
res.o:res.c
	$(CC) -c $(CFLAG) $<

res.c:res.rc
	preprocess < res.rc  | mgrc -s 2 > res.c

clean:
	rm -f *.o res.c $(TARGET)

