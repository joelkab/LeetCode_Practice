/*
 * Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
 */

//used a hash table to solve this leetcode problem. tried using a nested forloop but wasnt time efficient.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i = 0; i<nums.size() ; i++){
            if(hash.find(nums[i]) != hash.end()){
                return true;
            }
            hash.insert(nums[i]);
        }

        return false;

    }
};