#include <iostream>

using namespace std;

int main()
{
    int *p1,a;
    int *p2,b;
    int sum;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    cout<<"Sum is="<<sum<<endl;
    return 0;
}