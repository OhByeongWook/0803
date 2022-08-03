#include <stdio.h>
#include <string.h>

struct grade
{
    char Name[20];
    int num;
    int Korean;
    int English;
    int Math;
};

int main()
{
    struct grade class_grade_1;
    
    /*strcpy(class_grade_1.Name, "유재숙");
    class_grade_1.num = 15;
    class_grade_1.Korean = 90;
    class_grade_1.English = 100;
    class_grade_1.Math = 95; */

    printf("input Name : ");
    scanf("%s", class_grade_1.Name);
    printf("input number : ");
    scanf("%d", &class_grade_1.num);
    printf("input Korean Score : ");
    scanf("%d",&class_grade_1.Korean);
    printf("input English Score : ");
    scanf("%d",&class_grade_1.English);
    printf("input Math Score : ");
    scanf("%d",&class_grade_1.Math);



    printf("[%d]번 [%s]의 성적표입니다.\n", class_grade_1.num, class_grade_1.Name);

    printf("국어 : %d\n", class_grade_1.Korean);
    printf("영어 : %d\n", class_grade_1.English);
    printf("수학 : %d\n", class_grade_1.Math);
}