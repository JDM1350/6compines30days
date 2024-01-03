string encode(string s)
{     
  //Your code here 
  int n=s.size();
int m=1;
string l;

for(int i=0;i<n;i++){
    
    if(s[i]!=s[i+1]){
        
        l+=s[i]+to_string(m);
        m=1;
    }
    else if(s[i]==s[i+1]){
        m++;
        
    }
}


    

return l;
}  