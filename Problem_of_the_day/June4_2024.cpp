class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char>set;
        int l=0;
        for(auto c:s){
            if(set.find(c)!=set.end()){
                set.erase(c);
                l+=2;
            }
            else    set.insert(c);
        }
        if(!set.empty())    l++;
        return l;
    }
};
