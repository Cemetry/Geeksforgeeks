/**Binary_Search**/
/*
#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int s)
{
    for(int i = 0;i<s;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];
    cout<<"Array"<<endl;
    show(a,n);

    sort(a,a+n);
    cout<<"After sorting"<<endl;
    show(a,n);
    int m;
    cout<<"Enter the searching element"<<endl;
    cin>>m;
    if(binary_search(a,a+n,m))
        cout<<"Elements found"<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}
*/
/**
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int m;
        cout<<"Enter the searching element"<<endl;
        cin>>m;
    if(binary_search(a,a+n,m))
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}
**/
