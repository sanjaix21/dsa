class Solution {
public:
    bool canConstruct(string s, int k) {
      if(s.size() < k){
        return false;
      }       

      unordered_map<char, int> myMap;
      int odd = 0;
      for(char c : s){
        myMap[c]++;
      }
      for(auto iter : myMap){
        odd += (iter.second)%2;
      }
      
      return odd <= k;
    }
};
