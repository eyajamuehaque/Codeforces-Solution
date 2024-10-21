#include<iostream>
#include<string>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

    string s;
    cin>>s;

    int h=stoi(s.substr(0,2));
    string m=s.substr(3,2);

    string period;
    int hour12;

    if(h==0){
        hour12=12;
        period="AM";
    }else if(h==12){
        hour12=12;
        period="PM";
    }else if(h>12){
        hour12=h-12;
        period="PM";
    }else{
        hour12=h;
        period="AM";
    }

    if(hour12<10){
        cout<<"0";
    }

    cout<<hour12<<":"<<m<<" "<<period<<endl;
}

return 0;
}
