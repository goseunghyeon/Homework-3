#include<stdio.h>
#include<stdlib.h>

void main(){
    int list[5];
    int *plist[5]={NULL,};

    plist[0]=(int*)malloc(sizeof(int));

    list[0]=1;
    list[1]=100;

    *plist[0]=200;
    /*list[5]정수형 배열5개선언,*plist[5]정수형 포인터배열5개선언 동시에 null로 초기화
    plist[0]에 동적할당->힙영역에 정수형크기만큼 공간확보
    list[0]에1할당 list[1]에100할당 *plist[0]해당 포인터배열이 지칭하는 공간에200할당
    list[0]값 출력1 list[0]주소값 출력0061FF0C list값출력 0061FF0C &list값출력0061FF0C
    첫번쨰 배열의 주소값과 list값,list의 주소값이 동일하게 출력됨을 알았다
    */
    printf("[----- [고승현] [2016039086] -----]\n");
    printf("value of list[0]=%d\n",list[0]);
    printf("addresss of list[0]         =%p\n",&list[0]);
    printf("value of list                =%p\n",list);
    printf("address of list (&list)     =%p\n",&list);
    printf("-------------------------------------------\n\n");
   /*list[1]의 값 출력100, list[1]의 주소값출력0061FF10 
    *(list+1)배열의 주소값+1(sizeof(int))로서 연산이 되어서 간접참조 연산자에의해
    2번쨰 배열의 원소인 100출력, 해당 주소값 출력0061FF10출력
    배열의 주소에 연산은 해당 배열의 원소의 크기로서 연산이 됨을 알게되었다
    배열의 주소는 연속된 메모리 공간에 저장이되고 해당offset값만큼 배열의 시작주소에
    offset*datasize만큼 증가되어서 주소값이 할당됨을 알게되었다*/
    printf("value of list[1]=%d\n",list[1]);
    printf("address of list[1]=%p\n",&list[1]);
    printf("value of *(list+1)=%d\n",*(list+1));
    printf("address of list+%p\n",list+1);
    printf("--------------------------------------------\n\n");
    /* *plist[0]포인터 변수가 지칭하는 주소에 할당된 값출력200
    &plist[0]포인터변수의 주소값출력0061FEF8,&plist 배열의 시작주소 출력0061FEF8
    plist값 출력 역시 주소값0061FEF8 나머지 배열의 원소는 null로 초기화되어서
    00000000출력됨을 알수있다*/
    printf("value of *plist[0]=%d\n",*plist[0]);
    printf("&plist[0]         =%p\n",&plist[0]);
    printf("&plist            =%p\n",&plist);
    printf("plist             =%p\n",plist);
    printf("plist[0]          =%p\n",plist[0]);
    printf("plist[1]          =%p\n",plist[1]);
    printf("plist[2]          =%p\n",plist[2]);
    printf("plist[3]          =%p\n",plist[3]);
    printf("plist[4]          =%p\n",plist[4]);
    free(plist[0]);
}
