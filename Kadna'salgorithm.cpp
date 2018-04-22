
#include<iostream>
using namespace std;
int maxsub(int *arr,int size){

int cmx=arr[0],gmx=arr[0];

for(int i=1;i<size;i++)

{
    if(cmx+arr[i]>=arr[i]){
        cmx+=arr[i];

    }
    else{
        cmx=arr[i];

    }
    if(gmx<=cmx)
    {
        gmx = cmx;
    }
}
return gmx;
}
int main()
{
    int arr[100];
    int n;
    int tc;
    cin>>tc;
    while(tc--)
    {
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsub(arr,n)<<endl;
    }
    return  0;
}


/**Kadna's algorithm**/
/*
#include<iostream>
using namespace std;
int maxsub(int a[],int size)
{
    int cmx = a[0];
    int gmx = a[0];
    for(int i = 1;i<size;i++)
    {
        if(cmx+a[i]>=cmx)
        {
            cmx+=a[i];
        }
        else
        {
            cmx=a[i];
        }
        if(gmx<=cmx)
        {
            gmx = cmx;
        }

    }
    return gmx;
}
int main()
{
    int tc;
    int n;
    cin>>tc;

    while(tc--)
    {
        cin>>n;
          int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<maxsub(a,n)<<endl;


    }
    return 0;
}
*/
