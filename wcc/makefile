P=wcc
OBJECTS= 
CFLAGS=`pkg-config --cflags glib-2.0 readline` -I$(HOME)/inc -g -Wall -O0 -std=gnu11 
# python3

LDLIBS=`pkg-config --libs glib-2.0 readline` -L$(HOME)/lib -lm 
# python3

CC=gcc
$(P): $(OBJECTS) 
