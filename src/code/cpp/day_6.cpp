#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        for(int i = 0; i<str.size(); i += 2)
        cout << str[i];
        cout << " ";
        for(int i = 1; i<str.size(); i += 2)
        cout << str[i];
        cout << endl;
    }   
    return 0;
}
