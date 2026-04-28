class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector <int> result(n,0);
        stack <int> mang;

        for (int i=0 ; i< n ; i++){
            int current = temperatures[i];

            while (!mang.empty() &&  current >temperatures[mang.top()]){
                  int triettieu = mang.top();
                  mang.pop();
            

            result[triettieu] = i - triettieu;
        }
mang.push(i);
    }

    return result;
}

};