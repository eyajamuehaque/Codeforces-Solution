#include<iostream>
using namespace std;

int main (){

int n,a,b;
cin>>n;

int count[n];

for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a%b==0){
        count[i]=0;
    }else{
        count[i]=b-(a%b);
    }

}

for(int i=0;i<n;i++){
cout<<count[i]<<endl;
}


return 0;
}
