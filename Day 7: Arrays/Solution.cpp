#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n;
    int input;
    cin >> n;

    std::vector<int> V;

    for (int i=0; i<n; ++i){
        cin>> input;
        V.push_back(input);
    }
    
    std::reverse(V.begin(),V.end());   

    for (std::vector<int>::iterator it=V.begin(); it!=V.end(); ++it)
    std::cout << *it << ' ';
 

    return 0;
}


