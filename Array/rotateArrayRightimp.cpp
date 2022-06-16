/*
Leetcode Q.189 Rotate array to right by k places
*/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            v[(i+k)%n] = nums[i];
        }
        
        nums = v;
        
    }
};