#include<iostream>
using namespace std;
int main()
{
    int a, b, c=0, d, e=0 ;
    cout<<"enter your number: ";
    cin>>a;
    for(b=0;b<=a;b++)
    {
        if(a%b==0)
        {
            c++;
        }
        

    }
    
   if(c<=2)
    {
        cout<<"this is a prime number";
    }
    
    else
    {
        cout<<"this is not a prime number: "<<endl;
        for(b=0;b<=a;b++)
        cout<<"The factors are: ";
        if (a%b==0)
        {
           cout<<b;
        }
    }
    
    
    cout<<"the next prime number is: ";
    while(e==2)
    {
    a++;
    for(b=0;b<=a;b++)
    {
        if(a%b==0)
        {
            e++;
        }
    }
    cout<<a;
    
    }
   return 0;

}