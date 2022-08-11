/*if와 else는 한 번만 사용할 수 있지만, else if는 여러 번 사용할 수 있습니다.

else if 앞에 else가 오면 컴파일 에러가 발생하므로 주의해야 합니다.*/

if (num1 == 10)
    printf("10입니다.\n");
else
    printf("10도 20도 아닙니다.\n");
else if (num1 == 20)    // else if 앞에 else가 오면 컴파일 에러 발생
    printf("20입니다.\n");

/*컴파일 결과
if_elseif_else.c(11): error C2181: if와 짝을 이루지 않는 잘못된 else문입니다.*/
