bin/testMochila:Mochila.cpp
	mkdir -p bin
	g++ -o bin/testMochila Mochila.cpp
clean:
	rm -r *.o *.gch bin
