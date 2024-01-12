queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> st;
        while(k--){
            st.push(q.front());
            q.pop();
            
        }
        
        queue<int> qq;
        while(!st.empty()){
            qq.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
            qq.push(q.front());
            q.pop();
        }
        return(qq);
        
    }
