#include<bits/stdc++.h>
using namespace std;


string RemoveAdjacent(string s){


string s2;
int len = s.length();
int l = 0;
int flag ;
int last = 0;
int r;
for(int i=0;i<len;){
    int j = i+1;
    flag = 0;
    while((s[i]==s[j]) && (j<len)){
        j++;
        flag = 1;
        last = 1;

    }
    if(flag ==1 ){
        l = j;
        i = j;

    }
    else {
        r = i;
        s2.append(s.substr(l,(r-l+1)));
        l = j;
        i++;

    }
}
if(last == 0)
    return s2;
else
    return RemoveAdjacent(s2);


}
int main(){

int t;
cin>>t;
while(t--){
    string s, s2;
    cin>>s;
    s2 = RemoveAdjacent(s);
    cout<<s2<<endl;

}

return 0;

}
