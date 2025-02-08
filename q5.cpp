#include <iostream>
using namespace std;
int main()
{
    int b,c;  
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Matrix:"<<endl;
    for (b=0;b<3;b++)
    {
        for (c=0;c<3;c++)
        {
            cout<<a[b][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Rotated Matrix:"<<endl;
    for (b=0;b<3;b++)
    {
        for (c=2;c>=0;c--)
        {
            cout<<a[c][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}