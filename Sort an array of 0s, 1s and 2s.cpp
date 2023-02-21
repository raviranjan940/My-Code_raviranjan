#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        // sort(a, a+n);
        
        // second method
    //  int i=0, j=0;
    //  for(i=0; i<n; i++){
    //      if(a[i]==0){
    //          swap(a[i],a[j]);
    //          j++;
    //      }
    //  }
     
    //  for(i=0; i<n; i++){
    //      if(a[i]==1){
    //          swap(a[i],a[j]);
    //          j++;
    //  }
         
    //  }
    
        // third method
        // int l = 0, r = n-1, i = 0;
        // while(i <= r){
        //     if(a[i] == 0){
        //         swap(a[l++], a[i++]);
        //     }else if(a[i] == 2){
        //         swap(a[r--], a[i]);
        //     }else{
        //         i++;
        //     }
        // }
        
        
        // fourth method
        int z = 0, o = 0, t =0;
        for(int i=0; i<n; i++){
            int x = a[i];
            z += (x == 0);
            o += (x == 1);
            t += (x == 2);
        }
        
        int j = 0;
        while(z--) a[j++] = 0;
        
        while(o--) a[j++] = 1;
        
        while(t--) a[j++] = 2;
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

