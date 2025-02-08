#include<iostream>
using namespace std;
int main()
{
    int j,i, arr[4][4],n,m, num = 1 ;
    cout<<"enter the value of rows: ";
    cin>>n;
    cout<<"enter the value of columns: ";
    cin>>m;

    int top=0, bottom=n-1, left=0, right=m-1 ;
    while(top<=bottom && left<=right){

    for (i=left;i<=right;i++)
    {
        arr[top][i]=num++;
    }
    top++;
    for(i=top; i<=bottom; i++)
    {
        arr[i][right]=num++;
    }
    right--;
    if(top<= bottom)
    {
        for(i=right;i>=left;i--)
        {
            arr[bottom][i]=num++;
        }
        bottom--;
    }
    if(left<=right)
    {
        for(i=bottom;i>=top;i--)
        {
            arr[i][left]=num++;
        }
        left++;
    }
}
    
    for( i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
    
}