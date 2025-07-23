// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& a, int k) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<a.size();i++){
//             if(mp[a[i]]==0)
//                 mp[a[i]]=i+1;
//             else{
//                 if(abs((mp[a[i]]-1)-i)<=k)
//                     return true;
//                 else{
//                     mp[a[i]]=i+1;
//                 }
//             }
//         }
//         return false;
//     }
// };