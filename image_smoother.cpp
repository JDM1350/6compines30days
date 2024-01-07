class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {


         int n=img.size();
         int l=img[0].size();
         vector<vector<int>> b(n, vector<int>(l, 0));
    
    for(int m=0;m<n;m++){
        for(int k=0;k<l;k++){
            int sum=0,count=0;
            
            for(int i=max(0, m-1);i<=min(n-1, m+1);i++){
                for(int j=max(0, k-1);j<=min(l-1, k+1);j++){
                    sum+=img[i][j];
                    count++;
                }
            }
            int avg=sum/count;
            b[m][k]=avg;
        }

    }
    return b;
        
    }
};