/*
Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.
Example 1:
Input:s1 = "ab" s2 = "eidbaooo"
Output:True
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:
Input:s1= "ab" s2 = "eidboaoo"
Output: False
*/



class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
       if (s1.length() > s2.length())
            return false;
        int* s1map = new int[26];
        reset(s1map);
        for(int i=0;i<s1.length();i++){
            s1map[s1[i]-'a']++;
        }
        int* s2map=new int[26];
        for(int i=0;i<s2.length()-s1.length()+1;i++){
            reset(s2map);
            string substr=s2.substr(i,s1.length());
            //cout<<endl<<substr<<endl;
            for(int j=0;j<substr.length();j++){
                s2map[substr[j]-'a']++;
            }
            if(matches(s1map,s2map))
                    return true;
        }
        return false;
    }
    
    void reset(int s2map[]){
        for (int i = 0; i < 26; i++) {
            s2map[i]=0;
        }
    }
    
    bool matches(int s1map[], int s2map[]) {
        for (int i = 0; i < 26; i++) {
            if (s1map[i] != s2map[i]){
                return false;
            }
        }
        return true;
    }
};
