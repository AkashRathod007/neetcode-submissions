class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>prifix(nums.size(),1);
        vector<int>suffix(nums.size(),1);

        for(int i =1; i<nums.size(); i++){
            prifix[i] = nums[i-1] * prifix[i-1];
        }
        for(int val : prifix){
            cout<<val<<" ";
        }
      cout<<endl;
        for(int i = nums.size()-2 ; i>=0; i--){

            suffix[i] = suffix[i+1]*nums[i+1];
        }

        for(int val :suffix){
            cout<<val<<" ";
        }
        for(int i =0; i<nums.size(); i++){
            nums[i] = prifix[i]*suffix[i];
        }

        return nums;

    }
};
