#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int colour(){}

int main(){

    int N;
    int M;
    cin >>N;
    int *arr=new int[N];

    for(int i=0;i<N;i++){
        cin >>arr[i];
    }

    for(int i=0;i<N/2;i++){
        int j=N-1;
        
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }

    for(int i=0;i<N;i++){
        cout <<arr[i]<<" ";
    }
    
}
