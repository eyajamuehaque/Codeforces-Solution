#include<iostream>
using namespace std;

int main(){

int a;
cin>>a;

cout<<"I hate ";

for(int i=1;i<a;i++){

    if(i%2!=0){
        cout<<"that I love ";
    }else{
        cout<<"that I hate ";
    }
}

cout<<"it"<<endl;



return 0;
}
