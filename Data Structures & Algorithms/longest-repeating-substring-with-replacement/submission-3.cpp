class Solution {
public:
    int characterReplacement(string s, int k) {

       unordered_map<char , int >m;
       int st=0;
       int res =0;
       int maxf =0;

        for(int i =0; i<s.size(); i++){
            m[s[i]]++;
            maxf = max(maxf , m[s[i]]);

            while((i-st+1)-maxf >k){
                m[s[st]]--;
                st++;
            }

            res =max(res, i-st+1);
        }

        return res;


         
         
       
        
    }
};
