class Solution {
public:
/*
void BS(vector<int>& a, int n){
     for(int i=0;i<n-1;i++){
         for(int j=0;j<n-1-i;j++){
             if(a[j]>a[j+1]){
                 swap(a[j],a[j+1]);
             }
         }
     }
}
*/

    int minMoves2(vector<int>& a) {
 
        int n=a.size();
       sort(a.begin(),a.end());
    int m=a[n/2];
    
    int c=0;
    for(int i=0;i<n;i++){
        c+=abs(m-a[i]);
    }
    
    return c;
        
    }
};