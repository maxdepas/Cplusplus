#include <bits/stdc++.h>

using namespace std;



int main()
{
  
  int N;
 
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (N % 2 != 0) std::cout <<" Weird";
    else {
        if (N <= 5) std::cout << "Not Weird";
        else if (N <= 20) std::cout << "Weird";
        else std::cout << "Not Weird";

    }
  
    return 0;
}
