/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i = 0;
        int j = 1;
        
        while(i<arr.size() && j<arr.size()){
            if(arr[i]==0 && arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }else if(arr[i]==0 && arr[j]==0){
                j++;
            }else{
                i++;
                j++;
            }
        }
    }
};