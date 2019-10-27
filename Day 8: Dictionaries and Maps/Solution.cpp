#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string Name;
    int n;
    std::cin>>n;

    std::map <string, int> phonebook;

    for(int i=0; i<n; i++)
    {

    std::cin >> Name;

    if (!phonebook[Name]) 
    {
      std::cin >> phonebook[Name];
    }

    }

    while (std::cin>>Name) {

        if(phonebook.find(Name) == phonebook.end())
        {
        std::cout << "Not found" << endl;
         }   else {
            std::cout << Name << "=" << phonebook[Name] << endl;
        }
   
    }

    return 0;
}

