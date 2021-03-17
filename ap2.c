#include<stdio.h>
#include<stdlib.h>

void main(){
    int list[5];
    int *plist[5];

    list[0]=10;
    list[1]=11;

    plist[0]=(int*)malloc(sizeof(int));
    /*정수형 배열5개 선언 int list[5]
    list[0]의 값 출력10, list[0]의 주소값출력0061FF0C
    list+0을 해서 그대로 list의 시작주소출력0061FF0C
    list+1을 해서 다음 배열의 주소값출력0061FF10
    list+2를 해서 다음 배열의 주소값출력0061FF14
    list+3를 해서 다음 배열의 주소값출력0061FF18
    list+4를 해서 다음 배열의 주소값출력0061FF1C
    list[4]의 주소값출력0061FF1C
    배열의 이름과 연산을 하면 주소값연산이 되어서 다음 배열의 주소값을 출력함을 알았다*/
    printf("[----- [고승현] [2016039086] -----]\n");
    printf("list[0] \t=%d\n",list[0]);
    printf("address of list list[0] \t=%p\n",&list[0]);
    printf("address of list+0 \t=%p\n",list+0);
    printf("address of list+1 \t=%p\n",list+1);
    printf("address of list+2 \t=%p\n",list+2);
    printf("address of list+3 \t=%p\n",list+3);
    printf("address of list+4 \t=%p\n",list+4);
    printf("address of list[4] \t=%p",&list[4]);
    free(plist[0]);
}
