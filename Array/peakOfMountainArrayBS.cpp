class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        
        //using binary search concepts
        while(start<end){
            //normal we use start<=end in BS but
            //here S<E to avoid getting stuck
            if(arr[mid]<arr[mid+1]){
                //left of the peak so move right
                start = mid+1;
            }else{
                end = mid; //not used mid-1 as then it will end up going back in if condition.
            }
            mid = start + (end-start)/2;
        }
        
        return start;
    }
};