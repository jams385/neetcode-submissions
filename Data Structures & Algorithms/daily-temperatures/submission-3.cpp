class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){

        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> mono_stack;

        for(int i = 0; i < temperatures.size(); i++){

            // check if mono stack is empty before mono_stack.top().first to avoid a possible seg fault
            while(!mono_stack.empty() && temperatures[i] > mono_stack.top().first){
                pair top = mono_stack.top();
                mono_stack.pop();
                res[top.second] = i - top.second;
            }
            mono_stack.push({temperatures[i],i});
        }

        while(!mono_stack.empty()){
            pair top = mono_stack.top();
            mono_stack.pop();
            res[top.second] = 0;
        }

        return res;   
    }
};
