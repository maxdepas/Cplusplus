#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int i=1;
    do{

     std::cout << n << " x " << i <<" = "<< (n*i) <<endl;
     i++;

    }while(i<11);

    return 0;
}
