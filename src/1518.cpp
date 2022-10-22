class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return (numBottles*numExchange-1)/(numExchange-1);
    }
};
