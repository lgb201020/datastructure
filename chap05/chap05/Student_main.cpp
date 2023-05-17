#include "Student_Stack.h"
//main함수는 반드시 1개만 존재해야한다.

void main()
{
	Student s;
	ArrayStack a;
	a.push(Student(202017861, "이기백", "전자공학부"));
	a.push(Student(202122514, "이순신", "전자공학부"));
	a.push(Student(202317861, "길복순", "넷플릭스 킬러학과"));
	//길복순을 맨 마지막에 넣음
	a.display();
	a.pop();
	a.display();

}