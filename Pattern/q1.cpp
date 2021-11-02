//             *  *  *  *  *
//          *  *  *  *  *
//       *  *  *  *  *
//    *  *  *  *  *
// *  *  *  *  *


#include <iostream>

using namespace std;

int q1()
{
    for(int i = 1; i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<< "  ";
        }
        for(int k=0; k<5;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
