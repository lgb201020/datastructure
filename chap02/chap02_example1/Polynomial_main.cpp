#include "Polynomial.h"

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {

		Polynomial a, b, c;

		a.read();
		b.read();
		c.add(a, b);

		a.display("A = ");
		b.display("B = ");
		c.display("C = A + B = ");

	


}

