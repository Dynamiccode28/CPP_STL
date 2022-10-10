#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s={5,8,6,3,1,2,4};

    cout<<"Set size : "<<s.size()<<endl;//no.of elements set contains

    cout<<"Max_size  : "<<s.max_size()<<endl;

    cout<<"Set containt : ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"ISEmpty : "<<s.empty()<<endl;

    s.insert(50);
    s.insert(10);
    s.insert(12);
    cout<<"Set size : "<<s.size()<<endl;

    //Erase
    cout<<"Set after deletion of 10 : ";
    s.erase(10);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    //deleting in range
    s.erase(s.begin(),s.find(4));//1 to 3 will delete
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Copied in set2 : ";
    set<int, greater<int> > s1(s.begin(),s.end());
    for(int i:s1){
        cout<<i<<" ";
    }
    cout<<endl;
    //clear
    s.clear();
    cout<<"Size of set s after clear : "<<s.size();

    s.emplace(111);//do in_place insertion and avoid copy of obj.
    return 0;
}