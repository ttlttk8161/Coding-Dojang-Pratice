/*표준 입력으로 국어, 영어, 수학, 과학 점수가 입력됩니다. 여기서 네 과목의 평균 점수가 85점 이상일 때 합격이라고 정했습니다. 
평균 점수에 따라 "합격", "불합격"을 출력하는 프로그램을 만드세요
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 
단, 점수는 0점부터 100점까지만 입력받을 수 있으며 범위를 벗어났다면 "잘못된 점수"를 출력하고 합격, 불합격 여부는 출력하지 않아야 합니다.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.*/

// 1트 : 35분 --> 실패
// 2트 : 15분 --> 실패
// 검토해설 확인후 3트 : 5분 --> 성공

#include <stdio.h>

int main()
{
	int score1;
	int score2;
	int score3;
	int score4;


	scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
	int total = (score1+score2+score3+score4)/4;
	
	if( score1 < 0 || score1 >100 || score2 < 0 || score2 >100 || score3 < 0 || score3 >100 || score4 < 0 || score4 >100 )
		printf("잘못된 점수");
	else{
		if( total >= 85 )
			printf("합격");
		else
			printf("불합격");
			
	}
	
	return 0;
}
