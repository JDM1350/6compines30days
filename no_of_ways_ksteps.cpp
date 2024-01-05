class Solution {

public:
   const int mod = 1000000007;
    
    int ncr(int n, int r){
        if(r == 0) return 1;
        vector<int> v(r+1,0);
        v[0] = 1;
        for(int i=1; i<=n; i++){
            for(int j=r; j>0; j--)
                v[j] = ((v[j] % mod) + (v[j-1] % mod)) % mod;
        }
        return v[r];
    } 


    int numberOfWays(int s, int e, int k) {

        int b = abs(e-s);
        long m=(k+b)/2;

    if ((b%2==0 and k%2==0)  || (b%2!=0 and k%2!=0) ){
       
   
       return ncr(k,m);
        
      
       
    }else{
        return 0;
    }
        
    }
};