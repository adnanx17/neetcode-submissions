class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch>='A'&&ch<='Z'){
                s[i]=ch-'A'+'a';
            }
        }
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(((s[start]>='a'&&s[start]<='z')||(s[start]>='0')&&s[start]<='9')&&((s[end]>='a'&&s[end]<='z')||(s[end]>='0'&&s[end]<='9'))){
                if(s[start]!=s[end]){
                    return false;
                }

                   end--;
                  start++;
            }

            else if(s[start]>='a'&&s[start]<='z'||s[start]>='0'&&s[start]<='9'){
                end--;
            }
            else{
                start++;
            }
        }

        return true;
    }
};
