#include<bits/stdc++.h>
using namespace std;

bool solve(string s1, string s2){

string temp1,temp2;
int len1 = s1.size();
int len2 = s2.size();
if(len1<2 || len2<2){
    if(s1==s2)
        return true;

    else
        return false;

}
temp1.append(s1.substr(2,len1-2));
temp1.append(s1.substr(0,2));

temp2.append(s1.substr(len1-2,2));
temp2.append(s1.substr(0,len1-2));
if(temp1==s2 || temp2==s2){
    return true;
}
else
    return false;

}

int main(){

string s1,s2;
cin>>s1>>s2;
int ans = solve(s1,s2);
if(ans==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}
