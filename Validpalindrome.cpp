#include<iostream>
#include<array>    
#include<vector>    
using namespace std;

class Solution {
    private:
bool validchar(char st){
  
  if((st>='a'&& st<='z')||(st>='A'&& st<='Z')||(st >='0'&& st<='9')){
        return 1;
  }
    return 0;
    }
 char tolowercase(char ch){  
            if((ch>='a'&& ch<='z')|| (ch >='0'&& ch<='9'))
            return ch;
            else{
            char ch1= ch -'A'+'a';
            return ch1;
            }
 }
bool checkispalindrome(string s1){
    int start=0;
    int end= s1.length()-1;
    while(start<=end){
        if(s1[start]!=s1[end]){
        return 0;
        }
        else{
            start++;
            end--;
            }
    }
    return 1;
}

public:
    bool isPalindrome(string s) {
            string temp ="";
            for(int j=0;j<s.length();j++){
            if(validchar(s[j]))
            temp.push_back(s[j]);
                        
            }
            
            // while(start<end)
            for(int j=0;j<temp.length();j++){
                temp[j] = tolowercase(temp[j]);
            cout<<temp[j];
            }

        return(checkispalindrome(temp));
        
    }
};
int main(){
    Solution obj;
    string st;
    cout<<"Eneter a string :"<<endl;
    cin>>st;
    obj.isPalindrome(st);
}