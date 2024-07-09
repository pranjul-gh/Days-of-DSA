#include<bits/stdc++.h>
using namespace std;


void pairs(){
    pair< int, int > p ={2,3};
    cout<<p.first<<' '<< p.second <<endl;

    pair< int, int > arr[] = {{1,2}, {3,4}, {4,5}};
    cout<< arr[1].second;
}

void vectors(){
    vector<int> v(5,1);
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;
    vec.push_back({3,2});
    vec.emplace_back(2,3);

//````````````
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) << ' ';

    it = it+2;
    cout<< *(it) << ' '<<endl;

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout<<v[0] <<endl;


    for( vector<int>::iterator it = v.begin(); it!=v.end(); it++)// { cout<< *(it);}
//````alternate
    for (auto it = v.begin(); it!=v.end(); it++) // { cout<< *(it);}
//````another alternate
    for (auto it: v) { cout<< it;}


//```DELETE            
            //erase(lower value, [upper limit])
    v.erase(v.begin()+2, v.begin()+4);

// ````INSERT

    v.insert(v.begin(), 100);
    vector<int> cpy(2,10);
    v.insert(v.begin(), cpy.begin(), cpy.end());
}


void listt(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
        
    ls.push_front(4);
    ls.emplace_front(5);
}



int main(){
    pairs();
    return 0;
}
