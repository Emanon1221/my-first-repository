// #include <stdio.h>
// #include <conio.h>

// void fun(int n)
// {	switch(n)
// 	{	case 0:
// 			printf("Sunday\n");
// 			break;
// 		case 1:
// 			printf("Monday\n");
// 			break;
// 		case 2:
// 			printf("Tuesday\n");
// 			break;
// 		case 3:
// 			printf("Wednesday\n");
// 			break;
// 		case 4:
// 			printf("Thursday\n");
// 			break;
// 		case 5:
// 			printf("Friday\n");
// 			break;
// 		case 6:
// 			printf("Saturday\n");
// 			break; 
// 	}
// }

// int main()
// {	int n;
// 	do
// 	{	printf("Input a digital[0,6]:");
// 		scanf("%d",&n); 
// 	}while(n<0 || n>6);
// 	fun(n);
// 	return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {


// 	for(int i = 1;i <=100;i++)
// 	if(i == 7 || i%7 == 0 || i/10 ==7 ||i %10 == 7)
// 	{
// 		cout<<"敲桌子"<<endl;
// 	}
// 	else
// 	{
// 	    cout<<i<<endl;
// 	}
// 	system("pause");
// 	return 0;
// }


#include<iostream>
using namespace std;
int main()
{
	for(int i = 1;i<=9;i++)
	{
		//cout<<i<<endl;
		for(int j = 1;j <= i;j++)
		{
			cout<<j<<"*"<<i<<"="<<i*j<<"  ";
		}
		cout<<endl;
	}





	system("pause");
	return 0;
}