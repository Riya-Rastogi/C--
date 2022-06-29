// problem---given a square matrix A & its numbers of rows or colums N return the Transpose of A 
// the transpose of a matrix is the matrix flipped over its main diagonal switching of the row and coloum indices of the matrix
#include<iostream>
using namespace std;

int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;

        }
    }
    //print
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}