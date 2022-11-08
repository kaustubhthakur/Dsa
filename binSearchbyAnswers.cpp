#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
#include <cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include <sstream>
#include<set>
#include<map>
#include<cstring>
#include<numeric>
#include<bitset>
#include<cassert>
#include<deque>
#include<stack>
#include<queue>
#include <stdio.h>
#include<stdlib.h>
//#include<Windows.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return (b,a%b);
}
char s[200005];
void solve()
{
cout<<"Nothing"<<endl;
}
ll w,h,n;
bool good(ll x)
{
    return (x/w)*(x/h)>=n;
}
int main()
{

int t;
cin>>t;
while(t--)
{
    
    cin>>w>>h>>n;
    ll l = 0;
    ll r = 1;
    while(!good(r)) r*=2;
    while(r>l+1)
    {
        int m = (l+r)/2;
        if(good(m))
        {
            r=m;
        }
        else 
        {
            l = m;
        }
    }
    cout<<r<<endl;
}
    return 0;

}