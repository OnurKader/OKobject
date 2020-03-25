CC=g++
CFLAGS=-g -std=c++2a -Wall -Wextra -Wpedantic -Wshadow
CLIBS=
LINK_TARGET=test

OBJS = test.o Object.o Value.o

REBUILDABLES = $(OBJS) $(LINK_TARGET)

.PHONY: all clean test

all: $(LINK_TARGET)

clean:
	@echo Deleting '$(REBUILDABLES)'
	@rm -f $(REBUILDABLES)

$(LINK_TARGET) : $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(CLIBS)

%.o: %.cpp
	g++ -g -o $@ -c $< $(CFLAGS) $(CLIBS)

test.o : Object.hpp Value.hpp
Object.o: Object.hpp Value.hpp
