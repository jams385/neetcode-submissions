class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagram_map;

        for(auto& str : strs){
            vector<int> count(26, 0);

            for(auto& ch : str){
                count[ch - 'a']++;
            }

            string key = to_string(count[0]);
            for(auto& num : count){
                key += ',' + num;
            }

            // "anagram_map[key]" is a vector, that's why we use "push_back" to store the str
            anagram_map[key].push_back(str);
        }

        vector<vector<string>> anagram_vector;

        for(auto& [key, value] : anagram_map){
            anagram_vector.push_back(value);
        }

        return anagram_vector;
    }

        
};


// initialize unordered_map where key -> count and value -> words that correspond to 'count'

// loop through strings in strs

// initialize a count vector with 26 0s

// loop through each character in the string

// count the freq of which the letter appears for each word

// turn count into a key by turning it into a string

// use the key and add the word as a value