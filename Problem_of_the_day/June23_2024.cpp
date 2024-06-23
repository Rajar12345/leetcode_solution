int longestSubarray(vector<int>& A, int limit) {
        int i = 0, j;
        multiset<int> m;
        for (j = 0; j < A.size(); ++j) {
            m.insert(A[j]);
            if (*m.rbegin() - *m.begin() > limit)
                m.erase(m.find(A[i++]));
        }
        return j - i;
    }
