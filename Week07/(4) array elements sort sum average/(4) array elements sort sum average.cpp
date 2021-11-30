using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterArray(int numberOfProducts, double productsPrices[MAX_SIZE])
{
	for (int i = 0; i < numberOfProducts; i++)
	{
		cin >> productsPrices[i];
	}
}

void printSortedProductsPrices(int numberOfProducts, double productsPrices[MAX_SIZE])
{
	double temp = 0;

	for (int i = 0; i < numberOfProducts; i++)
	{
		for (int j = i+1; j < numberOfProducts; j++)
		{
			if (productsPrices[i] > productsPrices[j])
			{
				temp = productsPrices[i];
				productsPrices[i] = productsPrices[j];
				productsPrices[j] = temp;
			}
		}
	}

	for (int i = 0; i < numberOfProducts; i++)
	{
		cout << productsPrices[i] << " ";
	}

	cout << endl;
}	

double sumArray(int numberOfProducts, double productsPrices[MAX_SIZE])
{
	double sum = 0;

	for (int i = 0; i < numberOfProducts; i++)
	{
		sum += productsPrices[i];
	}

	return sum;
}

double averageArray(int numberOfProducts, double productsPrices[MAX_SIZE])
{
	return sumArray(numberOfProducts, productsPrices) / numberOfProducts;
}

int main()
{
    double productsPrices[MAX_SIZE];
	int numberOfProducts = 0;

	cin >> numberOfProducts;
	enterArray(numberOfProducts, productsPrices);

	printSortedProductsPrices(numberOfProducts, productsPrices);
	cout << (sumArray(numberOfProducts, productsPrices)) << endl;
	cout << (averageArray(numberOfProducts, productsPrices));
}

