class Solution {
public:

int bitcount(int n){

    int count = 0;

    while(n){
        n = (n & (n-1));
        count++;
    }
    return count;
}
    vector<int> countBits(int n) {

     vector<int>res(n+1, 0);
        for(int i = 1; i<=n; i++){
            res[i] = bitcount(i);

        }

        
        return res;
    }
    
};
