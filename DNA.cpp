class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> vec;
		unordered_map<string, int> m;
		for (int i = 0; s[i + 9] != '\0'; i++)
		{
			string str = "";
			for (int a = 0, b = i; a < 10; a++, b++)
			{
				str += s[b];
			}
			auto itr = m.find(str);
			if (itr == m.end())
			{
				m.emplace(str, 1);
			}
			else
			{
				itr->second++;
			}
		}

		for (auto x : m)
		{
			if (x.second > 1)
			{
				vec.push_back(x.first);
			}
		}
		return vec;
        
        
    }
};
