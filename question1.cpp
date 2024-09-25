#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main() {
    vector<int> randomVector;
    int N = 100;
    srand(time(0));

    for (int i = 0 ; i< 10; i++) {
        
        int V = (rand()%N);
        randomVector.push_back(V);
    }
    
    cout<<randomVector[2];
}
