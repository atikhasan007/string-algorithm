#include<bits/stdc++.h>
using namespace std;
int main(){
string s,x;
cin>>s>>x;
int lens = s.length();
int lenx = x.length();

int flag = 0;
int ans;
for(int i=0;i<lens;i++){
    if(s[i]==x[0]){
        flag = 0;
        for(int j=0;j<lenx;j++){
            if(s[i+j]!=x[j]){
                flag= 1;
                break;
            }
        }
        if(flag == 0)ans = i;
    }
}

cout<<ans;

}
