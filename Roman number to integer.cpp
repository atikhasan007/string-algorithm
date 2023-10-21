
 #include<bits/stdc++.h>
 using namespace std;

 int solve(string s){
 int len = s.size();
 int sum = 0;
 int num;

 map<char, int>roman;
 roman.insert(pair<char,int>('I',1));
 roman.insert(pair<char,int>('V',5));
 roman.insert(pair<char,int>('X',10));
 roman.insert(pair<char,int>('L',50));
 roman.insert(pair<char,int>('C',100));
 roman.insert(pair<char,int>('D',500));
 roman.insert(pair<char,int>('M',1000));

 for(int i=0;i<len;){
    if(i==(len-1) || roman[s[i]]>=roman[s[i+1]]){
        num = roman[s[i]];
        i++;
    }
    else{
        num = roman[s[i+1]] - roman[s[i]];
        i = i + 2;
    }
    sum = sum + num;
 }
 return sum;

 }


 int main(){

 string s;
 cin>>s;
 int ans = solve(s);
 cout<<ans;


 }
