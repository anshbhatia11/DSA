//code ninjas problem

#include <math.h>

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> ans;
    int sum = 0;
    
    for(int i=0;i<n;i++){
        sum+=(a[i]*pow(10,n-i-1));
    }
    
    for(int j=0;j<m;j++){
        sum+=(b[j]*pow(10,m-j-1));
    }
    
    while(sum){
        ans.push_back(sum%10);
        sum/=10;
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}