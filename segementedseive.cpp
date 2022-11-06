#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<bool> seive(N+1);
void Createseive()
{
for(int i=2;i<=N;i++)
{
    seive[i] = true;
}
for(int i=2;i*i<=N;i++)
{
    if(seive[i]==1)
    {
        for(int j=i*i;j<=N;j++)
        {
            seive[j] = false;

        }
    }
}
}
vector<int> primes(int N)
{
    vector<int> a;
    for(int i=2;i<=N;i++)
    {
        if(seive[i]==true)
        {
a.push_back(i);
        }
    }
    return a;
}
int main()
{
    Createseive();
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        vector<int> prime = primes(sqrt(r));
vector<int> arr(r-l+1);
for(int i=2;i<r-l+1;i++)
{
    arr[i] = 1;

}
for(auto pr :prime)
{
    int one = (l/pr)*pr;
    if(one <l)
    one +=pr;
    for(int j = max(one,pr*pr);j<=r;j+=pr) 
    {
        arr[j-l]=0;

    }
}
for(int i=l;i<=r;i++)
{
    if(arr[i-l]==1)
    {
        cout<<i<<" ";
    }
}

    }

    return 0;
}