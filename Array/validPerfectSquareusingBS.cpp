class Solution {
public:
    bool isPerfectSquare(int N) {
        long long int s = 1;
        long long int e = N;
        long long int mid = s + (e-s)/2;
        
        
        while(s<=e){
         
        long long int m = mid+1;
        if((mid*mid)==N){
            return 1;
        }
        if(mid*mid>N){
            e = mid-1;
//             
        }else if(mid*mid<N){
            s = mid+1;      
        }
         mid = s + (e-s)/2;
        }
       return 0;
    }
};