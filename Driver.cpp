//#include "Driver.h"
#include<iostream>
#include"Expression.h"

using namespace std;

int main() {
    string str = "( 2 + 5 - 8 ) / 2 * 5";
	Expression* calc = new Expression(str);
	//calc->testmeth(str);
        string temp = calc->shunting(str);
		cout << temp << endl;
	//cout << calc->evaluate(temp) << endl;
	//calc->getinput();
	return 0;
}
/*double Driver::fractionToDecimal(string input) {
    
}
*/