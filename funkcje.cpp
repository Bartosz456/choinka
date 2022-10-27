#include <iostream> 

using namespace std;
void gwiazdka(){
	cout << "*";
}
void spacja(){
	cout << " ";
}
int main()
{
	int w, j, z;
	cout << "Podaj liczbe wierszy: ";
	cin >> w;
	z = w;
	for (int i = 1; i <= w; i++)
	{
		for (int z = w - 1; z >= i; z--)
		{

			spacja();
		}

		for (j = 1; i * 2 - 1 >= j; j++)
		{
			gwiazdka();
		}


		cout << endl;
	}


	return 0;
}