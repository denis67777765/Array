#include <iostream>
#include <time.h>

using namespace std;

/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
	// вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	double mul = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			mul = mul * arr[i];
		}
	}
	//mul /= 2;
	cout << "Res = " << mul / 2 << endl;
	return 0;

}
*/

void fillArray(int a[], int size);
void printArray(int a[], int size);

double findMultiplication(int a[], int size);

int findIndexMin(int a[], int size);
int findIndexMax(int a[], int size);
void swapElements(int a[], int minIndex, int maxIndex );

double average(int a[], int size);
int calcGreterAvarage(int a[], int size, double average);


int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	fillArray(arr, size);
	printArray(arr, size);
	/*int minIndex = findIndexMin(arr, size);
	int maxIndex = findIndexMax(arr, size);
	swapElements(arr, minIndex, maxIndex);
	printArray(arr, size);*/


	// поиск произведения всех нечетных элементов
	// результат делим на два
}

void fillArray(int a[], int size)
{
	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int size)
{
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

double findMultiplication(int a[], int size) {
	double mul = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) {

		}
	}
	mul /= 2;
	return mul;
}

int findIndexMin(int a[], int size)
{
	int index = 0;
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	return index;
}

int findIndexMax(int a[], int size)
{
	int index = 0;
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	return index;
}

void swapElements(int a[], int minIndex, int maxIndex)
{
	int temp = a[minIndex];
	a[minIndex] = a[maxIndex];
	a[maxIndex] = temp;
}

double average(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	// (имя_типа) переменная - приведения переменной к
	// типу имя_типа
	// (double) x
	return (double)sum / 2;
}

int calcGreterAvarage(int a[], int size, double average)
{
	int counter = 0;
	if (int i = 0; i < size; i++) {
		if (a[i] > average)
			counter++;
	}
	return counter;
}




