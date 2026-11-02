class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans= "";

        //reverse the whole sentence
        reverse(s.begin(), s.end());

        //reverse individual words
        for(int i=0; i<n; i++) {
            string word="";
            while(i<n && s[i] != ' ') {
             word += s[i];
             i++;
            }
            reverse(word.begin(), word.end());
            if(word.length()>0) {
                ans+= " " + word;
            }
        }
        return ans.substr(1); //start from 1st index to 
        //avoid the first space " "
    }
};