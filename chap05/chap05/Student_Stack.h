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
		/* 질문: const로 하면 상수화 하는것인데 즉 n = -- - 이런게 안된다 라는 의미,
		그래서 n의 값을 수정하려면 const char* n으로 n이 저장되어있는 메모리에 접근한것인가요?*/
		id = i;
		strncpy_s(name, n, MAX_STRING - 1); // strncpy=로 문자열 복사 (버퍼 오버플로우 방지)
		name[MAX_STRING - 1] = '\0'; // 문자열 종료 문자 추가(아마도 이게 null값)
		strncpy_s(dept, d, MAX_STRING - 1); // strncpy로 문자열 복사 (버퍼 오버플로우 방지)
		dept[MAX_STRING - 1] = '\0'; // 문자열 종료 문자 추가(아마도 이게 null값)
	}
	void display(){
		printf("학번 %-15d 이름 %-10s 학과 %-20s\n", id, name, dept);
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
		/*++top은 top = top + 1을 의미한다.*/
	}

	Student pop() {
		if (isEmpty()) { printf("stack is empty"); }
		return data[top--];
		/*뒤에 --가 붙은 것은 top을 먼저 쓰고 이후에 -1을 해준다. 즉 top출력하고 top = top -1 */
		/*항상 return과 함수의 자료형은 동일해야한다. void면 return이 없음*/
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