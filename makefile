P=hello
OBJECTS= 
CFLAGS=`pkg-config --cflags json-c glib-2.0 readline libuv libcurl` -I$(HOME)/inc -g -Wall -O0 -std=gnu11 -pedantic #-static #-static-libgcc
# python3

LDLIBS=`pkg-config --libs json-c glib-2.0 readline libuv libcurl` -L$(HOME)/lib -lm 
# python3

CC=gcc
$(P): $(OBJECTS) 
