all: main.o dog.o cat.o lion.o vetVisitor.o caregiverVisitor.o careCenter.o
	g++ -o main main.o dog.o cat.o lion.o vetVisitor.o caregiverVisitor.o careCenter.o

main.o: main.cpp animal.h
	g++ -c -Wall --std=c++17 main.cpp

dog.o: dog.cpp dog.h animal.h
	g++ -c -Wall --std=c++17 dog.cpp

cat.o: cat.cpp cat.h animal.h
	g++ -c -Wall --std=c++17 cat.cpp

lion.o: lion.cpp lion.h animal.h
	g++ -c -Wall --std=c++17 lion.cpp

vetVisitor.o: vetVisitor.cpp visitor.h animal.h dog.h cat.h 
	g++ -c -Wall --std=c++17 vetVisitor.cpp

caregiverVisitor.o: caregiverVisitor.cpp visitor.h animal.h dog.h cat.h lion.h
	g++ -c -Wall --std=c++17 caregiverVisitor.cpp

careCenter.o: careCenter.cpp careCenter.h animal.h visitor.h
	g++ -c -Wall --std=c++17 careCenter.cpp

clean:
	rm -rf *.o main
