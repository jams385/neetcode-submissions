class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++){

            int n = target - nums[i];

            if(seen.find(n) != seen.end()){
                result.push_back(seen[n]);
                result.push_back(i);
                break;
            }

            seen[nums[i]] = i;
        }

        return result;
    }
};