class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int num1, num2;
        int final;

        for(string c : tokens){
            if(c != "+" && c != "-" && c != "/" && c != "*"){
                s.push(stoi(c));
            } else {
                num2 = s.top();
                s.pop();
                num1 = s.top();
                s.pop();

                if(c == "+")
                    final = num1 + num2;
                else if(c == "-")
                    final = num1 - num2;
                else if(c == "/")
                    final = num1/num2;
                else
                    final = num1*num2;

                s.push(final);
            }
        }

        return s.top();
    }
};
