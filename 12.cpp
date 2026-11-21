#include<iostream>
using namespace std;
int main()
{

    int a = 0;
    cout<<"请告诉我你的高考成绩"<<endl;
    cin>>a;
    if(a > 600)
    {
        cout<<"恭喜你考上了一本大学"<<endl;
        if(a > 700)
        {
            cout<<"北大"<<endl;
        }
        else if(a >= 650)
        {
            cout<<"清华"<<endl;
        }
        else
        {
            cout<<"人大"<<endl;
        }
    }
    else if(a >500)
    {
        cout<<"二本"<<endl;
    }
    else if(a >400)
    {
        cout<<"三本"<<endl;
    }
    else
    {
        cout<<"抱歉"<<endl;
    }
    system("pause");
    return 0;

}