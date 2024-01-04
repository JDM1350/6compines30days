int n=s.length(), curr=1,i=0;
    
    string ans;
    ans.push_back('1');
    
    while(i<n){
        if(s[i]=='D'){
            int j=i;
            while(j<n and a[j]=='D'){
                j++;
                
            }
            int nd=j-1;
            curr+=nd;
            ans[i]=(curr+'0');
            int count=curr;
            while(i!=j){
                count--;
           ans.push_back(count+'0');
                i++;
                
            }
        }else{
             curr++;
             ans.push_back(curr+'0');
                i++;
                
            
        }
    }
    return ans;