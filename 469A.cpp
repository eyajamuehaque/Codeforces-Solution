#include<iostream>
#include<set>

using namespace std;

int main (){

int n;
cin>>n;

set<int> levels;

int p,q,level;

cin>>p;
for(int i=0;i<p;i++){
    cin>>level;
    levels.insert(level);
}

cin>>q;
for(int i=0;i<q;i++){
    cin>>level;
    levels.insert(level);
}

if(levels.size()==n){
    cout<< "I become the guy."<<endl;
}else {
    cout<< "Oh, my keyboard!"<<endl;
}



return 0;
}
