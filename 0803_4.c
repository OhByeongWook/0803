#include <stdio.h>
enum Week{Sun, Mon, Tue, Wed, Thu, Fri, Sat };

void main(void)
{
    enum Week day;
    int MonthOfFirst;   //이번달에 첫 번째 시작한 요일
    int Today;
    printf("이 달의 1일이 무슨 요일인가요?\n");
    printf("일요일이면 0\n");
    printf("월요일이면 1\n");
    printf("화요일이면 2\n");
    printf("수요일이면 3\n");
    printf("목요일이면 4\n");
    printf("금요일이면 5\n");
    printf("토요일이면 6\n");
    printf("번호를 누르세요. --> ");
    scanf("%d", &MonthOfFirst);

    printf("\n\n 오늘은 며칠인가요? 날짜를 입력해주세요. --> ");
    scanf("%d", &Today);
    day = (Today + MonthOfFirst - 1) % 7;

    switch (day)
    {
        case Sun:
            printf("오늘은 일요일입니다. \n");
            break;
        case Mon:
            printf("오늘은 월요일입니다. \n");
            break;
        case Tue:
            printf("오늘은 화요일입니다. \n");
            break;
        case Wed:
            printf("오늘은 수요일입니다. \n");
            break;
        case Thu:
            printf("오늘은 목요일입니다. \n");
            break;
        case Fri:
            printf("오늘은 금요일입니다. \n");
            break;
        case Sat:
            printf("오늘은 토요일입니다. \n");
            break;
    }
}