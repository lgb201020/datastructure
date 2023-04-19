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

/*int형 변수 tmp를 score[0]으로 초기화를 해주고 i = 1로 i도 초기화, 
score[i]가 tmp보다 크면 tmp가  score[i] 값을 갖게되고 작으면 tmp = tmp 이고 i에 1을 더해준다. 
이거를 i가 n-1이 될 때 까지 진행한다. */

void main() {
	
	int score[5] = { 1,10,2,4,5 };
	int out;
	out = findArrayMax(score, 5);
	printf("result = %d", out);
	
}
/*메인 함수, int score[5] = { 1,10,2,4,5 }로 써서 array의 크기, 구성 요소, 구성 요성의 자료형을 정의함, 
out이라는 int형 변수에 위에 정의한 함수와 방금 정의한 array를 통해 얻은 값을 넣겠다고 정의함
printf로 출력함*/