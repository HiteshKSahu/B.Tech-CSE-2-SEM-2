#include<iostream>
#include <climits>
using namespace std;
int main()
{
   int i,n, a[100], larg, seclarg, sml, secsml ;
    cout<<"enter the number of arrays you want to insert: "; 
    cin>>i;
    for(n=0;n<i;n++)
    {
        
        cout<<"enter your number "<<" ";
        cin>>a[n];
    }
    cout<<endl;
    if(n<=100)
    {
        cout<<"here is the reverse order"<<endl;
        for(n=i-1;n>=0;n--)
        {
            cout<<"the reverse order "<<a[n];
            cout<<endl;
        }
     }

     //code for the "the second largest number is ";
     larg=INT_MIN;
     seclarg=INT_MIN;
     for(n=0;n<i;n++)
     {
        if(a[0]<a[n])
        a[0]=a[n];
        larg=a[0];
        seclarg=a[0];
     }
     for(n=0;n<i;n++)
     {
        if(a[0]>seclarg&&a[0]<larg)
        {
            a[n]=seclarg;
        }
        else if(a[n]>larg)
        {
            seclarg=larg;
            larg=a[n];
        }
     }
     if(seclarg==INT_MIN)
     {
        cout<<endl<<"no second largest element";
     }
     else
     {
        cout<<endl<<"the second largest element is "<<seclarg;
     }
     
     //code for the "the second smallest number is ";
     sml=INT_MAX;
     secsml=INT_MAX;
        for(n=0;n<i;n++)
        {
            if(sml<a[i] && secsml>a[i])
            {
                a[i]=secsml;
            }
            else if(a[n]<sml)
            {
                secsml=sml;
                sml=a[i];
            }
        }
        if(secsml==INT_MAX)
     {
        cout<<endl<<"no second smallest element";
     }
     else
     {
        cout<<endl<<"the second smallest element is "<<seclarg;
     }

    return 0;
}