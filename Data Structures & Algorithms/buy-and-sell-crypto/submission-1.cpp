class Solution {
public:
    int maxProfit(vector<int>& price) {
        int minPrice=INT_MAX;
      
        int ans=INT_MIN;

        for(int i=0;i<price.size();i++){

            int dayPrice= price[i];

            minPrice=min(minPrice,dayPrice);
            

            ans=max(ans, dayPrice-minPrice);

        }

        return ans;
    }
};
