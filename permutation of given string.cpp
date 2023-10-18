#include<bits/stdc++.h>
using namespace std;
 vector<string>vec;
 void PermuteString(string s, int i, int len){
 if(i>=len)return;
 for(int j=i;j<len;j++){
    swap(s[i],s[j]);
    if(i==(len-1)){
        vec.push_back(s);

    }
    PermuteString(s,i+1,len);
 }
 }
int main(){

int T;
cin>>T;
while(T--){
    string s;

    vec.clear();
    cin>>s;
    int len = s.length();
    PermuteString(s,0,len);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

}
