class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<n-1;i++){
            int l=i,h=i+1;
            ans+=abs(int(s[l])-int(s[h]));
            // ans=abs(ans);
        }
        return ans;
    }
};
