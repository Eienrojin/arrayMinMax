//11.122.В массиве хранится информация о стоимости каждой из 60 книг. Определить количество самых дешевых книг

#include <iostream>
using namespace std;

//variables
int* arrayMinMax;
const int LENGTH = 60;
int countCheapBook = 0;

//functions
void fillRandArray();
void printArray();
int getMinNum(int *arrayMinMax);


int main()
{
	setlocale(LC_ALL, "RUS");

    fillRandArray();
	printArray();

	cout << endl << "Минимальное число: " << getMinNum(arrayMinMax);
	cout << endl << "Количество самых дешевых книг: " << countCheapBook;

}

void fillRandArray()
{
	arrayMinMax = new int[LENGTH];

	for (int i = 0; i < LENGTH; i++)
	{
		arrayMinMax[i] = 100 + rand() % 200;
	}
}

void printArray()
{
	cout << "Элементы массива: ";
	for (int i = 0; i < LENGTH; i++)
	{
		cout << "|" << arrayMinMax[i];
	}
}

int getMinNum(int* arrayMinMax)
{
	int minNum = arrayMinMax[0];
	for (int i = 0; i < LENGTH; i++)
	{
		if (arrayMinMax[i] <= minNum)
		{
			minNum = arrayMinMax[i];
			countCheapBook++;
		}
	}
	return minNum;
}
