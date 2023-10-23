#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
int len = s.length();

int sign = 0;
int out = 0;
for(int i=0;i<len;i++){
    if(i==0 && s[i]==45){
        sign = 1;
        continue;
    }
    if(s[i]>='0' && s[i]<='9'){
        if(i==0){
            out = s[i] - 48;
        }
        else {
            out = out  * 10 + (s[i]-48);
        }
    }
    else{
        cout<<-1<<endl;
        return 0;
    }


}

  if(sign == 1){
        out = 0-out;
    }


 cout<<out<<endl;




}
