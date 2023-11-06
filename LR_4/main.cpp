#include <iostream>
#include <cmath>

using namespace std;

double row(int& l, double i) {
	int L = 10;  //Максимальное количество слагаемых в сумме
	double sum = 0, s = 1;
	for (l = 1; l < L && fabs(s) > 0.1; l++) {  //пока количество шагов меньше 10 и текущий член ряда больше 0.1, выполняем:
		sum += s;  //Подсчет суммы ряда
		s = s * ((i * log(3)) / l);  //Нахождение следующего члена
	}
	return sum;  //Возвращаем значение суммы
}

int main() {
    system("chcp 65001");  //русский язык
	double F;  //объявление переменной F - исходная функция
	int L;  //объявление переменной L - количество слагаемых в сумме
	for (double i = 0.1; i <= 0.9; i += 0.1) {  //Подсчет значений от 0.1 до 0.9 с шагом 0.1
		F = pow(3, i);  //Функция 3^x
		cout << "При х = " << i << ":" << endl;
		cout.precision(5);  //Точность - 4 знака после запятой
		cout << "\tX^3 = " << F << endl;
		cout << "\tРяд = " << row(L, i) << endl;
		cout << "\tКоличество слагаемых в сумме = " << L << endl << endl;
	}
	return 0;
}
