#include<iostream>
#include<iterator>
#include<algorithm>
#include<array>
using namespace std;

int main(){
    array<int,5>arr;//Declaration of array
    arr={5,9,7,2,1};
    //printing array...........
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 1. element at given position
    cout<<"Element at index 2 : "<<arr.at(2)<<endl;//function -----> arr_name.at(index)

    // 2. operator[]
    cout<<arr[6]<<endl;//garbage 
    arr[1]=40;
    cout<<arr[1]<<endl;

    // 3. return first element
    cout<<"first element of array : "<<arr.front()<<endl;
    //quivalent method ----> *arr_name.begin();
    cout<<"First Element : "<<*arr.begin()<<endl;

    // 4. return last element
    cout<<"Last element : "<<arr.back()<<endl;
    cout<<"Last element : "<<*prev(arr.end())<<endl;
    
    /*---------------------------CAPACITY--------------------------------------*/
   
    if(arr.empty()==1){
        cout<<"Empty"<<endl;
    }
    else
        cout<<"Not empty"<<endl;

    cout<<"no.of elements in an array : "<<arr.size()<<endl;

    cout<<"Max_size(At most) : "<<arr.max_size()<<endl;

    /*------------------------ITERATORS IN ARRAY-------------------------------*/
    //1. begin(),end() & cbegin(),cend()
    array<int,5>a={5,9,8,7,2};

    for(auto it=a.begin();it!=a.end();it++){
        *it=*it+1;
        cout<<*it<<" ";
    }
    cout<<endl;
    //similarly cbegin(),cend() only difference is it can not modify values in an array  
    //Reverse array..............................[rbegin(),rend()]
    for(auto it=a.rbegin();it!=a.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    /*--------------------------Modifiers-------------------------*/
    array<int,5>ele;
    ele.fill(1);
    cout<<"Elements of array ele : ";
    for(int i=0;i<ele.size();i++){
        cout<<ele[i]<<' ';
    }
    cout<<endl;

    return 0;
}
