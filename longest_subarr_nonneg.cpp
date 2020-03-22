#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int i,j,k;
    for(i=0;i<n;i++) cin>>ar[i];
    int cnt=0,mxcnt=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]>=0)
        {
            cnt++;
            if(cnt>mxcnt)mxcnt=cnt;
        }
        else cnt=0;
    }
    cout<<mxcnt<<"\n";
}