class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3){
            return -1;
        }  
        else{
            sort(nums.begin() , nums.end());
            return nums[1];
        }
    }
};