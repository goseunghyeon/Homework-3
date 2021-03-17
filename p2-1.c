#include<stdio.h>

#define MAX_SIZE 100
float sum(float [],int);
float input[MAX_SIZE],answer;
int i;
void main(){
    for(i=0;i<MAX_SIZE;i++){
        input[i]=i;
    }
    /*for checking call by reference*/
    /*실수형 배열 input[MAX_SIZE]선언후 해당 배열의 주소출력:004070A0
    실수형 변수answer에 sum함수호출 매개변수로(배열input,MAX_SIZE값)넘겨줌
    sum함수:매개변수로 받은 배열의 주소값 list가 저장
    list값 출력시 매개변수로 받은 배열의 주소값출력004070A0
    list의 주소값출력시 list의 주소값출력0061FF00
    매개변수로 받은 배열의 원소들의 합을 리턴4950.000000후 메인함수에서 출력
    배열을 매개변수로 넘겨줄경우 참조에의한 호출로서 배열의 원본 즉 주소값이 인자로 넘어가고
    그게아닌 지역변수를 넘겨줄경우 값에의한 호출로서 해당 변수값을 복사해서 복사한 값을넘겨주는
    것을 알게되었다*/
     printf("[----- [고승현] [2016039086] -----]\n");
    printf("address of input=%p\n",input);
    answer=sum(input,MAX_SIZE);
    printf("The sum is:%f\n",answer);
}

float sum(float list[],int n){
    printf("value of list=%p\n",list);
    printf("address of list=%p\n\n",&list);
    int i;
    float tempsum=0;
    for(i=0;i<n;i++){
        tempsum+=list[i];
    }
    return tempsum;
}
