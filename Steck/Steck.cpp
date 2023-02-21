#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack a;
	Stack b;
	Stack c;

	for (int i = 0; i < 10; i++) {
		a.push((char)rand()%100);
	}

	a.show();
	cout << endl;
	b.cloning(a);
	cout << endl;
	b.show();
	cout << endl;
	for (int i = 0; i < 10; i++) {
		c.push((char)rand()%100);
	}
	c.show();
	c.show();
}