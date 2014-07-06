PROJECT=scheme
SOURCES=object.cpp read.cpp main.cpp
LIBRARY=nope
LDFLAGS=-lstdc++ -lgmp
CFLAGS=-c -Wall
cc=gcc

OBJECTS=$(SOURCES:.cpp=.o)
BINARY=$(PROJECT)

all: $(SOURCES) $(BINARY)

$(BINARY): $(OBJECTS)
	@$(CC) $(OBJECTS) $(LDFLAGS) -o $@

%.o: %.cpp
	@$(CC) $(CFLAGS) -fPIC $< -o $@

distclean: clean
	@rm -f $(BINARY)

clean:
	@rm -f $(OBJECTS)
