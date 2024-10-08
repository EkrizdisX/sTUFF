#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cout<<"enter number of actual machines : \n";
	cin>>a;
	cout<<"enter number of transferable machines : \n";
	cin>>b;
	int m[a];
	int t[b];
	cout<<"enter networks in actual machines : \n";
	for(int i=0;i<a;i++){
	    cin>>m[i];
	}
	cout<<"enter networks in tranferable machines : \n";
	for(int i=0;i<b;i++){
	    cin>>t[i];
	}
    
    int j=0;
    int val;
    int count=0;
    int total=0;
    int remnets;
    for(int i=0;i<a;i++){
        total+=m[i];
    }
    cout<<"total machines : "<<total<<"\n";
    
    if(total>=12){
        
        for(int j=0;j<b;j++){
            count+=1;
            int val=4-t[j];
            t[j]=4;
            total-=val;
        }
        remnets=total;
    }else if(12>total){
        for(int i=0;i<a;i++){
            
                int val=4-t[i];
            if(total>=val){
                count+=1;
                t[i]=4;
                total-=val;
            }else if(total<val){
                count+=1;
                t[i]+=total;
                break;
            }
        }
    }
    
    
    cout<<t[0]<<t[1]<<t[2]<<"\n";
    cout<<"count : "<<count<<"\n";
    cout<<"remaining networks : "<<remnets;

    
}
