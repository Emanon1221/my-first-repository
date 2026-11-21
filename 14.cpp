#include<iostream>
using namespace std;
int main()
{
    cout<<"打分"<<endl;
    int a = 0;
    cin>>a;
    cout<<"分数是"<<a<<endl;
    switch(a)
    {
    case 10:
        cout<<"ok"<<endl;
        break;
    case 8:
        cout<<"嗯"<<endl;
        break;
    default:
        cout<<"shit"<<endl;
        break;
    }



    system("pause");

    return 0;
}