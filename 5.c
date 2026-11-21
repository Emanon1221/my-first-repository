#include<stdio.h>
int main()
{

    int fahr,lower,upper;
    double celsius;

    printf("enter lower:");
    scanf("%d", &lower);
    printf("enter upper:");
    scanf("%d", &upper);

    if(lower<=upper){
        printf("fahr celsius\n");
        for(fahr = lower ; fahr <= upper; fahr++){
            celsius = (5.0/9.0)*(fahr - 32);
            printf("%4d6.1f\n", fahr, celsius);
        }
    }
    }else{
        printf("Invalid Value!\n");
      }
return 0;




}   
