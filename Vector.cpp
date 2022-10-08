#include <iostream>
#include<iterator>
#include<vector>
using namespace std;

void Swapping(vector<int>&v1,vector<int>&v2){
    v1.swap(v2);
    cout<<"Containt of v1 after swap : ";
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Containt of v2 after swap : ";
    for(auto i=v2.begin();i!=v2.end();i++){
        cout<<*i<<" ";
    }
}

int main() {
    vector<int>v={5,9,7,8,3,4};

    //1. Iterators..................................
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i+1<<" ";
        
    }
    cout<<endl;
    for(auto i=v.cbegin();i!=v.cend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v.rbegin();i!=v.rend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //2.Capacity ..................................
        for(int i=0;i<v.size();i++){
            cout<<"Capacity : "<<v.capacity()<<endl;
            cout<<"Size : "<<v.size()<<endl;
            
        }
        cout<<"Max_size : "<<v.max_size()<<endl;

        v.resize(5);
        for(auto i=v.begin();i!=v.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;

        if(v.empty()){ //check whether vector is empty or not
            cout<<"Empty vector";
        }
        else
            cout<<"Vector contains element"<<endl;
        v.shrink_to_fit();//Reduces the size to fit it's size and destroy all elements beyond capacity
        for(auto i=v.begin();i!=v.end();i++){
            cout<<*i<<" ";
        }

        //3. Element access..............................
        cout<<"Element at index 6  : "<<v[6]<<endl;
        cout<<"Element at index 7(invalid)  : "<<v[7]<<endl;
        //[] --> will access out of bound element as well 
        cout<<"Element at index 3 : "<<v.at(3)<<endl;//will throw error if trying to access element which is OutOfBound
        //at() --> safe to use

        //4. clear();//remove all elements
        //cout<<v.size()<<endl;

        //5. emplace()//faster than push_back() & directly creats literal in container;
        v.emplace_back(100);
        for(auto i=v.begin();i!=v.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;

        //6. push_back()//creat literal then added to container & slower
        v.push_back(101);

        //7. pop_back();
        v.pop_back();


        //8. erase()
        cout<<"After erase : ";
        v.erase(v.begin(),v.begin()+3);
        for(auto i=v.begin();i!=v.end();i++){
            cout<<*i<<" ";
        }
        cout<<"\n";

        vector<int>v1={1,2,3,4,5};
        vector<int>v2={10,20,30,40,50};
        Swapping(v1,v2);

    return 0;
}