/*
    Code Ninjas
    Ninja took you to an apple store where there is 'N' number of different apples present 
    in the store and ith apple cost 'ARR[i]' coins. It is pre-decided that you have to buy all of them. 
    You would be given a coupon by Ninja that allows you to buy ‘M’ apples while paying only for 'M - 1' most expensive apples.
    Thus, you will get the cheapest apple for free. You can use the coupon once only.
    Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. 
    It is necessary to use the coupon and have to select ‘M’ apples for using it.
    
*/


#include <climits>
long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    sort(arr.begin(),arr.end());
    int sum = 0;
    int freeApple = INT_MAX;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
   
    for(int i=n-1;i>=n-m;i--){
        if(arr[i]<freeApple){
            freeApple = arr[i];
        }
    }
    
    return sum - min;
}