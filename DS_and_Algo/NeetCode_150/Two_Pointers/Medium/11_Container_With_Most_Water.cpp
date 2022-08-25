/*
Link to problem - https://leetcode.com/problems/container-with-most-water/
Approach - Take 2 pointers, one at the start and another at the end of the array and keep going through the array by eliminating the smaller value each time (Reference - https://www.youtube.com/watch?v=UuiTKBwPgAo)
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int result = 0;
        
        while(i < j){
            result = max(result, (j - i) * min(height[i], height[j]));
                         
            if(height[i] <= height[j]) i++;
            else j--;
        }
        return result;
    }
};