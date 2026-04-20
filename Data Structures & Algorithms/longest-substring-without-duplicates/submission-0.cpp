class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxsub = 0;
        int st = 0;

        unordered_set<char>set;

        for(int i =0; i<s.size(); i++){


            while(set.find(s[i])!=set.end()){
                set.erase(s[st]);
                st++;
            }
          set.insert(s[i]);
            maxsub = max(maxsub , i - st+1);
        }
        return maxsub;
    }
};
