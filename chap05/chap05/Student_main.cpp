#include "Student_Stack.h"
//main�Լ��� �ݵ�� 1���� �����ؾ��Ѵ�.

void main()
{
	Student s;
	ArrayStack a;
	a.push(Student(202017861, "�̱��", "���ڰ��к�"));
	a.push(Student(202122514, "�̼���", "���ڰ��к�"));
	a.push(Student(202317861, "�溹��", "���ø��� ų���а�"));
	//�溹���� �� �������� ����
	a.display();
	a.pop();
	a.display();

}