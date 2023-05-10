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
		/*++top�� top = top + 1�� �ǹ��Ѵ�.*/
	}

	int pop() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top--];
		/*�ڿ� --�� ���� ���� top�� ���� ���� ���Ŀ� -1�� ���ش�. �� top����ϰ� top = top -1 */
		/*�׻� return�� �Լ��� �ڷ����� �����ؾ��Ѵ�. void�� return�� ����*/
	}

	int peek() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top];
	}

	void display() {
		printf("[���� �׸��� �� = %2d]=>", top+1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);
		printf("\n");
	}

};