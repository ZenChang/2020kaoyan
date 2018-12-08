CC=g++
CFLAGS=
objects=Dijkstra.o

Dijkstra:$(objects)
$(objects):%.o:%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm Dijkstra $(objects)
