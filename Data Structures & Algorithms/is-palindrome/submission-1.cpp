class Solution {
public:
    bool isPalindrome(string s) {
        if (s == "")
            return false;
    
        string new_str = "";

        for(char c: s){
            if(isalnum(c)){
                new_str += tolower(c);
            }
        }
        
        int first = 0;
        int last = new_str.length() - 1;

        while(first < last){
            if(new_str[first] != new_str[last]){
                return false;
            }

            first++;
            last--;
        }

        return true;
    }
};
