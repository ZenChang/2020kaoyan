CC=g++
CFLAGS=-std=c++11
objects=Dijkstra.o

Dijkstra:$(objects)
$(objects):%.o:%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm Dijkstra $(objects)
