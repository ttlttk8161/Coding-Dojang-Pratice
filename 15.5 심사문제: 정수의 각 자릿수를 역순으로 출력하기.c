/* 
표준 입력으로 만 단위의 정수 하나가 입력됩니다. 
입력된 정수의 각 자릿수를 역순으로 출력하는 프로그램을 만드세요
(scanf 함수 전에 문자열을 출력하면 안 됩니다). 
예를 들어 43561이라면 1 6 5 3 4를 출력하면 됩니다. 
각 자릿수는 공백으로 띄우세요.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, num6;
    
    scanf("%d", &num1);
    
    num2 = num1 % 10;
    printf("%d ", num2);
    
    num1 /= 10;
    num3 = num1 % 10;
    
    printf("%d ", num3);
    
    num1 /= 10;
    num4 = num1 % 10;
    
    printf("%d ", num4);
    
    num1 /= 10;
    num5 = num1 % 10;
    
    printf("%d ", num5);
    
    num1 /= 10;
    num6 = num1 % 10;
    
    printf("%d", num6);
    
    return 0;
}
