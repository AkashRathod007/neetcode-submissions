class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int num1 = 0;
    int num2 = numbers.size() - 1;
    vector<int> ans;

    while (num1 < num2) {
        int sum = numbers[num1] + numbers[num2];

        if (sum == target) {
            ans.push_back(num1 + 1); // 1-based indexing
            ans.push_back(num2 + 1);
            return ans;
        } else if (sum < target) {
            num1++;
        } else {
            num2--;
        }
    }

    return ans; // or throw an error if no answer is guaranteed
}


};
