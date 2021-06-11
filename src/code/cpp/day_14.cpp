#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> elements){
        this->elements = elements;
    }
    
    void computeDifference(){
    int min_ele = 101, max_ele = -1;
    for(int i=0; i<(int)elements.size(); i++){
        if (elements[i] < min_ele) min_ele = elements[i];
        if (elements[i] > max_ele) max_ele = elements[i];
    }
    maximumDifference = max_ele - min_ele;
    }

};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}