#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long y = 0;
        int a = 0;
        int num=x;
        while(num > 0){
            a = num%10;
            y = 10*y+a;
            num = num/10;
        }
        if(y == x)
        return 1;
       else
        return 0;
    }
    
    
    int PalinArray(int a[], int n)
    {
    	for (int i = 0; i<n; i++) {
    	   bool rvi = isPalindrome(a[i]); 
           if(rvi==false){
               return 0;
           }
           
        }
       return 1;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
