#include <iostream>
#include <fstream>
using namespace std;

const int sizeVector = 10; //variables globales y constantes
const string file = "numeros.txt";
int vector[sizeVector]; //nombres de variables mas entendibles
//nombres de variables y funciones en ingles
void verifyMajor(int index1, int index2) ///metodo nuevo
{
	if (vector[index1] > vector[index2])
		swap(vector[index1], vector[index2]);
}

void sort()
{
	for (int i = 0; i < sizeVector - 1; i++)
		for (int j = i + 1; j < sizeVector; j++)
			verifyMajor(i, j);
}

void readArchive()
{
	int cont = 0; ///eliminar variables no usadas
	ifstream file(file);
	while (!file.eof())
	{
		file >> vector[cont];
		cont++;
	}
	file.close();
}

void showVector() ///cambiar de funcion a metodo ya que no sirve de nada un boolean
{
	for (int i = 0; i < sizeVector; i++)
		cout << vector[i] << endl; ///reduccion de lineas para un for
}

//eliminar if no necesario
///eliminar texto innecesario

int main()
{
	readArchive();
	sort();
	showVector();
	return 0;
}