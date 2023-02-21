
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int Maximize(int a[],int n)
    {
        long res = 0;
        sort(a , a+n);
        
        for(int i=0; i<n; i++){
           res += (long) a[i]*i;
        }
        long sum = res % 1000000007;
        return (int)sum;
    }
};


int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
