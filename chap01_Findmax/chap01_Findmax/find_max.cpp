#include <cstdio>

int findArrayMax(int score[], int n) 
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {        
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}

	return tmp;
}

/*int�� ���� tmp�� score[0]���� �ʱ�ȭ�� ���ְ� i = 1�� i�� �ʱ�ȭ, 
score[i]�� tmp���� ũ�� tmp��  score[i] ���� ���Եǰ� ������ tmp = tmp �̰� i�� 1�� �����ش�. 
�̰Ÿ� i�� n-1�� �� �� ���� �����Ѵ�. */

void main() {
	
	int score[5] = { 1,10,2,4,5 };
	int out;
	out = findArrayMax(score, 5);
	printf("result = %d", out);
	
}
/*���� �Լ�, int score[5] = { 1,10,2,4,5 }�� �Ἥ array�� ũ��, ���� ���, ���� �伺�� �ڷ����� ������, 
out�̶�� int�� ������ ���� ������ �Լ��� ��� ������ array�� ���� ���� ���� �ְڴٰ� ������
printf�� �����*/