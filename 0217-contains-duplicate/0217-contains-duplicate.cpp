class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dayso;

        for (int num :nums){
            if ( dayso.count(num)){
                return true;
            }

            dayso.insert(num);
        }

        return false;
    }
};