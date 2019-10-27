#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    int sum=0;
    int num=0;
     
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0; N>0; i++)    
    {    
    if (N % 2 ==1)
        {
            sum++;

            if (sum > num) num = sum;

        } else sum = 0;  
            
    N= N/2;  
    }    

   
    std::cout <<sum; 
  
    return 0;
}
