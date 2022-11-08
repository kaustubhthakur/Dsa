#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
int l = 0;
int r = n-1;
bool flag = false;
while(r>=l)
{
    int m = (l+r)/2;
    if(a[m]==x)
    {
       flag = true;
        break;
    }
    else if(a[m]<x)
    {
        l = m+1;
    }
    else 
    {
        r = m-1;
    }
  
}

if(flag == true)

{
    cout<<"YES"<<endl;
}
else 
{
    cout<<"No"<<endl;
}
    return 0;
}