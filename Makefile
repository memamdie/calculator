all: calc

calc: Driver.o Expression.o Number.o Fraction.o Help.o HelperFunctions.o Integer.o Irrational.o Log.o NthRoot.o Operations.o Polynomial.o Review.o
	g++ Driver.o Expression.o Number.o Fraction.o Help.o HelperFunctions.o Integer.o Irrational.o Log.o NthRoot.o Operations.o Polynomial.o Review.o -o calc

Driver.o: Driver.cpp
	g++ -c Driver.cpp

Expression.o: Expression.cpp
	g++ -c Expression.cpp
	
Number.o: Number.cpp
	g++ -c Number.cpp

Fraction.o: Fraction.cpp
	g++ -c Fraction.cpp
	
Help.o: Help.cpp
	g++ -c Help.cpp

HelperFunctions.o: HelperFunctions.cpp
	g++ -c HelperFunctions.cpp

Integer.o: Integer.cpp
	g++ -c Integer.cpp

Irrational.o: Irrational.cpp
	g++ -c Irrational.cpp

Log.o: Log.cpp
	g++ -c Log.cpp

NthRoot.o: NthRoot.cpp
	g++ -c NthRoot.cpp

Operations.o: Operations.cpp
	g++ -c Operations.cpp

Polynomial.o: Polynomial.cpp
	g++ -c Polynomial.cpp

Review.o: Review.cpp
	g++ -c Review.cpp

clean:
	rm -rf *o calc
