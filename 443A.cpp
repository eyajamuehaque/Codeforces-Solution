#include<iostream>
#include<set>
#include<cctype>
using namespace std;
 
int main(){
 
    string a;
    set<char> letters;
 
    getline(cin,a);
 
    int i=0;
    while(a[i]){
        if(isalpha(a[i])){
            letters.insert(a[i]);
        }
        i++;
    }
    cout<<letters.size()<<endl;
 
 
return 0;
}
