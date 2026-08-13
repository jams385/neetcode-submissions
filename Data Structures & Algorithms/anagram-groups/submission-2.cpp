class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagram_dict;

        for(auto& str : strs){
            vector<int> count(26, 0);

            for(auto& letter : str){
                count[letter - 'a'] += 1;
            }

            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++){
                key += ',' + count[i];
            }

            anagram_dict[key].push_back(str);
        }

        vector<vector<string>> grouped_anagrams;

        for(auto& pair : anagram_dict){
            grouped_anagrams.push_back(pair.second);
        }

        return grouped_anagrams;

    }
};
