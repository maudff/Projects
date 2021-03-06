#pragma once

////////////////////////////////////////////////////////////////////////

class Fibonacci
{
private:
	static int rFibonacci(int& f0 ,int& f1 , int i , int number);

	/////////////////////////////////////////////////////////////

public:
	static int fibonacci(int numbers);
};

////////////////////////////////////////////////////////////////////////

int Fibonacci::fibonacci(int number )
{
	int f0 = 0;
	int f1 = 1;
	unsigned fibonacci;
	int i = 0;

	return rFibonacci(f0, f1, i, number);
}

////////////////////////////////////////////////////////////////////////

int Fibonacci::rFibonacci(int& f0, int& f1, int i, int number)
{
	if (i < number)
	{
		int fibonnaci = f0 + f1;
		f0 = f1;
		f1 = fibonnaci;
		i++;
		rFibonacci(f0, f1, i, number);
	}
	return f1;
}

////////////////////////////////////////////////////////////////////////
