class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int soam : asteroids){
            bool vacham =true;

        while (!st.empty() && st.back() > 0 && soam < 0){
                 if ( st.back() <  -soam){
                    st.pop_back();
                    continue;
                 } else if (st.back() == -soam){
                    st.pop_back();
                    vacham = false;
                    break;
                 }  else {
                    vacham = false;
                    break;
                 }
           }

           if (vacham){
            st.push_back(soam);
           }
        }

        return st;
    }
};
