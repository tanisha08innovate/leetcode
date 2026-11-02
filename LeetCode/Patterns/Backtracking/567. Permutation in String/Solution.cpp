class Solution {
public:
bool freqSame(int freq1[], int freq2[]) {
    for(int i=0; i<26; i++) {
        if(freq1[i] != freq2[i]) {
           return false; 
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};

        for(int i=0; i<s1.size(); i++) {
            int indx = s1[i]-'a'; //finding index in string
            freq[indx]++;
        }
        int windowSize = s1.length();
        for(int i=0; i<s2.length(); i++) {
            int windIndx=0;
           int  indx=i;
            int windFreq[26]={0};

            while(windIndx < windowSize && indx<s2.length()) {
               windFreq[s2[indx]-'a']++;
               windIndx++;
               indx++;
            }
            if(freqSame(freq, windFreq)) { //found permutation
             return true;
            }
        }
        return false;
    }
};