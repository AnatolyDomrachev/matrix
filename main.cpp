#include "Matrix.h"
#include "iostream"

using namespace std;

int main()
{
    Matrix mtx1, mtx2;
    mtx1.create();
    mtx1.print();
    mtx2.create();
    mtx2.print();

    Matrix mtx3 = mtx1 + mtx2;

    if(mtx3.get_arr() == NULL )
    {
	    cout << "Матрицы не совместимы" << endl;
	    return 1;
    }

    mtx3.print();

    return 0;
}
