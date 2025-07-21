// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int p1=0;
//         int p2=k-1;
//         double avg=0;
//         while(p1<=p2){
//             avg+=nums[p1];
//             p1++;
//         }
//         p1=0;
//         p2++;
//         double maxy=avg;
//         for(;p2<nums.size();p2++){
//             avg-=nums[p1];
//             p1++;
//             avg+=nums[p2];
//             maxy=max(maxy,avg);
//         }
//         return maxy/k;
//     }
// // }