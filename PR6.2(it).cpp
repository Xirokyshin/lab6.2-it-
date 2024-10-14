//lab6.2(iter).cpp
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++) {
		r[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(4) << r[i];
	}
	cout << endl;
}

// ������� ��� ��������� ������� ������ �������� (���������� �����)
int CountEven(int* r, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (r[i] % 2 == 0)
			count++;
	}
	return count;
}

// ������� ��� ������ ���������� ������� �������� (���������� �����)
int MinEven(int* r, const int size)
{
	int min = 201; // ���������� �������� ����� �� ����������� ������� ��������
	for (int i = 0; i < size; i++) {
		if (r[i] % 2 == 0 && r[i] < min) {
			min = r[i];
		}
	}
	return min;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 30;
	int r[n];
	int Low = 1;
	int High = 200;

	Create(r, n, Low, High); // ��������� ������
	Print(r, n); // ��������� ������

	int evenCount = CountEven(r, n); // ϳ�������� ������� ������ ��������
	cout << "Kilkistb parnix elemntiv = " << evenCount << endl;

	int minEven = MinEven(r, n); // ����� ���������� ������� ��������

	if (minEven <= 200) { // �������� �� �������� ������ �������
		cout << "Naimenshiy parniy element = " << minEven << endl;
	}
	else {
		cout << "Parnix nemay" << endl;
	}

	return 0;
}
