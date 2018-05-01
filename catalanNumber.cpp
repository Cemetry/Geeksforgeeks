/** complexity O(n)**/

#include<iostream>
using namespace std;
int cat(int n)
{
    if(n<=1)
        return 1;
    int tot=0;
    for(int i = 0;i<n;i++){
        tot+=cat(i)*cat(n-i-1);
    }
    return tot;
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i = 0;i<n;i++)
        {
            cout<<cat(i)<<" ";
        }
    }
    return 0;
}

/**Dp Solution**/
#include<iostream>
using namespace std;
int catdp(int n)
{

    int cat[n+1];
    cat[0]=cat[1]=1;
    for(int i = 2;i<=n;i++)
    {
        cat[i]=0;
        for(int j=0;j<i;j++)

            cat[i]+=cat[j]*cat[i-j-1];

    }
    return cat[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
        cout<<catdp(i)<<" ";
    return 0;
}
