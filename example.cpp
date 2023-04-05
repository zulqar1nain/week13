#include <iostream>
using namespace std;
int main()
{
    int carsData[5][5]={
        {10,7,12,10,4},
        {18,11,15,17,2},
        {23,19,12,16,14},
        {7,12,16,0,2},
        {2,5,6,11,14}
    };
    int sum =0;
    for (int col = 0; col < 5; col++)
    {
       for (int row = 0; row < 5; row++)
       {
        sum=sum+carsData[col][row];
       }
       cout <<endl;
    }
cout <<sum;
    
}
