#include<stdio.h>
/*구조체 선언*/
struct student1{
    char lastName;
    int studentId;
    char grade;
};
/*tydef된 구조체 선언*/
typedef struct{
    char lastName;
    int studentId;
    char grade;
}student2;

int main(){
    struct student1 st1={'A',100,'A'};
    /*구조체 변수 선언후 해당 구조체의 데이터출력 확인*/
    printf("[----- [이름:고승현] [2016039086] -----]\n");
    printf("st1.lastNmae=%c\n",st1.lastName);
    printf("st1.studentId=%d\n",st1.studentId);
    printf("st1.grade=%c\n",st1.grade);

    student2 st2={'B',200,'B'};
    /*tydef된 구조체 변수 선언후 해당 구조체의 데이터출력 확인*/
    printf("st2.lastNmae=%c\n",st2.lastName);
    printf("st2.studentId=%d\n",st2.studentId);
    printf("st2.grade=%c\n",st2.grade);

    student2 st3;
    st3=st2;
    /*구조체 대입연산자 이용해서 같은 데이터 대입후 출력확인*/
    printf("st3.lastNmae=%c\n",st3.lastName);
    printf("st3.studentId=%d\n",st3.studentId);
    printf("st3.grade=%c\n",st3.grade);
    /*구조체간에 ==연산자 컴파일오류 확인*/
    /*equallity test*/
    /*
    if(st3==st2)
        printf("equal\n");
    else
        printf("not equal\n");   */
    return 0; 
}
