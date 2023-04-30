#include <cstdio>
#include <iostream>

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}



int main() {
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap È£Ãâ ÈÄ , a = %d, b = %d", a, b);
	return 0;
}