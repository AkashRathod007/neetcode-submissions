class Solution {
public:



int binary(int st , int end , vector<int>&nums , int target ){

     if(st>end){
        return -1;
     }

     int mid = st +(end - st)/2;

     if(nums[mid]==target){
        return mid;
     
     }
     else if (target>nums[mid]){
         return binary(mid+1 , end , nums, target);
     }

     else{
       return binary(st , mid-1, nums, target);
     }
}
    int search(vector<int>& nums, int target) {
        int end = nums.size()-1;

        return binary(0 , end , nums, target);
    }
};
