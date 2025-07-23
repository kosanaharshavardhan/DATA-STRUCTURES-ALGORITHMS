// class Solution {
// public:
//     vector<int> plus(vector<int>& a, int i){
//         if(i==-1){
//             a.insert(a.begin(),1);
//             return a;
//         }
//         else if(a[i]<9){
//             a[i]++;
//             return a;
//         }
//         else{
//             a[i]=0;
//             return plus(a,i-1);
//         }
//     }
//     vector<int> plusOne(vector<int>& digits) {
//         return plus(digits,(int)digits.size()-1);
//     }
// // };