/*
-->expand & contracts from both the ends efficient
   in insertion & deletion of vectors
-->It is implemented as an array of pointers to block of data
-->insertion: O(n)
-->insertion or removal at start & end :O(1) 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>Q;
    Q.push_back(10);
    Q.push_front(5);
    Q.push_back(12);
    Q.push_back(18);
    cout<<"Queue : ";
    for(auto i = Q.begin();i!=Q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    //accessing an element 
    cout<<"Element at index 2 : "<<Q.at(2)<<'\n';

    //pop
    Q.pop_front();
    cout<<"After popping from front : ";
    for(auto i = Q.begin();i!=Q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    cout<<"Popping back  : ";
    Q.pop_back();
    for(auto i = Q.begin();i!=Q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    //insert : allows to insert at any index in queue
    cout<<"Inserted element : ";
    Q.insert(Q.begin()+2,10,1);//10 times 1 from specified position
    for(auto i = Q.begin();i!=Q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    vector<int>v={5,9,7,8,2};
    deque<int>q;
    q.insert(q.begin(),v.begin(),v.end());//v copied to q
    cout<<"V to q : ";
    for(auto i = q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';
    q.clear();
    //assign
    cout<<"Assignment : ";
    q.assign(5,2);
    for(auto i = q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    //front & back
    cout<<"Front element : "<<Q.front()<<endl;
    cout<<"Last element : "<<Q.back()<<endl;

    //clear & erase
    deque<int>::iterator it;
    it=q.end()-2;
    q.erase(it);
    cout<<"q after deleting element at specified position : ";
    for(auto i = q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    q.clear();//delete all the elements from queue
    cout<<"isempty : "<<q.empty()<<endl;
    cout<<"Size of q : "<<q.size()<<endl;//0

    //emplace
    cout<<"Emplace : ";
    q.emplace_front(100);
    q.emplace_back(200);
    q.emplace_back(300);
    q.emplace_front(50);
    for(auto i = q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }cout<<'\n';

    deque<string>s;
    s.emplace_front("Hello! ,");
    s.emplace_back(" I am learning coding");
    s.emplace_front("Adarsh : ");
    for(auto it =s.begin();it!=s.end();it++){
        cout<<*it;
    }cout<<'\n';
    return 0;
}
