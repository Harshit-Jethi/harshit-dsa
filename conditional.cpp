#include<iostream>
using namespace std;
int main()
{
   /* int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    if(a>b)
    {
       cout<<"the greatest number is :"<<a<<endl;
    }
    else
    {
        cout<<"the greatest number is :"<<b<<endl;
    }
*/
/*int a;
cout<<"enter the number"<<endl;
cin>>a;
if (a>0)
{
    cout<<"a is the positive number"<<a;
}
    else
    {
        if(a<0){
        cout<<"a is the neative number"<<a;
        }
        else{
            cout<<"a is equal to zero"<<a;
        }
     }
*/
/*int a=9;
if(a==9)
{
    cout<<"nine"<<endl;
}
if(a>0)
{
    cout<<"positive"<<endl;
}
else{
    cout<<"negative";
}
*/
/*int a=2;
int b=a+1;
if((a=3)==b){
cout<<a;
}
else{
    cout<<a+1;
} 
*/
/*char ch='d';
if(ch>='A'&& ch<='Z')
{
    cout<<ch<<"is in the upper case"<<endl;
}
if(ch>='a'&& ch<='z')
{
    cout<<ch<<"is in the lower case"<<endl;
}
else{
    cout<<ch<<"is not a character"<<endl;
}
*/
/*int n;
int i=1;
cout<<"enter the value of n"<<endl;
cin>>n;
while(i<=n)
{
    cout<<i<<" ";
    i=i+1;
}
*/
/*int n;
int i=2;
int sum=0;
cout<<"enter the number"<<endl;
cin>>n;
while(i<=n)
{
    sum=sum+i;
    i=i+2;
}
cout<<sum<<endl;
*/
int n;
int i=2;
cout<<"enter the number"<<endl;
cin>>n;
while(i<n)
{
    if(n%i==0){
        cout<<"the given number is prime"<<i<<endl;
    }
    else {
        cout<<"the given number is not prime"<<i<<endl; 
    }
    i=i+1;
}
}

