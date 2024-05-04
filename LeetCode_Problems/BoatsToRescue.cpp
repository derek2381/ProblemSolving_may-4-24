// problem link
// https://leetcode.com/problems/boats-to-save-people/description/?envType=daily-question&envId=2024-05-04

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0;
        int j = people.size()-1;
        int count = 0;
        while(i <= j){
            if(people[i]+people[j] <= limit){
                i++;
                j--;
            }else{
                j--;
            }
            count++;
        }
        return count;
    }
};
