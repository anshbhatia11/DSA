//Leetcode ques. 1752
//approach any sorted and rotated array will have only 1 or (arr[i],arr[i+1]) pair where arr[i]>arr[i+1] in a complete cycle

class Solution {
public:
    bool check(vector<int>& nums) {
        int checkCount = 0;
        // int i = 0,j=i%n+1;
        
        for(int i=0;i<nums.size();i++){
            int j = (i+1)%nums.size(); //Points to element next to i, used mod for cycle case i.e. when i = n-1(last element), j = 0(first element)
            if(nums[i]>nums[j]){
                checkCount++;
            }
            
        }
        
        if(checkCount<=1){
            return true;
        }
        return false;
    }
};