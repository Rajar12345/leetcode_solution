class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>jobs;
        int n=profit.size();
        int res=0,i=0,best=0;
        for(int j=0;j<n;j++){
            jobs.push_back(make_pair(difficulty[j],profit[j]));
        }
        sort(jobs.begin(),jobs.end());
        sort(worker.begin(),worker.end());
        for(int& nums:worker){
            while(i<n && nums>=jobs[i].first){
                best=max(jobs[i++].second,best);
            }
            res+=best;
        }
        return  res;
    }
};
