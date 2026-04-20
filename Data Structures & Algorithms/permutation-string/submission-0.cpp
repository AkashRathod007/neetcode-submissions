class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int freq[26] ={0};
        int freq2[26]={0};
      


        for(char ch : s1){
            freq[ch-'a']++;
        }
        int l =0;

        for(int r =0; r<s2.size(); r++){

            freq2[s2[r]-'a']++;

         if(r-l+1>s1.size()){ 
            freq2[s2[l]-'a']--;
            l++;
         }

         // compare the size when equal to lenght 
         if(r-l+1==s1.size()){
            bool match = true;
            for(int i =0; i<26;i++ ){
                if(freq[i]!=freq2[i]){
                    match = false;
                    break;
                }
            }
            if(match) return true;
         }
        }

        return false;
        
    }
};
