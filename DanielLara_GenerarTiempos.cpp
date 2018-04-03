#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int fibonacci(int N);
int get_time(int N);

int main()
{
	int N;
	int time;
	int n;
	N = 35;
	n = fibonacci(N);
	time = get_time(N);
	cout << n <<","<< N << endl;
	return 0;	


}
//Se crea la funcion Fibonacci que devolvera el N-esime termino de la serie de fibonacci
int fibonacci(int N)
{
	
	if(N == 0 || N == 1)
	{
       		return N;
	}
	//Se presenta la iteracion de la funcion sobre si misma
    	else
	{
       		return fibonacci(N - 2) + fibonacci(N - 1);
	}
}
//Se crea la funcion que devolvera el tiempo que tome correr la funcion de fibonacci
int get_time(int N)
{
	clock_t t;
	t = clock();
	//Se corre la funcion de fibonacci para medir el tiempo
	fibonacci(N);
	t = clock() - t;
	float time = ((float)t)/CLOCKS_PER_SEC;
	return time;
}


