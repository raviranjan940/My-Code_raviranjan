#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    vector<int> firstLast = {-1, -1};
    for(int i=0; i<n;i++)
    {
        if(arr[i] == x){
            if(firstLast[0] == -1)
               firstLast[0] = i;
               
              firstLast[1] = i;
        }
    }
    return firstLast;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

