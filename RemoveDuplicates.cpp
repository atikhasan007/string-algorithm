#include<bits/stdc++.h>
using namespace std;

string removeDups(string s){

string out = "";
int count[26] = {0};
int len = s.length();
for(int i=0;i<len;i++){
 if(s[i]>='a' && s[i]<='z')
        if(count[s[i]-'a']++==0)
        out = out + s[i];
 else if(s[i]>='A' && s[i]<='Z')
    if(count[s[i]-'a']++==0)
    out  = out + s[i];
}
return out;

}

int main(){

string s;
cin>>s;
cout<<removeDups(s)<<endl;


}
