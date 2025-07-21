// class Solution {
// public:
//     int maxProfit(vector<int>& a) {
//         int buy=10000001;
//         int sell=0;
//         int profit=0;
//         for(int i=0;i<a.size();i++){
//             buy=min(buy,a[i]);
//             sell=max(sell,a[i]-buy);
           
//         }
//         return sell;

//     }
// };