/*시험 점수를 입력받아 90 ~ 100점은 A, 
80 ~ 89점은 B, 
70 ~ 79점은 C, 
60 ~ 69점은 D, 
나머지 점수는 F를 출력하는 프로그램을 작성하시오.*/
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if(score <= 100 && score >= 90)
        puts("A");
    else if(score <= 89 && score >= 80)
        puts("B");
    else if(score <= 79 && score >= 70)
        puts("C");
    else if(score <= 69 && score >= 60)
        puts("D");
    else
        puts("F");
}