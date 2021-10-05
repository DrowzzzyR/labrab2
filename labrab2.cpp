#include <iostream>
#include <string>
#include <bitset>
#include <cmath>
using namespace std;
void one()
{ 
cout <<"Введите номер, до которого будет строится ряд: ";
    cout << "row = ";
    int q, row, j;
    cin >> row;
    for (q = 0; q <= row; q++)
    {
        for (j = 0; j <= q; j++) cout << j;
        cout << endl;
    }
}
void two()
{
    unsigned int r = 1, g = 1, h;
    cout << "h = ";
    cin >> h;
    switch (h)
    {
    case 0: cout << 1 << endl;
        break;
    case 1: cout << 1 << "   " << 1 << endl;
        break;
        default: //описание функции / действий
        cout << 1 << "   ";
        for (g = 1; g <= h; g++)
        {
            r = (r * (h - (g - 1)) / g);
            cout << r << "   ";
        }
        cout << endl;
        break;
    
}
}
void three(){
    double sum=0, l=1, z=0, x;
    cout<< "Введите количество чисел: ";
    cin>>z;
    for (l=1; l<=z; l++)
    {
        cin>>x;
        sum = sum+x;
    }
    cout << "Среднее значение  = " << sum / z << endl;
}
void four(){

}
int main()
{
int d=0;
while (d!=4)
{
    cout<<"Что вы хотите выполнить?"<<endl<<"1 Числовой треугольник"<<endl<<" 2 Нахождение биноминальных коэффициентов"<<endl<<"3 Вычисление среднего арифметического"<<endl<<"4 Выход";
    
    
    cin >> d; 
    switch(d) 
    {
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
    default: return 0;
    } 
}
return 0;
}
