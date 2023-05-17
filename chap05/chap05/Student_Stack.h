#pragma once
#include <cstdio>
#include <iostream>
#include <string>
const int MAX_STRING = 20;
const int MAX_STACK_SIZE = 20;
/*#define	MAX_STRING	20
  #define	Max_STACK_SIZE 20
*/
class Student {
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];
public:
	Student(int i = 0,const char* n = "" , const char* d = "") { 
		set(i, n, d); 
	}
	void set(int i, const char* n, const char* d) {
		/* ����: const�� �ϸ� ���ȭ �ϴ°��ε� �� n = -- - �̷��� �ȵȴ� ��� �ǹ�,
		�׷��� n�� ���� �����Ϸ��� const char* n���� n�� ����Ǿ��ִ� �޸𸮿� �����Ѱ��ΰ���?*/
		id = i;
		strncpy_s(name, n, MAX_STRING - 1); // strncpy=�� ���ڿ� ���� (���� �����÷ο� ����)
		name[MAX_STRING - 1] = '\0'; // ���ڿ� ���� ���� �߰�(�Ƹ��� �̰� null��)
		strncpy_s(dept, d, MAX_STRING - 1); // strncpy�� ���ڿ� ���� (���� �����÷ο� ����)
		dept[MAX_STRING - 1] = '\0'; // ���ڿ� ���� ���� �߰�(�Ƹ��� �̰� null��)
	}
	void display(){
		printf("�й� %-15d �̸� %-10s �а� %-20s\n", id, name, dept);
	}
};

class ArrayStack
{
private:
	int top;
	Student data[MAX_STACK_SIZE];

public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(Student e) {
		if (isFull()) { printf("stack is full"); }
		data[++top] = e;
		/*++top�� top = top + 1�� �ǹ��Ѵ�.*/
	}

	Student pop() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top--];
		/*�ڿ� --�� ���� ���� top�� ���� ���� ���Ŀ� -1�� ���ش�. �� top����ϰ� top = top -1 */
		/*�׻� return�� �Լ��� �ڷ����� �����ؾ��Ѵ�. void�� return�� ����*/
	}

	Student peek() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top];
	}

	void display() {
		for (int i = 0; i <= top; i++)
			data[i].display();
		printf("\n");
	}
};