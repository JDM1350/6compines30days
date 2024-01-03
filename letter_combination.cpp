class Solution {

    private:
    void solve(string digit,string output, int index, vector<string>& ans,string mapping[]){

        if(index>=digit.length()){
            ans.push_back(output);
            return ;
        }
        int n=digit[index]-'0';
        string v=mapping[n];

        for(int i=0;i<v.length();i++){
            output.push_back(v[i]);
            solve(digit,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }

        string output="";
        int index=0;

        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,output,index,ans,mapping);
        return ans;
        
    }
};