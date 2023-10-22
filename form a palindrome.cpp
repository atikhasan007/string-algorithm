#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int n){

int DP[n+1][n+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(i==0 || j==0)
            DP[i][j] = 0;
        else if(s1[i-1]==s2[j-1])
        DP[i][j] = 1 + DP[i-1][j-1];
        else
            DP[i][j] = max(DP[i-1][j], DP[i][j-1]);

    }
}

return DP[n][n];

}


int countMin(string s1){


string s2 = s1;
int n = s2.length();
reverse(s2.begin(),s2.end());
int len = LCS(s1,s2,n);
int insertion = n - len;

return insertion;


}

int main(){


string s1;
cin>>s1;

cout<<countMin(s1)<<endl;




}
