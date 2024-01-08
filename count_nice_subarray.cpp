class Solution {
public:

/*
bool  check (vector<int> temp , int k ){
 
    int p=0;
    for(int i=0;i<temp.size();i++){
        if(temp[i]%2!=0 ){
            p++;    
        }
    }
    if(p!=k){
        return false;
    }else{
        return true;
    }
}
*/

/*
    int numberOfSubarrays(vector<int>& a, int l) {

        int n= a.size();
        int res=0;
        int m=l;
        for(int i=0;i<n;i++){
            for(int j=i ;j<n;j++){
               // vector<int> temp;
                    int y=0;
                for(int k=i;k<=j;k++){
                    //temp.push_back(a[k]);
                    if(a[k]%2!=0 ){
                        y++;

                    }
                }
                if(y==l){
                    res++;
                }

                }              
                //if(check (temp, m)){
                  //  res++;
                //}
            }
        
        return res;
        
    }*/

    int numberOfSubarrays(vector<int>& a, int k) {
        int ans=0,sum=0,n=a.size();
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=a[i]%2; // converting even with 0 & odd wiht 1;
            if(mp.find(sum-k)!=mp.end())
                ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};
