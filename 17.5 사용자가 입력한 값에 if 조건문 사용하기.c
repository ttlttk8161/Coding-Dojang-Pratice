//특정한 정수값 대입 시 if 조건문 작동하게 만들기. 
//나의 첫 if 조건문 식 작성. 


#include <stdio.h>

int main()
{
	int num1;
	
	scanf("%d", &num1);
	
	if( num1 == 111 )
		printf("%d이네요", num1);
		
	if( num1 == 12345)
	{
		printf("%d입니다", num1 );
	}
	return 0;
}


/*
  입력
  111
  출력
  111이네요
  
  입력
  12345
  출력
  12345입니다
  */
