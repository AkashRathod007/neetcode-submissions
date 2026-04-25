class Solution {
public:


vector<int> majorityElement(vector<int>& nums) {

    int n = nums.size();
    int candidate1 = -1;
    int candidate2 = -1;
    int vote1 = 0;
    int vote2 = 0;

    // First pass
    for (int num : nums) {

        if (candidate1 == num) {
            vote1++;
        }
        else if (candidate2 == num) {
            vote2++;   // ✅ fixed missing semicolon
        }
        else if (vote1 == 0) {
            candidate1 = num;
            vote1 = 1;
        }
        else if (vote2 == 0) {
            candidate2 = num;
            vote2 = 1;
        }
        else {
            vote1--;
            vote2--;
        }
    }

    // Second pass
    vote1 = vote2 = 0;

    for (int num : nums) {
        if (num == candidate1) {
            vote1++;
        }
        else if (num == candidate2) {
            vote2++;   // ✅ fixed missing semicolon
        }
    }

    vector<int> result;   // ✅ fixed typo (resutl → result)

    if (vote1 > n / 3) result.push_back(candidate1);
    if (vote2 > n / 3) result.push_back(candidate2);

    return result;   // ✅ fixed spacing/typo
}
};