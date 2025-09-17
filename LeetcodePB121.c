int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0]; // minimum price so far
    int maxProfit = 0; // maximum profit so far
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // update minimum price
        } else {
            int profit = prices[i] - minPrice; // potential profit
            if (profit > maxProfit) {
                maxProfit = profit; // update max profit
            }
        }
    }
    return maxProfit;
}