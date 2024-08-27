#include<iostream>
using namespace std;

int rotation(char from,char to){
    int distance=abs(to-from);
    return min(distance,26-distance);
}

int main(){
    string s;
    cin>>s;

    int tr=0;
    char current='a';

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        tr+=rotation(current,ch);
        current=ch;
    }

    cout<<tr<<endl;

return 0;
}
