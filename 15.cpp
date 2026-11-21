// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 0;
//     while(a < 10)
//     {
//         cout<< a <<endl;
//         a++;

//     }




//     system("pause");
//     return 0;


// }


#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    srand((unsigned int)time(NULL));
    int a = rand()%100 +1;
    cout<<a<<endl;
    int b = 0;
    while(1)
    {
        cin>>b;
        if(a < b)
        {
            cout<<"大了"<<endl;
        }
        else if(a > b)
        {
            cout<<"小了"<<endl;
        }
        else
        {
            cout<<"恭喜"<<endl;
            break;
        }
    
    }


    system("pause");


    return 0;


}