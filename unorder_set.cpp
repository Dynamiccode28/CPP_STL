//implemented using Hashing internally
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){

    unordered_set<int> u1={5,9,5,8,7,1};
    cout<<"Element of u1 : ";
    for(auto &i : u1){
        cout<<i<<" ";
    }
    cout<<endl;
    // u1.insert(500);//adding element 
    // u1.clear();//Remove all the elements
    cout<<u1.count(5)<<endl;//whether element present or not

    cout<<"Size : "<<u1.size()<<endl;
    cout<<"Isempty : "<<u1.empty()<<endl; 
    u1.erase(5);//remove specified entry from unordered_set
    for(auto i:u1 ){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //u1.erase(u1.begin(),u1.end());
    //cout<<"size after erase : "<<u1.size()<<endl;

    for(auto i:u1){
        cout<<"Bucket of "<<i<<" is = "<<u1.bucket(i)<<endl;
    }


}