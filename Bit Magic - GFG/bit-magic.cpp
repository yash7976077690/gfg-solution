//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
         int mismatch=0;
        int i=0;
        int j=n-1;
        while(i<=j){
            if(arr[i]!=arr[j]){
                mismatch++;
            }
            i++;
            j--;
        }
        if(mismatch==0)
            return 0;
        else 
            return (mismatch%2==0) ? (mismatch/2) : ((mismatch/2)+1);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.bitMagic(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends