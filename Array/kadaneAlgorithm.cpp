/*
GFG
Given an array Arr[] of N integers. 
Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int maxSum = 0;
        int cSum = 0;
        // Your code here
        for(int i=0;i<n;i++){
            maxSum+=arr[i];
        }
        
        for(int i=0;i<n;i++){
            cSum+=arr[i];
            if(cSum>maxSum){
                maxSum = cSum;
            }
            if(cSum<0){
                cSum=0;
            }
        }
        return maxSum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends