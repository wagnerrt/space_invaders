# $Id$

#########
## Para gerar dependências de Makefile automaticamente:
##     gcc -MM *.cpp
#########

CCDEBUG=-g -D_DEBUG
CCFLAGS=-c -Wall $(CCDEBUG) -Wno-deprecated
CC=gcc $(CCFLAGS)

LIBS=-lpthread -lstdc++ -lncurses
LDFLAGS=
LD=gcc $(LDFLAGS)

.cpp.o:
	$(CC) $<

.c.o:
	$(CC) $<

helloword: helloword.o
	$(LD) -o $@ $(@).o $(LIBS)

clean:
	rm -f *.o


