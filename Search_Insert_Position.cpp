#include <iostream>
#include <vector>
/*
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 */
class Solution {
public:
    int searchInsert(std::vector<int> &nums, int target) {
        int i;


        for (i = 0; i < nums.size(); i++) {
            std::cout << i << std::endl;
            if (i > 1 && i < nums.size() - 1) {

                if (target < nums[i + 1] && target > nums[i - 1] && target > nums[i]) {

                    return i + 1;
                }

                if (target < nums[i + 1] && target > nums[i - 1]) {

                    return i;
                }
            }
            if (nums[i] - 1 == target) {
                return i;
            }
            if (nums[i] + 1 == target) {
                return i + 1;
            }


            if (i == target && nums[i] != target) {
                if (target == 0) return 0;
                return i - 1;
            }

            if (i < nums.size()) {

                if (nums[i] == target) {
                    return i;
                }
            }

            //else


        }
        return i;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


//Not done yet 61/65 checks completed.