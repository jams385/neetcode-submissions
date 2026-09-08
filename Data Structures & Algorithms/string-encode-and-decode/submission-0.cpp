class Solution {
public:

    string encode(vector<string>& strs) {
        string new_string = "";

        // turns list of strings into one single string with '<no_of_chars>#' as the seperator
        for(auto& s : strs){
            new_string += to_string(s.length()) + "#" + s;
        }

        return new_string;
    }

    vector<string> decode(string s){
        vector<string> new_list;

        int i = 0;

        // loop through the string
        while(i < s.size()){
            int j = i;

            //inner loop to scroll until the divider
            while (s[j] != '#'){
                j++;
            }

            //convert the first char of the string into int so we can get the length of the whole string
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            new_list.push_back(s.substr(i, length));
            i = j;
        }

        return new_list;

    }
};
