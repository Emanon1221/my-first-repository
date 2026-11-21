#include<stdio.h>

int main()
{
    int start,end;
    scanf("%d%d", &start ,&end);

    int h1, h2 ,m1 ,m2;
    int h1 = start/100;
    int m1 = start%100;
    int h2 = end/100;
    int m2 = end%100;
    int total1 = h1*60 + m1;
    int total2 = h2*60 + m2;
    int differ = total2 -total1;
    int h = differ / 60;
    int m = differ % 60;
    printf("%02d:%02d\n",h,m);
    


    return 0;
}
