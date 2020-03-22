#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k;
    unordered_map<int, int> map;
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
        if(sm==k)
        {
            cout<<0<<" "<<i<<"\n";j=1;
        }
        else if(map.find(sm-k)!=map.end())
        {
            cout<<map[sm-k]+1<<" "<<i<<"\n";j=1;
        }
        map[sm]=i;
    }
    if(j==0)
    cout<<"Not found\n";

    return 0;
}