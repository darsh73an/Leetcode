class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        //            fruitType,fruitCount
        unordered_map<int,int> basket;
        //basket.size() means fruittype bcoz we can pick from only two types of fruit size doesnt matters

        int left = 0;
        int maxFruits = 0;
        for(int right = 0; right<n; right++){
            basket[fruits[right]]++;

            while(basket.size() > 2){  // key > 2
                basket[fruits[left]]--;

                if(basket[fruits[left]] == 0){
                    basket.erase(fruits[left]);
                }

                left++;
            }
            maxFruits = max(maxFruits,right-left+1);
        }
        return maxFruits;
    }
};