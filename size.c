#include<stdio.h>
#include<stdlib.h>

void main(){
    int**x;
    /*32비트 운영체제
    이중포인터 변수x선언
    x의 크기출력시 32비트운영체제여서 4바이트-주소
    *x의 크기출력시 32비트운영체제여서 4바이트-주소
    **x의 크기출력시 정수형크기 4바이트출력됨을 알수있다*/
    printf("[----- [이름:고승현] [2016039086] -----]\n");
    printf("sizeof(x)=%u\n",sizeof(x));
    printf("sizeof(*x)=%u\n",sizeof(*x));
    printf("sizeof(**x)=%u\n",sizeof(**x));
}
