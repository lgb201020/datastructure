#pragma once
#include <cstdio>
#include <iostream>
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
private:
	int top;
	int data[MAX_STACK_SIZE];

public:
	ArrayStack() { top = -1; }
	~ArrayStack(){}
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1;}

	void push(int e) {
		if (isFull()) { printf("stack is full"); }
		data[++top] = e;
		/*++top은 top = top + 1을 의미한다.*/
	}

	int pop() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top--];
		/*뒤에 --가 붙은 것은 top을 먼저 쓰고 이후에 -1을 해준다. 즉 top출력하고 top = top -1 */
		/*항상 return과 함수의 자료형은 동일해야한다. void면 return이 없음*/
	}

	int peek() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top];
	}

	void display() {
		printf("[스택 항목의 수 = %2d]=>", top+1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);
		printf("\n");
	}

};