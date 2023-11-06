#include <iostream>

using namespace std;

//--------------------13
//находит сумму цифр в числе
void func_13() {
	int a, k, s, n;  //объявление переменных
	cin >> a;  //ввод значения переменной a
	for (n = a, s = 0; n != 0; n = n / 10) {  //пока n не равно 0 - выполняется условие, после выполнения 1‑го цикла значение n уменьшается в 10 раз
		k = n % 10;  //нахождение последней цифры числа
		s = s + k; //сумма цифр числа
	}
	cout << s;  //вывод результата в консоль
}

//--------------------14
//находит максимальную цифру числа
void func_14(){
	int a, k, n, s;  //объявление переменных
	cin >> a;  //ввод значения переменной a
	for (n = a, s = 0; n != 0; n = n / 10){  //пока n не равно 0 - выполняется условие, после выполнения 1‑го цикла значение n уменьшается в 10 раз
		k = n % 10;  //нахождение последней цифры числа
		if (k > s) s = k;  //если последняя цифра числа > максимальной цифры числа(по умолчанию s = 0), то s присваиваем значение последней цифры числа
	}
	cout << s;  //вывод результата в консоль
}

//--------------------15
//изменяет полярность числа
void func_15(){
	int a, k, n, s;  //объявление переменных
	cin >> a;  //ввод значения переменной a
	for (n = a, s = 0; n != 0; n = n / 10){  //пока n не равно 0 - выполняется условие, после выполнения 1-го цикла значение n уменьшается в 10 раз
		k = n % 10;  //нахождение последней цифры числа
		s = s * 10 + k;  //умножает предыдущий результат на 10 и прибавляет последнюю цифру числа(по умолчанию s = 0)
	}
	cout << s;  //вывод результата в консоль
}

//--------------------16
// Вносит число в массив в обратном порядке
void func_16(){
	int i, n, a;  //объявление переменных
	cin >> a;  //ввод количества элементов массива
	int A[a];  //объявление массива
	for (i = 0, n = a; n != 0; i++, n = n / 10);  //нахождение длины числа
	for ( n = a; n != 0; i--, n = n / 10) {
		A[i] = n % 10;  //заполнение массива цифрами числа в обратном порядке
		cout << A[i];  //вывод результата в консоль
	}
}

//--------------------17
//находит числа в которых квадрат суммы цифр равен самому числу
void func_17(){
	int A[100], s, k, n , j , a;  //объявление массива и переменных
	for ( j = 0,  a = 10; a < 30000; a++) {  //пока a меньше 30000 - выполняется условие, после выполнения 1-го цикла значение a увеличивается на 1 еденицу
		for ( n = a,  s = 0; n != 0; n = n / 10){  //пока n не равно 0 - выполняется условие, после выполнения 1-го цикла значение n уменьшается в 10 раз
			k = n % 10;  //нахождение последней цифры числа
			s = s + k;   //сумма цифр числа
		}
		if (a == s * s * s)  A[j++] = a;  //если квадрат суммы цифр = самому числу, то записываем это значение в массив
	}
	for (int i = 0; i < j; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------18
//находит числа c 10 по v, которые при перевороте не изменяются
void func_18(){
	int v, j, a, n, s, k;  //объявление переменных
	cin >> v;  //ввод длины массива
	int A[v];  //объявление массива
	for (j = 0, a = 10; a < v; a++) {  //пока a < v - выполняется условие, после выполнения 1-го цикла значение a увеличивается на 1 еденицу
		for (n = a, s = 0; n != 0; n = n / 10){  //пока n не равно 0 - выполняется условие, после выполнения 1-го цикла значение n уменьшается в 10 раз
			k = n % 10;  //нахождение последней цифры числа
			s = s * 10 + k;  //умножает предыдущий результат на 10 и прибавляет последнюю цифру числа(по умолчанию s = 0)
		}
		if (a == s) A[j++] = a;  //если получившееся число = исходному, то записываем значение в массив
	}
	for (int i = 0; i < j; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------19
//убирает из массива все отрицательные элементы
void func_19(){
	int n, i, j;  //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (i = 0; i < n; i++) {  //пока i < n - выполняется условие, после выполнения 1-го цикла значение a увеличивается на 1 еденицу
		if (A[i] < 0) {  //если данный элемент массива является отрицательным, то
			for (j = i; j < n - 1; j++)	A[j] = A[j + 1];  //сдвиг на одну позицию влево(удаляем данный элемент массива)
				n--;  //уменьшение количества элементов массива
					i--;  //проверка первого сдвинутого элемента
		}
	}
	for (i = 0; i < n; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------20
//убирает из массива максимальное число
void func_20(){
	int n, k, i, j;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (i = 1, k = 0; i < n; i++)//нахождение индекса максимального элемент массива
		if (A[i] > A[k]) k = i; //если данный элемент массива > максимального элемента массива(по умолчанию - нулевой элемент массива), то k присваиваем индекс данного элемента массива (k - индекс максимального элемента массива)
	for (j = k; j < n - 1; j++)
		A[j] = A[j + 1];  //сдвиг на одну позицию влево(удаляем данный элемент массива)
	n--;
	for (i = 0; i < n; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}
//--------------------21
//находит и записывает простые числа с 2 по v в массив
void func_21(){
	int v, i, a, n;  //объявление переменных
	cin >> v;  //ввод длины массива
	int A[v];  //объявление массива
	for (i = 0, a = 2; a < v; a++) {
		for ( n = 2; n < a; n++){
			if (a % n == 0) break; //если число не является простым, то выходим из цикла
		}
		if (n == a) A[i++] = a;  //записывает простые числа в массив
	}
	A[i] = 0;  //конечный элемент массива(метка)
	for (i = 0; A[i] != 0; i++){  //вывод результата в консоль
		cout << A[i] <<" ";
	}
}

//--------------------22
//находит и записывает простые числа с 2 по v в массив
void func_22(){
	int s, i, a, v, n;  //объявление переменных
	cin >> v;  //ввод длины массива
	int A[v];  //объявление массива
	for (i = 0, a = 2; a < v; a++) {
		for (s = 0, n = 2; n < a; n++)
			if (a % n == 0) {
				s = 1; break;  //если число не является простым, то ставим метку и выходим из цикла
			}
			if (s == 0) {
				A[i++] = a;  //если простое число было найдено, то записываем значение в массив
				A[i] = 0;  //конечный элемент массива(метка)
			}
		}
	for (i = 0; A[i] != 0; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------23
//находит простые числа в массиве А и записывает их в массив B
void func_23(){
	int j, n, m, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n], B[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (j = 0, i = 0; i < n; i++) {
		for (m = 2; m < A[i]; m++){
			if (A[i] % m == 0) break;  //если число не является простым, то выходим из цикла
		}
		if (m == A[i]) B[j++] = A[i];  //записывает простые числа в массив В
	}
	B[j] = 0;  //конечный элемент массива(метка)
	for (i = 0; B[i] != 0; i++){  //вывод результата в консоль
		cout << B[i] << " ";
	}
}

//--------------------24
//находит простые числа в массиве А и записывает их в массив B
void func_24(){
	int j, n, m, i, s;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n], B[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (j = 0, i = 0; i < n; i++) {
		for (s = 0, m = 2; m < A[i]; m++)
			if (A[i] % m == 0) { s = 1; break;}  //если число не является простым, то ставим метку и выходим из цикла
		if (s == 0) {
			B[j++] = A[i];  //если простое число было найдено, то записываем значение в массив
			B[j] = 0;  //конечный элемент массива(метка)
		}
	}
	for (i = 0; B[i] != 0; i++){  //вывод результата в консоль
		cout << B[i] << " ";
	}
}

//--------------------25
//убирает из массива все простые числа
void func_25(){
	int n, m;  //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		for (m = 2; m < A[i]; m++){
			if (A[i] % m == 0) break; //если число не является простым, то выходим из цикла
		}
		if (m == A[i]) {  //если число простое, то
			for (int j = i; j < n - 1; j++) A[j] = A[j + 1];   //сдвиг на одну позицию влево(удаляем данный элемент массива)
			n--;  //уменьшение количества элементов массива
			i--;  //проверка первого сдвинутого элемента
		}
	}
	for (int j = 0; j < n; j++){  //вывод результата в консоль
		cout << A[j] << " ";
	}
}

//--------------------26
//находит и удаляет из массива все простые числа
void func_26(){
	int n, s, m;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (int j = 0, i = 0; i < n; i++) {
		for (s = 0, m = 2; m < A[i]; m++)
			if (A[i] % m == 0) { s = 1; break; }  //если число не является простым, то ставим метку и выходим из цикла
		if (s == 0) {
			for (j = i; j < n - 1; j++) A[j] = A[j + 1];  //сдвиг на одну позицию влево(удаляем данный элемент массива)
			n--;  //уменьшение количества элементов массива
			i--;  //проверка первого сдвинутого элемента
		}
	}
	for (int j = 0; j < n; j++){  //вывод результата в консоль
		cout << A[j] << " ";
	}
}

//--------------------27
//находит последовательность наименьших целочисленные делители переменной val
void func_27(){
	int val, n = 100, m, i;  //объявление переменных
	cin >> val;  //ввод переменной
	int A[n];  //объявление массива
	for (i = 0; i < n - 1 && val != 1; i++) {
		for (m = 2; val % m != 0; m++);  //нахождение целочисленного делителя
		val /= m;
		A[i] = m;  //запись делителя в массив
	}
	A[i] = 0;
	for (i = 0; A[i] != 0; i++){ //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------28
//нахождение общего делителя для всего массива
void func_28(){
	int v, s, i, n;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	v = A[0] + 1;  //по умолчанию общий делитель это нулевой элемент массива +1
	do {
		v--;
		for ( i = 0, s = 0; i < n; i++)
			if (A[i] % v != 0) { s = 1; break; }  //если число не является простым, то ставим метку и выходим из цикла
	} while (s == 1);
	cout << v;  //вывод результата в консоль
}

//--------------------29
//нахождение общего делителя для всего массива
void func_29(){
	int v, i, n;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (i = 0; i < n; i++)
		if (A[i] % v != 0) { v--; i = -1; }//если данный элемент массива делится на v c остатком, то уменьшаем значение v на 1 еденицу
	cout << v;  //вывод результата в консоль
}

//--------------------30
//находит простые числа, которые меньше вводимогo числа
void func_30(){
	int v, m , s, j, i, a;  //объявление переменных
	cin >> v;  //ввод значения переменной
	int A[v];  //объявление массива
	for (i = 0, a = 2; a < v && i < m - 1; a++) {
		for ( s = 0, j = 0; j < i; j++)
			if (a % A[j] == 0) { s = 1; break; }  //если число не является простым, то ставим метку и выходим из цикла
		if (s == 0) {
			A[i++] = a;  //если простое число было найдено, то записываем значение в массив
			A[i] = 0;  //конечный элемент массива(метка)
		}
	}
	for (i = 0; A[i] != 0; i++){  //вывод результата в консоль
		cout << A[i] << " ";
	}
}

//--------------------31
//находит индекс первой пары одинаковых чисел
int func_31(int C[],int n) {
	for (int i = 0; i < n - 1; i++)  //данный элемент массива
			for (int j = i + 1; j < n; j++)  //следующий элемент массива
				if (C[i] == C[j]) return i;  //возвращает индекс
	return -1;  //одинаковых пар нет
}

void func_31_2(){
	int n; //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	cout << func_31(A, n);  //вывод результата в консоль(обращение на функцию my_func)
}

//--------------------32
//находит индекс первого элемента максимальной последовательности одинаковых элементов
void func_32(){
	int b, n, s, i, k, j;  //объявление переменных
	cin >> n;  //ввод длины массива
	int C[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> C[i];
	}
	for (s = 0, i = 0; i < n; i++) {
		for (k = 0, j = 0; j < n; j++) //нахождение одинаковых элементов массива и их количество
			if (C[i] == C[j]) k++;
		if (k > s) { //если данное количество одинаковых элементов больше предыдущего, то
			s = k;  //значение
			b = i;  //индекс
		}
	}
	cout << b;  //вывод результата в консоль
}

//--------------------33
//находит индекс первого элемента последней пары массива
void func_33(){
	int b, n, s, i, k;
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (s = 0, i = 0; i < n - 1; i++)
		if (A[i] == A[i + 1]) { //если данный элемент массива равен следующему элементу массива, то
			for (k = 2; i + k < n && A[i] == A[i + k]; k++);
			if (k > s) {  //если данное количество одинаковых элементов больше предыдущего, то
				s = k;  //значение
				b = i;  //индекс
			}
		}
	cout << b;  //вывод результата в консоль
}

//--------------------34
//находит примерное значение степени 2(2^x=n находит x)
int func_34(int n ) {
	int k, m;  //объявление переменной
	for (k = 0, m = 1; m <= n; k++, m = m * 2); //нахождение степени
	return k-1;  //возвращает значение степени
}

void func_34_2(){
	int n; //объявление переменной
	cin >> n;  //ввод длины массива
	cout << func_34(n);  //вывод результата в консоль(обращение на функцию my_func)
}

//--------------------35
//отражает массив зеркально
void func_35(){
	int k, n;  //объявление переменной
	cin >> n;  //ввод длины массива
	int C[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> C[i];
	}
	for (int i = 0, j = n - 1; i < j; i++, j--){ //смена значений противоположных концов массива
		k = C[i]; C[i] = C[j]; C[j] = k;
	}
	for (int i = 0; i < n; i++){ //вывод результата в консоль
		cout << C[i] <<" ";
	}
}

//--------------------36
//находит индекс элемента, который является серединой массива
int func_36(int C[], int n){
	int k1, k2;  //объявление переменных
	for (int i = 0; i < n; i++) {
		for (int j = k1 = k2 = 0; j < n; j++)
			if (C[i] != C[j]){
				if (C[i] < C[j]) k1++;  //увеличиваем первую часть
				else k2++;  //увеличиваем вторую часть
			}
		if (k1 == k2) return i;  //если обе части равны выводим индекс
	}
	return -1;  //если количество элементов четное
}

void func_36_2(){
	int n; //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	cout << func_36(A, n);  //вывод результата в консоль(обращение на функцию my_func12)
}

//--------------------37
//находит первый индекс максимального количества одинаковых элементов
void func_37(){
	int b, n, m, s, i, j;  //объявление переменных
	cin >> n;  //ввод длины массива
	int C[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> C[i];
	}
	for (s = 0, i = 0; i < n - 1; i++) {
		for (j = i + 1, m = 0; j < n; j++)
			if (C[i] == C[j]) m++;  //нахождение одинаковых элементов массива и их количество
		if (m > s) {  //если данное количество одинаковых элементов больше предыдущего, то
			s = m;  //значение
			b = i;  //индекс
		}
	}
	cout << b;  //вывод результата в консоль
}

//--------------------38
//находит максимальную длину повторяющихся элементов
void func_38(){
	int b, n, i, k, m;  //объявление переменных
	cin >> n;  //ввод длины массива
	int C[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> C[i];
	}
	for (i = k = m = 0; i < n - 1; i++)
		if (C[i] == C[i + 1]) k++;  //нахождение одинаковых элементов массива и их количество
		else {
			if (k > m) {
				m = k; //значение
				b = i + 1; //индекс
			}
			k = 0;
		}
	cout << b;  //вывод результата в консоль
}

//--------------------39
//считает сумму положительных элементов до тех пор, пока не встретит 0
void func_39(){
	int n, s, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (s = 0, i = 0; i < n; i++) {
		if (A[i] < 0) continue;  //если данный элемент массива меньше нуля, то завышение данного шага цикла
		if (A[i] == 0) break;  //если данный элемент массива равен нулю, то выход из цикла
		s = s + A[i];  //подсчет суммы положительных элементов
	}
	cout << s;  //вывод результата в консоль
}

//--------------------40
//считает сумму положительных элементов пока не встретит отрицательный элемент
void func_40(){
	int n, s, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (s = 0, i = 0; i < n && A[i]>0; i++)  //пока не встретит отрицательный элемент - цикл работает
		s = s + A[i];  //сумма положительных элементов
	cout << s;  //вывод результата в консоль
}

//--------------------41
//считает сумму положительных элементов пока не встретит отрицательный элемент
void func_41(){
	int n, s, i, k;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (k = 0, s = 0, i = 0; i < n && k == 0; i++) {
		if (A[i] < 0) k = 1;  //если данный элемент отрицательный, то k=1(метка)
		s = s + A[i];  //сумма отрицательных элементов
	}
	cout << s;  //вывод результата в консоль
}

//--------------------42
//находит сумму элементов справа и слева, и возвращает индекс примерной середины
int func_42(int A[], int n ){
	int s1, s2, i, j;
	for (s1 = 0, s2 = 0, i = 0, j = n - 1; i <= j;) {
		if (s1 < s2) s1 += A[i], i++;  //подсчет суммы левой части
		else s2 += A[j], j--;  //подсчет суммы правой части
	}
	return i;
}

void func_42_2(){
	int n; //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	cout << func_42(A, n);  //вывод результата в консоль(обращение на функцию my_func)
}

//--------------------43
//подсчитывает разницу между чётными и нечётными элементами массива
void func_43(){
	int n, s, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (s = 0, i = 0; i < n; i++) {
		if (i % 2 == 0) s = s + A[i];  //если элемент четный, то суммируем
		else s = s - A[i]; // иначе вычитаем
	}
	cout << s;  //вывод результата в консоль
}

//--------------------44
//элементы массива A будут записаны в массив B в порядке возрастания
void func_44(){
	int n, j, k, i, l;  //объявление переменных
	cin >> n;  //ввод длины массива
	l=n;
	int A[n], B[n];  //объявление массивов
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (j = 0; n != 0; j++) {
		for (k = 0, i = 1; i < n; i++)
			if (A[i] < A[k]) k = i;//если данный элемент массива < максимального элемента массива(по умолчанию - нулевой элемент массива), то k присваиваем индекс данного элемента массива (k - индекс максимального элемента массива)
		B[j] = A[k]; //записываем максимальное значение в массив B
		for (; k < n - 1; k++) A[k] = A[k + 1]; //выкидываем максимальное значение из массива A
		n--;
	}
	for (i = 0; i < l; i++){  //вывод результата в консоль
		cout << B[i];
	}
}

//--------------------45
//элементы массива A будут записаны в массив B в порядке возрастания
void func_45(){
	int n, j, k, i, l, max;  //объявление переменных
	cin >> n;  //ввод длины массива
	l = n;
	int A[n], B[n];  //объявление массивов
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (j = 0, max = A[0]; j < n; j++) //нахождение первого максимального элемента массива(по умолчанию - 0)
		if (A[j] > max) max = A[j];
	for (j = 0; j < n; j++) {
		for ( k = 0, i = 1; i < n; i++)
			if (A[i] < A[k]) k = i;  //выкидываем максимальное значение из массива A
		B[j] = A[k]; //записываем максимальное значение в массив B
		A[k] = max + 1;
	}
	for (i = 0; i < l; i++){  //вывод результата в консоль
		cout << B[i];
	}
}

//--------------------46
//сортировка массива в порядке убывания
void func_46(){
	int n, k, i, c, l;  //объявление переменных
	cin >> n;  //ввод длины массива
	l = n;  //инициализация переменной l
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	while (n != 0) {
		for ( k = 0, i = 1; i < n; i++)
			if (A[i] < A[k]) k = i;//нахождение индекса минимального элемента массива
		c = A[k]; A[k] = A[n - 1]; A[n - 1] = c; //меняем местами первый и минимальный элементы массива
		n--;
	}
	for (i = 0; i < l; i++){  //вывод результата в консоль
		cout << A[i];
	}
}

//--------------------47
//находит числа с 10 по v, которые не делят без остатка число v
void func_47(){
	int s ,n , a, k , j, i, v;  //объявление переменных
	cin >> v;  //ввод переменной
	int A[v];  //объявление массива
	for (j = 0, a = 10; a < v; a++) {
		for ( s = 0, n = a; n != 0; n = n / 10) {
			k = n % 10; //нахождение последней цифры числа
			if (k != 0 && a % k != 0) {  //если полученное число не равно нулю и делит а с остатком
				s = 1;
				break; //выход из цикла
			}
		}
		if (s == 0) A[j++] = a; //запись в массив цифры делящий число без остатка
	}
	for (i = 0; i < j; i++){  //вывод результата в консоль
		cout << A[i]<<" ";
	}
}

//--------------------48
//убирает из массива элементы(пары) если они равны и стоят рядом
void func_48(){
	int n;  //объявление переменной
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (int i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (int i = 0; i < n - 1; i++)
		if (A[i] == A[i + 1]) {  // если 2 соседних элемента равны, то удаляем их из массива
			for (int j = i; j < n - 2; j++) A[j] = A[j + 2];
			n = n - 2;
			i--;
		}
	for (int i = 0; i < n; i++) {  //вывод результата в консоль
		cout<< A[i] << " ";
	}
}

//--------------------49
//находит индекса минимального неотрицательного числа в массиве
void func_49(){
	int n, k, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for (i = 0, k = -1; i < 10; i++) {
		if (A[i] < 0) continue;  //если данный элемент массива отрицателен, то выходи из шага цикла
		if (k == -1) k = i; //если цикл работает в первый раз, то по умолчанию минимальный не отрицательный это первый элемент массива
		else
			if (A[i] < A[k]) k = i; //если данный элемент массива < максимального элемента массива(по умолчанию - нулевой элемент массива), то k присваиваем индекс данного элемента массива (k - индекс максимального элемента массива)
	}
	if (k != -1) cout << k;  //вывод результата в консоль
	else cout << "Все числа отрицательные";
}

//--------------------50
//находит количество пар, в которых 1 элемент отрицательный второй положительный и их индекс различается на 1
void func_50(){
	int n, s, k, i;  //объявление переменных
	cin >> n;  //ввод длины массива
	int A[n];  //объявление массива
	for (i = 0; i < n; i++){  //заполнение массива
		cin >> A[i];
	}
	for ( i = 0, s = 0, k = 0; i < 10; i++) {
		if (A[i] < 0) k = 1;
		else {
			if (k == 1) s++;  //если первый элемент отрицательный, а второй положительный, увеличиваем счетчик s на 1 единицу
			k = 0;  //обнуляем отрицательность предыдущей переменной
		}
	}
	cout << s; //вывод результата в консоль
}

//--------------------51
//находит максимальный положительный элемент массива
void func_51(){
	int A[10], i, s;  //объявление массива и переменных
	for ( i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for ( i = 0, s = 0; i < 10; i++) {  //нахождение максимального положительного элемента массива
		if (A[i] > s) s = A[i];  //если данный элемент массива > s, то s присваиваем значение данного элемента массива (s - максимальный элемент массива)
	}
	cout << s;  //вывод результата в консоль
}

//--------------------52
//находит индекс максимального элемент массива
void func_52(){
	int A[10], i, k;  //объявление массива и переменных
		for ( i = 0; i < 10; i++) {  //заполнение массива
			cin >> A[i];
		}
	for ( i = 1, k = 0; i < 10; i++) {  //нахождение индекса максимального элемент массива
		if (A[i] > A[k]) k = i;  //если данный элемент массива > максимального элемента массива(по умолчанию - нулевой элемент массива), то k присваиваем индекс данного элемента массива (k - индекс максимального элемента массива)
	}
	cout << k;  //вывод результата в консоль
}

//--------------------53
//находит индекс минимального элемента массива среди положительных чисел
void func_53(){
	int A[10], k, i;  //объявление массива и переменных
	for (i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for (i = 0, k = -1; i < 10; i++){  //нахождение индекса минимального элемента массива среди положительных чисел
		if (A[i] < 0) continue;  //если данный элемент массива отрицателен, то переходим на следующий шаг цикла
		if (k == -1) k = i;  //если данный элемент массива - первый положительный, то k присваиваем значение переменной i
		else
			if (A[i] < A[k]) k = i;  //если данный элемент массива < предыдущего минимального элемента массива, то k присваиваем индекс данного элемента массива (k - индекс минимального элемента массива)
	}
	//вывод результата в консоль
	if (k != -1) cout << k;  //если в массиве были положительные числа, то выводим k
	else cout << "Все числа отрицательные";  //иначе выводим данный текст
}

//--------------------54
//находит индекс минимального элемента массива среди положительных чисел
void func_54(){
	int A[10], k, i;  //объявление массива и переменных
	for ( i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for (i = 0, k = -1; i < 10; i++){  //нахождение индекса минимального элемента массива среди положительных чисел
		if (A[i] < 0) continue;  //если данный элемент массива отрицателен, то переходим на следующий шаг цикла
		if (k == -1 || A[i] < A[k]) k = i;  //если данный элемент массива - первый положительный или данный элемент массива < предыдущего минимального элемента массива, то k присваиваем индекс данного элемента массива (k - индекс минимального элемента массива)
	}
	cout << k;  //вывод результата в консоль(если выводит результат -1, то в массиве нет положительных элементов)
}

//--------------------55
//находит количество положительных элементов
void func_55(){
	int A[10], i, k, s;  //объявление массива и переменных
	for (i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for (i = 0, s = 0; i < 10; i++) {  //нахождение количества положительных элементов
		if (A[i] > 0) s++;  //если данный элемент массива > 0, то значение переменной s увеличиваем на 1 (s - количество положительных элементов массива)
	}
	cout << s;  //вывод результата в консоль
}

//--------------------56
//находит количество пар, в которых 1 элемент отрицательный, второй положительный и их индекс различается на 1
void func_56(){
	int A[10], i, k, s;  //объявление массива и переменных
	for ( i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for ( i = 1, s = 0; i < 10; i++) {  //нахождение количества пар, в которых 1 элемент отрицательный, второй положительный и их индекс различается на 1
		if (A[i] > 0 && A[i - 1] < 0) s++;  //если данный элемент массива > 0 и предыдущий элемент массива < 0, то значение переменной s увеличиваем на 1 (s - количество пар удовлетворяющих условию)
	}
	cout << s;  //вывод результата в консоль
}

//--------------------57
//находит максимальную длину возрастающей последовательности
void func_57(){
	int A[10], i, k, s;  //объявление массива и переменных
	for ( i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for ( i = 1, s = 0, k = 0; i < 10; i++) {  //нахождение максимальной длины возрастающей последовательности
		if (A[i - 1] < A[i]) k++;  //предыдущий элемент массива < данного элемента массива, то значение переменной k увеличиваем на 1 (k - длина возрастающей последовательности)
		else {
			if (k > s) s = k;  //проверка является ли данная последовательность максимальной
			k = 0;  //обнуление переменной k
		}
	}
	cout << s;  //вывод результата в консоль
}

//--------------------58
//находит количество пар, в которых 1 элемент отрицательный, второй положительный и их индекс различается на 1
void func_58(){
	int A[10], i, k, s;  //объявление массива и переменных
	for ( i = 0; i < 10; i++) {  //заполнение массива
		cin >> A[i];
	}
	for ( i = 0, s = 0, k = 0; i < 10; i++) {  //нахождение количества пар, в которых 1 элемент отрицательный, второй положительный и их индекс различается на 1
		if (A[i] < 0) k = 1;  //если данный элемент массива < 0, то k присваивается значение 1
		else{
			if (k == 1) s++; k = 0;  //иначе, если предыдущий элемент массива был отрицательным, то значение переменной s увеличиваем на 1 (s - количество пар удовлетворяющих условию), а также обнуляем значение переменной k
		}
	}
	cout << s;  //вывод результата в консоль
}

int main() {
    func_13();
}