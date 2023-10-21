#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2){

int A[26] = {0};
int B[26] = {0};

int len1 = s1.length();
int len2 = s2.length();
int flag = 0;

if(len1!=len2)
    return false;

    for(int i=0;i<len1;i++){
        A[s1[i]-'a']++;
        B[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(A[i]!=B[i]){
            flag = 1;
            break;
        }
    }
   if(flag==1)
    return false;
   else return true;


}
int main(){
string s1,s2;
cin>>s1>>s2;

bool ans = isAnagram(s1,s2);
if(ans == false)cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}
