#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> pb;
    int n;
    cin >> n;
    string name;
    for(int i=0; i<n; i++){
        cin >> name;
        if (!pb[name]) 
        cin >> pb[name];
    }
    for(int i=0; i<n; i++){
        cin >> name;
        if(pb.find(name) != pb.end())
        cout << name <<"="<< pb[name] << endl;
        else
        cout << "Not found" << endl;
    }
    
    return 0;
}