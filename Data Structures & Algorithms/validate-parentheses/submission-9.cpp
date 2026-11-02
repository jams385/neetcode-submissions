class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 1 || s.length() == 0){   return false;  }

        stack<char> open;
        
        for(char ch : s){

            if(ch == '(' || ch == '[' || ch == '{'){
                open.push(ch);

            } else {

                if(!open.empty()){
                    if( (ch == ')' && open.top() == '(') ||
                        (ch == ']' && open.top() == '[') ||
                        (ch == '}' && open.top() == '{') )
                    {
                        open.pop();

                    } else{

                        return false;
                    }
                } else
                    return false;
            }
        }

        if(open.empty())
            return true;
        else
            return false;
    }
};
