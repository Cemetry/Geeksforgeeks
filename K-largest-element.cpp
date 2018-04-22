#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n,k;
vector<int>v;
int a;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        for(int i = 0;i<n;i++)
        {
          cin>>a;
          v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        for(int i = 0;i<k;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
