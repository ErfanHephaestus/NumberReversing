// NumberReverse.cpp 
// created by ErfanHephaestus

#include <iostream>

using namespace std;

typedef unsigned int uint;

void numberReverse(uint x);
int main()
{
	uint x;
	cout << "Please inter 2 digits non-negative number:\t";
	cin >> x;
	numberReverse(x);
}

void numberReverse(uint x)
{
	uint temp = x;
	x = x % 10;
	temp = temp / 10;
	cout << "reversed number is\t" <<x<< temp << endl;
}
