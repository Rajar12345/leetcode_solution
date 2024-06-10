int heightChecker(vector<int>& heights) {
        vector<int>v(heights);
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=v[i])    c++;
        }
        return c;

    }
