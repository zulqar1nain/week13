#include <iostream>
using namespace std;
bool check();
int code[4][4] = {
    {0, 0, 0},
    {0, 1, 2},
    {0, 0, 0},
    {2, 1, 0}};
main()
{
    check();
}
bool check()
{
    bool flag =true;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(code[i][1] != code[j][1])
            {
                flag =false;
            }
            else
            {
                flag =true;
            }
        }
    }
return flag;
}