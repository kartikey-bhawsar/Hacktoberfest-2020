#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define vlli vector <long long int>
#define lli long long int
//#define m 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i;
    lli n,m,a,pos,brk,c;
    cin>>t;
    while(t--)
    {
        c=0;
        brk=0;
        m=1;
        cin>>n;
        int v[n]={1};
        int a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pos=a[0];
        for(i=1;i<n&&i<=10;i++)
        {
            if(a[i]-pos>2)
            {
                v[brk]=m;
                brk++;
                m=1;
            }
            if(a[i]-pos<=2)
            {
                m++;
                c++;
            }
            pos=a[i];
        }
        if(c==0)
        {
            m=1;
            cout<<m<<" "<<m<<endl;
        }
        else if(brk==0)
        {
            cout<<m<<" "<<m<<endl;
        }
        else{
        v[brk]=m;
        sort(v,(v+brk+1));
        cout<<v[0]<<" "<<v[brk]<<endl;
        }
    }
}
