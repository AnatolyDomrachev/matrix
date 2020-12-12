/*
Инкапсулировать код содержащий поэлементное умножение матриц в класс включающий:
1)метод для ввода значений векторов/матриц,
2)метод для печати векторов/матриц,
3)свойство (дин.массив), содержащее компоненты вектора/матрицы,
4)свойства, содержащие размерности векторов/матриц,
5)метод для матричного арифметического действия по варианту,
6)пример кода в main, демонстрирующий все методы класса.
Так же необходима помощь в заливании кода на github.
*/

class Matrix
{
    private:

    int Msize,Nsize;
    double **arr;

    public:

    void create();
    void print();
    double ** get_arr();
    
    Matrix operator + (Matrix&);

};