class Solution {
public:
    int appendCharacters(string s, string t) {
        int t_index=0,s_index=0;
        int slen=s.length(),tlen=t.length();
        while(t_index<tlen && s_index<slen){
            if(s[s_index]==t[t_index])  t_index++;
            s_index++;
        }
        return tlen-t_index;
    }
};
