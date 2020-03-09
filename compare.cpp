#include <iostream>
using namespace std;
int main() {
  int n,i,j,k;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            for(k=j;k<n;k++)
            {
                a[k]=a[k+1];
            }
            n--;j--;i--;
        }

    }
  }
  for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
 /* for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
        a[j]=-1;
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==)
    {
      for(j=i;j<n;j++)
      {
        a[j]=a[j+1];
      }
      n--;i--;
    }
  }
  for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
*/
