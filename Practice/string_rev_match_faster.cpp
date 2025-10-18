#include<bits/stdc++.h>
using namespace std;
typedef unordered_set<long long> usll;
typedef long long ll;
const long mod=10000007;
const ll base= 256; //base

long calc(string &s){
    ll h=0,h1=0,n=s.length();
    for(int i=0;i<s.length();i++){
        h=h*base+s[i];
        h1=h1*base+s[n-i];
    }
    return h%mod;
}

int has_reverse(string &s,usll &val){
    int c=0;
    stringstream ss(s);
    string word;
    while(ss>>word){
        ll h1=calc(word);
        string temp=word;
        reverse(temp.begin(),temp.end());
        ll h2=calc(temp);
        if(val.count(h2)){
            c++;
            // return true;
            // break;

        }
        val.insert(h1);
    }
    //return false;
    return c;
}
int main(){

    string s="a cat likes to eot play a tic tac toe cit .";
    usll val;
    cout<< has_reverse(s,val);

}
  
