class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> tui;

        int maxlen = 0;
        int phai = 0;
        int trai = 0;
        int n = s.length();

        while ( phai < n){
            char moi  = s[phai];
        

        if ( tui.count(moi) == 0){

            tui.insert(moi);
            maxlen =max(maxlen , phai - trai +1);
            phai++;
        }else {
            char old = s[trai];
          tui.erase(old);
          trai++;


        }
    }
    return maxlen;
    }
};