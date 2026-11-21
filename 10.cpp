// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 3;
//     cout<<a % b<< endl;

//     system("pause");

//     return 0; 


// }
#include<stdio.h>
int main()
{

    int x , y;
    double z;
    x = 0;
    y = 0;
    z = 0;
    scanf("%d %d",&x,&y);
    z = (double)(x - y)/y*100;
    if(x <= y && z < 10)
    {
        printf("OK\n");
        return 0;
    } else {
    }
        if(z < 50)
        {
            printf("Exceed %.0f %%. Ticket 200\n", z);
        }
         else if(z >= 50)
         {
             printf("Exceed %.0f %%. License Revoked\n", z);
         }
    return 0;
}
