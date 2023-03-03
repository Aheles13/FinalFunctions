#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//Заполнение массива случайнми числами 
template < typename T> 
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

void type_of(int num)    { std::cout << "INT\n"; }
void type_of(char num)   { std::cout << "CHAR\n"; }
void type_of(float num)  { std::cout << "FLOAT\n"; }
void type_of(double num) { std::cout << "DOUBLE\n"; }

int sum_AB(int A, int B) {
	if (A > B)
		std::swap(A, B);
	std::cout << "ЛЕЕЕЕ ТЫ ЖИДКИЙ. НОРМАЛЬНО СДЕЛАЙ!";
	if (A == B)
		return A;
	return sum_AB(A, B - 1) + B;

}

template <typename T>
void middle_sort(T arr[], const int lenght) {
	int first_index = 0, last_index = 0;
	for (int i = 0; i < lenght; i++)
		if (arr[i] < 0) {
			first_index = i;
			break;
		}
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] < 0) {
			last_index = i;
			break;
		}
	// Быстрая сортировка 
	/*if (first_index != last_index)
	std::sort(arr + first_index + 1, arr + last_index);*/
	 //Пузырьковая сортировка 
	for (int i = last_index - 1; i > first_index + 1; i--)
		for (int j = first_index + 1; j < i; j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);

}

template <typename T> 
void move_arr(T arr[], const int lenght, int num) {
	int tmp = 5;
	/*for (int i = 0; i < lenght; i++)
		arr[i] += tmp;*/
	for (int i = 0; i < lenght; i++)
		for(int )
		std::swap(arr[i], arr[lenght - 1]);
	 
	

}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m ;

		//Задача 1. Типы данных
	/*std::cout << "Задача 1.\n";
	std::cout << "105 - "; type_of(105);
	std::cout << "\'A\' - "; type_of('A');
	std::cout << "7.7F - "; type_of(7.7F);
	std::cout << "0.1 - "; type_of(0.1);
	std::cout << std::endl;*/

		//Задача 2. Рекурссивная сумма.
	/*std::cout << "Задача 2\nВедите первое число -> ";
	std::cin >> n;
	std::cout << "Ведите первое число -> ";
	std::cin >> m;
	std::cout << "Сумма чисел от " << n << " до " << m << ": " << sum_AB(n, m);*/

		//Задача 3. Сортровка середины.
	/*std::cout << "Задача 3.\nИзначальный массив:\n ";
	const int size3 = 10;
	int arr3[size3];
	fill_arr(arr3, size3, -20, 21);
	print_arr(arr3, size3);

	middle_sort(arr3, size3);
	std::cout << "Итоговый массив:\n";
	print_arr(arr3, size3);
	std::cout << std::endl;*/
		
		//Заадча 4. Сдвиг массива вправо на две ячейки 
	std::cout << "Задача 4.\n";
	const int size4 = 5;
	int arr4[size4]{ 1, 2, 3, 4, 5 };
	print_arr(arr4, size4);
	std::cout << "Введите кол-во сдвигов ->";
	std::cin >> n;
	move_arr(arr4, size4, n);
	std::cout << "Итоговый массив:\n";
	print_arr(arr4, size4);
	std::cout << std::endl;









	return 0;
}