/*
Link to problem - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Approach - Take 2 pointers, one from start of the array and another from the end and compare the sum of them with target
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        vector<int> sol;
        
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                sol.push_back(i + 1);
                sol.push_back(j + 1);
                return sol;
            }
            else if(numbers[i] + numbers[j] >= target) j--;
            else i++;
        }
        return sol;
    }
};