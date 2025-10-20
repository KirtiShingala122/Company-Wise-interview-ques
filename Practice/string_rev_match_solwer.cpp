#include<bits/stdc++.h>
using namespace std;
typedef unordered_map<string,int > umsi;
typedef pair<const string,int> psi;
void print_map(umsi &st){
    for(psi &s:st){
        cout<<s.first<<" "<<s.second<<endl;
    }
}
void get_chunks(string &s, umsi &st){ //O(n)
    int p1=0;
    for(int p2=1;p2<s.length();p2++){
        if(s[p2]==' '){
            string temp=s.substr(p1,p2-p1);
            //cout<<temp<<endl;
            st[temp]++;
            p1=p2+1;
          // p2=p1+1;
        }
       
        

    }
}
bool check_reverse(umsi &st,string &s ){
    // for(int i=0;i<s.length();i++){
    //     string temp(1, s[i]);
    //     cout<<temp<<" ";
        
    // }
 
    for(psi &str:st){ 
        string temp=str.first;
        //cout<<temp<<endl;
        reverse(temp.begin(),temp.end());
        //cout<<temp<<endl;
        if(temp.length()==1){
            if(st[temp]>1) return true;
        
        }
        else if(st.count(temp)) {
            return true;
            break;
        }
       }
       return false;
}

int main(){
    string s="a cat likes to play a tic taca toe.";
    umsi st;
    get_chunks(s,st);
   //print_map(st);
    cout<<endl;
    cout<< check_reverse(st,s);
    

}
