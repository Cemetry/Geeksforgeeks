#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long n;
    cin>>tc;
    while(tc--)
    {
        long long sum = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        sum+=pow((2*i),2);
    }
    cout<<sum<<endl;
    }
    return 0;

}
