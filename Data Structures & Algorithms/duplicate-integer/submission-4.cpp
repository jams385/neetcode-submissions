class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> seen_values;

        for(int i = 0; i < nums.size(); i++){

            if(seen_values.contains(nums[i])){
                return true;
            } else {
                seen_values.insert(nums[i]);
            }
        }

        return false;
    }
};