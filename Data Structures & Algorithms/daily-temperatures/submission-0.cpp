class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> res(temperatures.size(),0);
        stack<int> stack;

        for(int i = 0; i < temperatures.size();i++) {
            while(!stack.empty() && temperatures[i] > temperatures[stack.top()]){
                int index = stack.top();
                stack.pop();
                res[index] = i - index;
            }
            stack.push(i);
        }
        return res;
    }
};