class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;//using unordered map like in majority elements
        for(auto num:arr){
            mp[num]++;
        }
        int lucky= -1;//setting lucky -1 initially
        for(auto& pair: mp){
            if(pair.first==pair.second){
                lucky=max(lucky,pair.first);//checking the largest key which is lucky by thhis method
            }
        }
        return lucky;//returing lucky
    }
};