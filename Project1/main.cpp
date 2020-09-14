#include <iostream>
#include <fstream>
using namespace std;

void leerArchivoYOrdenar(int vec[])
{
	int num,aux,cont=0;
	ifstream file("numeros.txt");
	while (!file.eof())
	{
		file >> vec[cont];
		cont++;
	}
	file.close();
	for (int i = 0; i < 10-1; i++)
		for (int j = i + 1; j < 10; j++)
			if (vec[i] > vec[j])
				swap(vec[i], vec[j]);
}
void mostrarVec(int vec[])
{
	for (int i = 0; i < 10; i++)
		cout << vec[i] << endl;
}
int main()
{
	int vec[10];
	leerArchivoYOrdenar(vec);
	mostrarVec(vec);
	return 0;
}