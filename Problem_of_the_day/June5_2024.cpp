class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         int n= words.size();
        vector<int>v(26, INT_MAX);
        vector<string>ans;

        for(int i=0;i<n;i++){
            vector<int>v1(26, 0);
            for(int j=0;j<words[i].size();j++){
                v1[words[i][j] - 'a']++;
            }
            for(int i=0;i<26;i++){
                v[i] = min(v[i], v1[i]);
            }
        }

        for(int i=0;i<26;i++){
        for(int j=0;j<v[i];j++){
            ans.push_back(string(1,i + 'a'));
        }
    }

    return ans;
    }
};
