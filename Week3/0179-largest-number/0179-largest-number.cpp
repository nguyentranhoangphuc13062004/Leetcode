class Solution {
public:
    static bool sosanh (string a , string b){
        return a + b > b + a;
    }

 string largestNumber(vector<int>& nums) {
    vector<string> s_num;
    for (int x : nums){
        s_num.push_back(to_string(x));
    }

    sort(s_num.begin() , s_num.end() , sosanh);
     if (s_num[0] == "0"){ return "0";
     }

    string ketqua = "";
    for ( string s : s_num ){
        ketqua += s;
    }

    return ketqua;
        
    }
};