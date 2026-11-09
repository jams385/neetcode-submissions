class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> temp_index;
        vector<int> res(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++){
            while(!temp_index.empty() && temp_index.top().first < temperatures[i]){
                pair pairs = temp_index.top();
                temp_index.pop();
                res[pairs.second] = i - pairs.second;
            }
            temp_index.emplace(temperatures[i], i);
        }

        return res;
    }
};

/*
    temperatures[i] represent daily temp on ith day:
        temperatures = [30,38,30,36,35,40,28]
        temperatures[2] = the temp on the 2nd day is 30 degrees

    result[i] is the number of days after the ith day before a warmer temp appears on a future day:
        result = [1,4,1,2,1,0,0]
        result[2] = 1 because 30 are all <= 30
        result[1] = 4 because 38,30,36,35. are all <= 38
*/


/*
    vector<int> results;
    stack<pair<int,int>> temp_index;

    1. push until we find a warmer
        temp_index.push(temperatures[i]);
    2. pop and add index to result

        30
*/
