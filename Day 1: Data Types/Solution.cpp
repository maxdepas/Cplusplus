#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i_2;  // 12
    double d_2; // 4.0
    string s_2; // "is the best place to learn and practice coding!";

    // Read and save an integer, double, and String to your variables.
    string app;
    
    getline(cin, app);
    i_2 = stoi(app);

    getline(cin, app);
    d_2= stod(app);

    getline(cin, s_2);

    // Print the sum of both integer variables on a new line.
    std::cout<<i+i_2<<endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1);
    std::cout<<d+d_2<<endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout<<s+s_2<<endl;   

    return 0;
}
 
