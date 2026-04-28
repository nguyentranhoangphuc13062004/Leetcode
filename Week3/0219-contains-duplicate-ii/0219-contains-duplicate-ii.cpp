class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int , int > sotay;
        for(int i = 0 ; i < nums.size() ; i++){
            int sohientai = nums[i];
            if (sotay.count(sohientai)){
                int vitricu = sotay[sohientai];
                 if ( i - vitricu <= k){
                    return true; 
                 }
            }
            sotay[sohientai] = i;
        }

        return false;
    }
};