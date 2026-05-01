class Solution {
public:
    int findMin(vector<int> &nums) {

    
    int low =0;
    int high = nums.size()-1;

    

    while(low<high){
        // case 1:when array is already sorted 
        if(nums[low]<nums[high]){
        return nums[low];
    }
      
      int mid = low +(high -low )/2;
        // case 2 when left part is sorted mean the min in right part 
        if(nums[low]<=nums[mid]){
            low = mid+1;
        }

        // case 3 right part is sorted mean the mini is in left part including mid 
       else {
        high = mid;
       }
    }
    return nums[low];
    
    }
};
