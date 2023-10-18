#include<bits/stdc++.h>
using namespace std;
string LPS(string s){

int LPS_len = 0;
string lps = "";

int n = s.length();
for(int mid = 0;mid<n;mid++){
    for(int i=0;mid-i>=0 && mid+i<n;i++){
        if(s[mid-i]!=s[mid+i]){
            break;
        }
        int len = 2*i + 1;
        if(len>LPS_len)
        {
            LPS_len = len;
            lps = s.substr(mid-i,len);
        }
    }
}
for(int mid = 0;mid<n-1;mid++){
    for(int i=1;mid-i+1>=0 && mid+i<n;i++){
        if(s[mid-i+1]!=s[mid+i]){
           break;
        }


  int len = 2*i;
    if(len>LPS_len){
        LPS_len = len;
        lps = s.substr(mid-i+1,len);
    }
  }
}
return lps;
}

int main(){

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        string palindrome = LPS(s);
        cout<<palindrome<<endl;
    }
    return 0;

}
