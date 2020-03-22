#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++) cin>>ar[i];
    int sm=0,start=0;
    j=0;
    for(i=0;i<n && j==0;i++)
    {
        sm+=ar[i];
        //cout<<k<<"\n";
        //cout<<sm<<"\n";
        while(sm>k && start<i-1)
        {
            sm-=ar[start];
            start++;
            cout<<sm<<"\n";
        }
        if(sm==k) j=1;`
    }
    if(j==1)
    cout<<start<<" "<<i-1<<"\n";
    else cout<<"Not found\n";

    return 0;
}