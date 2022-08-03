#include <stdio.h>

int main()
{
    int money, c500, c100, c50, c10;

    printf("input change money : ");
    scanf("%d", &money);

    c500 = money/500; money = money%500;
    c100 = money/100; money = money%100;
    c50 = money/50; money = money%50;
    c10 = money/10; money = money%10;

    printf("500 ==> %d개 \n", c500);
    printf("100 ==> %d개 \n", c100);
    printf("50 ==> %d개 \n", c50);
    printf("10 ==> %d개 \n", c10);

    return 0;
}


