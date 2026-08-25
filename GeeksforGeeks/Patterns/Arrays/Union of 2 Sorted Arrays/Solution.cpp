class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n= a.size();
        int m= b.size();
        vector<int>uni;
        int i=0;
        int j=0;
        
       while(i < n && j<m) {
           if(a[i] <= b[j]) { //a array la element amall hai
               if(uni.size()==0 || uni.back() != a[i]) { //agar union me pejhle se kuch nahi haui
                   uni.push_back(a[i]); //ya fir akhiri element a[i] ke equal nahi h
               } //to pushback krdo vo element
               i++; //elementt pushback nahi kiya to i++
           } else{ //b array la element small hai
               if(uni.size()==0 || uni.back() != b[j]) {
                   uni.push_back(b[j]);
               }
               j++;
           }
       }
       //if a array ended before b 
       while(j < m) { //copy paste the condition of else
            if(uni.size()==0 || uni.back() != b[j]) {
                   uni.push_back(b[j]);
               }
               j++;
       }
       
       //if b array ended before a
       while(i<n) { //copy paste if vali condition
            if(uni.size()==0 || uni.back() != a[i]) {
                   uni.push_back(a[i]);
               }
               i++;
       }
       return uni;
    }
};