/*
Link to problem - https://leetcode.com/problems/car-fleet/
Approach - Count the total time required by each car and compare it with the times of the other cars (Reference - https://www.youtube.com/watch?v=Pr6T-3yB9RM&ab_channel=NeetCode)
Time complexity - O(nlogn)
Space complexity - O(n)
*/


class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        
        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++) {
            double time = (double) (target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end());
        
        double maxTime = 0.0;
        int result = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            double time = cars[i].second;
            if (time > maxTime) {
                maxTime = time;
                result++;
            }
        }
        
        return result;
    }
};