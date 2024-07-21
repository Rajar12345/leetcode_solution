class Solution {
public:
    vector<int> khansAlgo(vector<vector<int>> &r, int k){
        vector<int> cnt(k+1, 0);
        vector<int> adj[k+1];
        for(auto x:r){
            cnt[x[1]]++;
            adj[x[0]].push_back(x[1]);
        }
        vector<int> row;
        queue<int> q;
        for(int i=1;i<=k;i++){
            if(cnt[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int t = q.front();
            q.pop();
            row.push_back(t);
            for(auto x:adj[t]){
                cnt[x]--;
                if(cnt[x]==0){
                    q.push(x);
                }
            }
        }
        return row;
    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& r, vector<vector<int>>& c) {
        vector<vector<int>> res(k, vector<int>(k, 0));
        
        vector<int> row = khansAlgo(r, k);
        if(row.size()!=k) return {};
        
        vector<int> col = khansAlgo(c, k);
        if(col.size()!=k) return {};
        
        vector<int> idx(k+1,0);
        for(int j=0;j<col.size();j++){
            idx[col[j]] = j;
        }
        for(int i=0;i<k;i++){
            res[i][idx[row[i]]] = row[i];
        }
        return res;
    }
};
