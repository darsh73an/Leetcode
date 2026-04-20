class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0;
        int right = people.size()-1;
        int minBoats = 0;

        sort(people.begin(),people.end());

        while(left <= right){
            if(people[left]+people[right] <= limit){
                left++;
            }
                right--;
                minBoats++;
        }
        return minBoats;
    }
};