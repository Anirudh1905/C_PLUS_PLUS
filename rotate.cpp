#include <iostream>

using namespace std;

int main()
{
    int i,j,n,d,x,f,l,a[100];
    cout<<"enter no. of input"<<endl;
    cin>>n;
    cout<<"enter 1 for right rotate"<<endl<<"enter 2 for left rotate\n";
    cin>>x>>d;
    cout<<"enter elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(x==1)
    {
        for(i=0;i<d;i++)
        {
            l=a[n-1];
            for(j=n-1;j>0;j--)
            {
                a[j]=a[j-1];
            }
            a[j]=l;
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else if(x==2)
    {
        for(i=0;i<d;i++)
        {   f=a[0];
            for(j=0;j<n;j++)
            {
                a[j]=a[j+1];
            }a[n-1]=f;
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else cout<<"invalid input";
    return 0;
}
