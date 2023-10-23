#include<bits/stdc++.h>
using namespace std;
int main(){


string s;
cin>>s;
int len = s.length();
int mx = 0;
int curlen = 0;
vector<char>v;
vector<char>::iterator it,it1;

for(int i=0;i<len;i++){
    it = find(v.begin(),v.end(),s[i]);
    if(it!=v.end()){///is present in v;
        int count = 1;
        it1 = v.begin();///another vector
        while(it1!=it){
            it1++;
            count++;
        }
        if(it==v.begin())
            v.erase(it);
        else v.erase(v.begin(),++it);
        v.push_back(s[i]);
        curlen++;
        curlen = curlen - count;
    }
    else{
        v.push_back(s[i]);
        curlen++;
        if(mx<curlen){
            mx = curlen;
        }
    }
}

cout<<mx<<endl;

}
