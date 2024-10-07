#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str="<tag1><tag2 value=shivu></tag2></tag1>";
    string code="tag1.tag2~name";
    replace(code.begin(),code.end(),'.',' ');
    replace(code.begin(),code.end(),'~',' ');
    replace(str.begin(),str.end(),'<',' ');
    replace(str.begin(),str.end(),'>',' ');
    replace(str.begin(),str.end(),'/',' ');
    stringstream s(str);
    stringstream c(code);
    string val1,val2;

    s>>val1;
    c>>val2;

   
    do{
        s>>val1;
        c>>val2;
        
    }while(val1==val2);
    
    replace(val1.begin(),val1.end(),'=',' ');
    stringstream val(val1);
    
    string attr,shi;
    val>>attr>>shi;
    if(val2==attr){
        cout<<"YES "<<shi<<"\n";
    }else{
        cout<<"NO";
    }
}