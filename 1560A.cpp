#include<iostream>
using namespace std;

int main(){

int n,k;
cin>>n;

while(n--){
    cin>>k;

    int count=0,num=0;


    while(count<k){

            num++;

    if(num%3!=0 && num%10!=3){
        count++;
    }

    }

    cout<<num<<endl;
}


return 0;
}
