class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int>s;
        for(int value : nums) { //take each value from nums
          if(s.find(value) != s.end()) { //have i seen this value before in set?
            return value; //yes, then return the value
          }
          //if not seen, put it into the set, for the next iterator
          //so that if it ocurs again s.find ko mil jaye or return karde
          s.insert(value);
        }
        return -1;
    }
};