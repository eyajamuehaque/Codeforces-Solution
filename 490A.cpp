#include<iostream>
#include<vector>
using namespace std;

int main(){

int n;
cin>>n;
int a[n];
int c1=0,c2=0,c3=0;

vector<int> p,m,s;

for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        p.push_back(i+1);
        c1++;
    }else if(a[i]==2){
        m.push_back(i+1);
        c2++;
    }else if(a[i]==3){
        s.push_back(i+1);
        c3++;
    }
}

int t=min(c1,min(c2,c3));
cout<<t<<endl;

for(int i=0;i<t;i++){
    cout<<p[i]<< " "<<m[i]<< " "<<s[i]<<endl;
}



return 0;
}
