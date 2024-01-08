class Solution {
     static bool cmp(vector<int> &a, vector<int> &b) {
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    }
public:
    int maxEnvelopes(vector<vector<int>>& e1) {


       sort(e1.begin(),e1.end());
   
   /*  int r=0;  
    for (int i = 1; i < e.size(); i++) {
        if (e[i-1][1] < e[i ][1]) {
            if(e[i-1][0]!=e[i][0]){
            cout << e[i][0] << " "<<e[i][1]<<endl;
            r++;

            }
        }
    }
    return r+1;
    */
    sort(e1.begin(), e1.end(),cmp);

        vector<int> v;
        for(auto e : e1) {
            if(!v.size() || v.back() < e[1]) v.push_back(e[1]);
            else {
                int pos = lower_bound(v.begin(), v.end(), e[1]) - v.begin();
                v[pos] = e[1];
            }
        }
        return v.size();

        
    }
};