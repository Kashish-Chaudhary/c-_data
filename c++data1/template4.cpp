#include<iostream>
using namespace std;
static int num1=0,num2=1,r;
template<class type>
type fact (type num)
{
if(num==1)
return num1+num2;
else
{
r=num2+num1;
cout<<r<<" ";
num1=num2;
num2=r;
num--;
return fact(num);
}
}
int main()
{
int n;
cout<<"enter how many elements";
cin>>n;
cout<<0<<" "<<1<<" ";
cout<<fact(n-2);
}
