#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,mid;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++) cin>>ar[i];

    int l=*min_element(ar,ar+n);
    int h=*max_element(ar,ar+n);

    int cl,ce;
    int flag=0;
    while(l<h && flag==0)
    {
        mid=(l+h)/2;
        cl=0;ce=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]<mid) cl++;
            else if(ar[i]==mid) ce++;
        }

        if(cl<k && cl+ce==k) flag=1;
        else if(cl>=k) h=h-1;
        else if(cl<k && cl+ce<k) l=l+1;
    }
    if(flag==1) cout<<mid<<"\n";
    else cout<<"not found\n";


}