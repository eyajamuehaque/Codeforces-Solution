#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

int left=0,right=n-1,ss=0,ds=0,t=0;


while(left<=right){
    if(a[left]>a[right]){
        if(t%2==0){
            ss+=a[left];
        }else{
            ds+=a[left];
        }
        left++;
    }else{
        if(t%2==0){
            ss+=a[right];
        }else{
            ds+=a[right];
        }
        right--;
    }
    t++;
}

cout<<ss<< " "<<ds<<endl;


return 0;
}
