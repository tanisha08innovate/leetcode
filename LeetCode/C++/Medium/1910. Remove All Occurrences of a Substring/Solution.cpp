class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part) < s.length()){ //till the string is not 0 
        //enter only when we find the "part" in string
        s.erase(s.find(part), part.length()); //erase the pRT
        //s.find(part) ->  starting of part
        // part.length() -> ending of part
        }
        return s;
    }
};