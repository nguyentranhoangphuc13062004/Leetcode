class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> dayso;

        for (string s : tokens){
            if (s.size() == 1 && s == "+" || s == "-" || s == "*" || s=="/"  ){
                long long sosau = dayso.top();
                dayso.pop();
                long long sotruoc = dayso.top();
                dayso.pop();
                long long ketqua = 0;

                if (s == "+"){
                    ketqua = sosau + sotruoc; 

                } else if(s == "-"){
                    ketqua = sotruoc - sosau;
                } else if(s == "*"){
                    ketqua = sotruoc * sosau;
                }  else if (s == "/") {
                    ketqua = sotruoc / sosau;
                }

                dayso.push(ketqua);
            } else {
                dayso.push(stoll(s));
            }
        }

        return (int) dayso.top();
    }
};