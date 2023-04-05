#include <iostream>
using namespace std;
bool identity();
int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
main()
{
    
    identity();
}
bool identity()
{
    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i = j && matrix[i][j] != 1)
            {
                flag = false;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                flag = false;
                break;
            }
            else{
                flag =true;
                break;
            }
        }
    }
    return flag;
}