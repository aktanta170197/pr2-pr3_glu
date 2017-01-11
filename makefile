binary: main.o bib.o vivod.o libutili.so
	g++ -o bop bib.o main.o vivod.o -L. -lutili -Wl,-rpath,.
main.o: main.cpp
	g++ -c main.cpp
bib.o: bib.cpp
	g++ -c bib.cpp
vivod.o: vivod.cpp
	g++ -c vivod.cpp
libutili.so: utili.o
	g++ -shared -o libutili.so utili.o
utili.o: utili.cpp
	g++ -c -fPIC utili.cpp
clean:
	rm -f *.o *.so binary
build-tests:
	g++ -o tests/newsimpletest tests/newsimpletest.cpp utili.cpp
test:
	tests/newsimpletest
