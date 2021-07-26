#include<iostream>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    bool flag=0;
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (arr[i][j]==x)
            {
                cout<<i<<" "<<j<<"\n";
                flag=1;
            }
        }
    }
    if(flag)
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found";
    }
}