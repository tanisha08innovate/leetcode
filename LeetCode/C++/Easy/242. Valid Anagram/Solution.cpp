class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int count[26]={0};
        for(int i=0; i<s.length(); i++) {
           int indx= s[i]-'a'; //gives position 
            count[indx]++; //increase count
        }
        for(int i=0; i<t.length(); i++) {
           int idx = t[i]-'a';
            if(count[idx]==0) { //that letter dosent exists
                return false;
            }
            count[idx]--;
        }
    return true;
    }
};