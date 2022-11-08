#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll extendedGcd(ll a,ll b,ll & x,ll & y)
{
    if(b==0)
    {
        x =1;
        y = 0;
        return a;
    }
ll dx,dy;
    int g = extendedGcd(b,a%b,dx,dy);
    x = dx;
    y = dx-dy*(a/b);
    return g;

}
int main()
{

ll a,b,x,y;
cin>>a>>b;
int g = extendedGcd(a,b,x,y);
cout<<a<<" "<<b<< " "<<g<<endl;

    return 0;
}