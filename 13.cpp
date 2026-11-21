#include<iostream>
using namespace std;
int main()
{
    int a, b , c;
    a = 0;
    b = 0;
    c = 0;
    cout<<"那只猪最重"<<endl;
    cin>>a ,b ,c;
    if(a > b && a > c)
    {
        cout<<"第a只最重"<<endl;
        if(b > c)
        {
            cout<<"第b只第二重"<<endl;
            cout<<"第c只最轻"<<endl;
        }
        else
        {
            cout<<"第c只第二重"<<endl;
            cout<<"第b只最轻"<<endl;
        }
    }
    else if(b >a && b>c)
    {
        cout<<"b最重"<<endl;
        if(a > c)
        {
            cout<<"第a只第二重"<<endl;
            cout<<"第c只最轻"<<endl;
        }
        else
        {
            cout<<"第c只第二重"<<endl;
            cout<<"第a只最轻"<<endl;
        }
    }
    else
    {
        cout<<"c最重"<<endl;
        if(b > a)
        {
            cout<<"第b只第二重"<<endl;
            cout<<"第a只最轻"<<endl;
        }
        else
        {
            cout<<"第a只第二重"<<endl;
            cout<<"第b只最轻"<<endl;
        }
    }


}