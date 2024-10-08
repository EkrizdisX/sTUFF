#include <bits/stdc++.h>
using namespace std;

int main() {
	int m[]={2,3,1,4,0};
	int t[]={0,0,0};
    int a=5,b=3;
    int j=0;
    int val;
    int count=0;
    for(int i=0;i<b;i++){
        
        bool NF=true;
        
        while(NF && j<=a){
            count+=1;
            int val=4-t[i];
            
            if(m[j]<val){
                t[i]+=m[j];
                j+=1;
                
            }else if(m[j]==val){
                t[i]+=m[j];
                j+=1;
                NF=false;
            }else{
                t[i]+=val;
                m[j]-=val;
                NF=false;
            }
        }
        
            
    }
    cout<<t[0]<<t[1]<<t[2]<<"\n";
    cout<<"count : "<<count;

    
}

