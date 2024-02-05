#include<bits/stdc++.h>
using namespace std;


float max(float a,int b,int c)
{
    if (a > b && a > c)
    {
        cout << c << " is the maximum number" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the maximum number" << endl;
    }
    else
    {
        cout << c << " is the maximum number" << endl;
    }
}

int max(int a,int b,int c){
    if(a>b && a>c)
    {
        cout<<c<<" is the maximum number"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the maximum number"<<endl;
    }
    else{
        cout <<c<<" is the maximum number"<<endl;
    }
}

int main()
{
    cout<<"Enter the Three No:"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    max(a,b,c);
}