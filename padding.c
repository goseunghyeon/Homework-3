#include<stdio.h>

struct student{
    char lastName[13];/*13 byte*/
    int studentId;    /*4byte*/
    short grade;      /*2byte*/  
};

int main(){
    struct student pst;
    /*구조체의 크기가 19byte가아니라 24byte가 출력됨을 확인
    문자형 배열의 크기는13byte이지만 패딩이 일어나서+3byte=16byte로패딩
    short형은 2byte이지만 패딩이 일어나서+2byte=4byte
    16+4+4=24byte로 확인이 가능하다*/
    printf("[----- [이름:고승현] [2016039086] -----]\n");
    printf("size of student=%ld\n",sizeof(struct student));
    printf("size of int=%ld\n",sizeof(int));
    printf("size of short=%ld\n",sizeof(short));

    return 0;
}
