int atoi(string s) {
        //Your code here
        bool flag = 0;
        int n = 0;
        if(s[0] == '-') {
            flag = 1;
        }
        
        if(flag) {
            for(int i = 1 ; i < s.size() ; i++) {
                auto val = s[i] - '0';
                if(val < 0 or val > 9) {
                    return -1;
                }
                n = (n * 10) + val;
            }
        }
        else {
            for(int i = 0 ; i < s.size() ; i++) {
               auto val = s[i] - '0';
               if(val < 0 or val > 9) {
                    return -1;
                }
                n = (n * 10) + val;
            }
        }
        return flag ? -n : n;
    }
