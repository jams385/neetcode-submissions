class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> seen_values;

        for(int num : nums){

            if(seen_values.contains(num)){
                return true;
            }
            seen_values.insert(num);
            
        }
        
        return false;
    }
};