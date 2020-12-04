#include <iostream>

using namespace std;

int main()
{
    int matrix1[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    int matrix2[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    int matrixAns[3][3];
    for(int q=0;q<3;q++)
    {


        for(int i=0;i<3;i++)
        {
            int sum1=0;
            for(int j=0;j<3;j++)
            {
               sum1+=matrix1[q][j]*matrix2[j][i] ;
            }
            matrixAns[q][i]=sum1;

        }
    }
    for(int q=0;q<3;q++)
    {


        for(int i=0;i<3;i++)
        {
            cout<<matrixAns[q][i]<< " ";
        }
        cout<<endl;
    }
}
