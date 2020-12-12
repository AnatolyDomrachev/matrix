#include "Matrix.h"
#include "iostream"

using namespace std;

void Matrix::create()
{
    cout << "Введите размер матрицы M N: ";
    cin >> Msize >> Nsize;

    //Создаётся динамический массив arr размера M,N
    arr = new double*[Msize];
    for(int ind = 0; ind < Msize; ind++)
        arr[ind] = new double[Nsize];

    //Заполняется динамический массив arr размера M,N
    cout << "Введите элементы матрицы:" << endl;
    for(int ind_m = 0; ind_m < Msize; ind_m++)
        for(int ind_n = 0; ind_n < Nsize; ind_n++)
            cin >> arr[ind_m][ind_n];

}

void Matrix::print()
{
    //Выводит динамический массив arr размера M,N
    cout << endl << "Элементы матрицы:" << endl;
    for(int ind_m = 0; ind_m < Msize; ind_m++)
    {
        cout << endl;
        for(int ind_n = 0; ind_n < Nsize; ind_n++)
            cout << arr[ind_m][ind_n] << " ";
    }

    cout << endl;
}

Matrix Matrix::operator + (Matrix& mtx)
{
    Matrix res;

    if(this->Nsize != mtx.Msize) //Проверка на совместимость
    {
        res.arr = NULL;
        return res;
    }

    int ms = this->Msize;
    int ns = mtx.Nsize;
    int ks = mtx.Msize;

    res.Msize = ms;
    res.Nsize = ns;
    res.arr = new double*[ms];
    for(int ind = 0; ind < ms; ind++)
        res.arr[ind] = new double[ns];

    for(int ind_m = 0; ind_m < ms; ind_m++)
        for(int ind_n = 0; ind_n < ns; ind_n++)
        {
            res.arr[ind_m][ind_n] = 0;

            for(int ind_k = 0; ind_k < ks; ind_k++)
                res.arr[ind_m][ind_n] += this->arr[ind_m][ind_k] * mtx.arr[ind_n][ind_k];
        }

    return res;
}

double ** Matrix::get_arr()
{
	return arr;
}
