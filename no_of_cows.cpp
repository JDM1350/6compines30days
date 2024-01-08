class Solution {
public:
    string getHint(string s, string b) {

        int c=0,x=0;
   
   for(int i=0;i<s.length();i++){
       if(s[i]==b[i]){
           c++;
           s[i]=-1;
           b[i]=-1;
       }
   }
 
   for(int i=0;i<s.length();i++){
       for(int j=0;j<b.length();j++){
           if(s[i]==b[j] && s[i]>=0 && b[j]>=0 ){
               x++;
               s[i]=-1;
               b[j]=-1;
               
           }
       }
   }
  
   string a;
  
   
   a=to_string(c)+'A'+to_string(x)+'B';
    return a;
        
    }
};