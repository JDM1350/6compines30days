class Solution {
public:
    int countDistinct(vector<int>& n, int k, int p) {

        set<vector<int>>s;

        for(int i=0;i<n.size();i++){
            int c=0;
            vector<int>t;

            for(int j=i;j<n.size();j++){
                if(c<k){
                    t.push_back(n[j]);
                    s.insert(t);

                    if(n[j]%p==0){
                        c++;
                    }
                }
                else if(c==k){
                    if(n[j]%p!=0){
                        t.push_back(n[j]);
                        s.insert(t);
                    }
                    else{
                        break;
                    }
                }

            }
            t.clear();

        }
        return s.size();
        
    }
};