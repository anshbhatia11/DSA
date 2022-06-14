class Solution {
public:
    int mySqrt(int N) {
        long long int s = 1;
        long long int e = N;
        long long int mid = s + (e-s)/2;
        
        
        while(s<=e){
         
        long long int m = mid+1;
        if((mid*mid)==N){
            return (mid);
        }
        if(mid*mid>N){
            if(m*m>N){
                e = mid-1;
            }else{
                return mid;
            }
//             
        }else if(mid*mid<N){
                if(m*m>N){
                    return mid;
                }else{
                    s = mid+1;
                }
                
            }
         mid = s + (e-s)/2;
        }
       return 0; 
    }
};