Codeforces Round #364 (Div. 2), problem: (B) Cells Not Under Attack


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,m,x,y,i,j,c1=0,c2=0;
    cin>>n>>m;
    bool a[n];
    bool b[n];
    fill(a,a+n,false);
    fill(b,b+n,false);
    while(m!=0)
    {
        cin>>x>>y;
        
        if(a[x-1]==false)
        {
            a[x-1]=true;
            c1++;
        }
        
        if(b[y-1]==false)
        {
            b[y-1]=true;
            c2++;
        }
        // cout<<c1<<" "<<c2<<endl;
        cout<<(n-c1)*(n-c2)<<" "<<endl;
        m--;
    }
}
