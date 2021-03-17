#include<stdio.h>

void print1(int *ptr,int rows);
/*int one[]5개의 원소를 갖는배열을 선언후 초기화
배열의 이름으로 배열의 주소값출력:0061FF0C
배열의 이름의 주소값을 출력:0061FF0C
배열의 첫번째 원소의 주소값을 출력:0061FF0C
배열의 이름의 주소값과 해당 배열이름에 할당된값과 첫번째배열의 주소값이
같음을 알았다*/
int main(){
    int one[]={0,1,2,3,4};
     printf("[----- [고승현] [2016039086] -----]\n");
    printf("one         =%p\n",one);
    printf("&one        =%p\n",&one);
    printf("&one[0]     =%p\n",&one[0]);
    printf("\n");
    print1(&one[0],5);
    return 0;
}
/*메인 함수에서 함수 호출후 정수형 포인터ptr은 참조에의한 호출로서
one배열의 첫번째 주소값을 저장하고있다
rows는 값에 의한 호출로서5값을 저장하고있다
반복문을 통해 포인터연산을 해서 one배열의 주소와 해당 배열의 원소를 
순서대로 출력하였다 배열의 주소는 연속되어있음을 알았고 
포인터 연산시 해당 배열의 원소의 데이터타입의 크기로서 연산이 됨을 알았다*/
void print1(int *ptr,int rows){

    int i;
    printf("Address \tContents\n");
    for(i=0;i<rows;i++){
        printf("%p\t%d\n",ptr+i,*(ptr+i));
        printf("\n");
    }
}
