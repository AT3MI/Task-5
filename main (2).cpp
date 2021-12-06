#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;
 
int main() 
{
    cout << "Введите через пробел наборы нулевых элементов: ";
    string str;
    getline(cin, str);
 
    vector <string> vecstr; // Начальный вектор
    vector <string> VECSTR2; // Конечный вектор
    string word;
    stringstream s(str);
         
    while (s >> word) vecstr.push_back(word); // Добавление элемента в конец вектора
         
    int vsize = vecstr.size();
    for (int i = 0; i < vsize; i++) // Цикл для проверки каждого элемента в векторе на четность или нечетность
    {
        if (vecstr[i].size() % 2 == 0)
        {
            VECSTR2.push_back("00"); // Добавление в конечный вектор двух нулей, если в начальном элемент четный
            cout << VECSTR2[i] << endl;
        }
        else
        {
            VECSTR2.push_back("0"); // Добавление в конечный вектор одного нуля, если в начальном элемент нечетный
            cout << VECSTR2[i] << endl;
        }
    }
    cin.get();
    return 0; // Элементы в конечном векторе выводятся последовательно
}


