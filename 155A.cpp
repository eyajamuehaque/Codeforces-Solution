#include<iostream>
using namespace std;

int main(){

int n,c=0;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

int max=a[0];
int min=a[0];

for(int i=0;i<n;i++){

    if(a[i]>max){
        c++;
        max=a[i];
    }else if(a[i]<min){
        c++;
        min=a[i];
    }
}

cout<<c<<endl;

return 0;
}
