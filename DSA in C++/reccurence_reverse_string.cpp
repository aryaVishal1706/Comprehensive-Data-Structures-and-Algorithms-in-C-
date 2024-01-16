#include<iostream>
using namespace std;
// reverse string
// void reverse(string str,int n){
//      if(n==-1)
//           return ;
//      cout<<str[n];
//      reverse(str,n-1);
// }

void reverse(string str){
     if(str.length() == 0)
          return ;
     string ros = str.substr(1);
     reverse(ros);
     cout<< str<<endl;
}


// replace pi by 3.14
void replacePt(string s){
     if(s.length() ==0){
          return ;
     }
     if(s[0] == 'p' && s[1] =='i'){
          // s = "3.14" + s.substr(2);
          cout<< "3.14";
          replacePt(s.substr(2));
     }
     else{
          cout<<s[0];
          replacePt(s.substr(1));
     }
}

/*
          Str --> "ABC"
          substring --> "" , "A","B","AB","C","AC","BC","ABC"

                               ""
                              /   \
                             A     ""
                            / \    / \
                           /   \   |  \
                         AB     A  B   ""
                     /   \          
     */
// void subseq(string s,string ans){
//      if(s.length()==0){
//           cout<<ans<<endl;
//           return;
//      }
//      char ch =s[0];
//      string ros = s.substr(1);
//      subseq(ros,ans);
//      subseq(ros,ans+ch);
// }

// with ascll numbers --
void subseq(string s,string ans){
     if(s.length()==0){
          cout<<ans<<endl;
          return;
     }
     char ch =s[0];
     int code =ch;
     string ros = s.substr(1);
     subseq(ros,ans);
     subseq(ros,ans+ch);
     subseq(ros,ans+ to_string(code));
}


// print all the possible words from phones digits

// in old times we have phones in that keyboard the A,b,and c are chossen from 
// phone keyboard

int main(){
     // str ---> binod
     string str;
     cin>> str;
     int n = str.length();
     // reverse(str,n-1);
     // reverse(str);

     // rEPLACE PI with 3.14
     // pippppiiiipi
     // replacePt(str);
    
     // work fine for 2 methods
     // subseq("ABC","");

     
     return 0;
}