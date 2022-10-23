/*
-->internally implemented using Red-black trees
-->each element is PAIR
-->we can't do it=it+1(as it non linear DS) but can do it++
-->values are stored in sorted order
-->All keys are unique
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    map<int,string>std;
    std[1]="Adarsh";
    std[2]="Ayush";
    std[3]="sarang";
    std[4]="Aniket";
    std[5];//takes logN time to insert and assign empty string
    map<int,string>::iterator it;
    cout<<"Print using method1 : "<<endl;
    for(it=std.begin();it!=std.end();it++){
        cout<<(*it).first<<" --> "<<(*it).second<<endl;
    }cout<<'\n';

    cout<<"Printing using method2 : "<<endl;
    for(it=std.begin();it!=std.end();it++){
        cout<<it->first<<" = "<<it->second<<endl;
    }cout<<'\n';
    cout<<"Printing using method3 : "<<endl;
    for(auto &i:std){
        cout<<i.first << " " <<i.second<<endl;
    }cout<<'\n';

    //access
    cout<<"Element pointed by key "<<std.at(1)<<endl;

    //capacity
    cout<<"Is map empty : "<<std.empty()<<endl;//checking whether map is empty or not
    cout<<"Capacity of map : "<<std.size()<<endl;
    cout<<"Max capacity of map : "<<std.max_size()<<endl;

    //modifiers
    std.insert({7,"Tanmay"});//O(logN)
    std.insert({8,"prem"});
    std[5]="varun";
    std[6]="Ram";//will get overwrite
    for(auto &it:std){//& --> doesn't create copy 
        cout<<it.first<<" --> "<<it.second<<endl;
    }//O(NLogN)
    
    cout<<"Iterator return by find()...."<<endl;
    auto i=std.find(3);//return iterator of 3 if present
    if(i==std.end()){
        cout<<"No value present";
    }else{
        cout<<i->first<<" --> "<<i->second<<endl;
    }
    
    std.erase(4);//delete value point by key 4
    for(auto &it:std){//& --> doesn't create copy 
        cout<<it.first<<" --> "<<it.second<<endl;
    }

    std.clear();//delete all the elements of map
    cout<<"Size of map after clear : "<<std.size();
    return 0;
}
