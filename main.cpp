#include <iostream>
#include <fstream>

int prototypeone(int temp);
int prototypetwo();
int prototypethree();


int temp;
int x;
int a;
int countdown;

int main()
{ 
	std::cout << " -30 -20 -10 |10  20  30  40  50  60  70  80  90  100 110  120 " << std::endl;
std::ifstream infile;
infile.open("data.dat");
infile >> temp;
if (temp > -31 and temp < 121)
{
	while (infile)
	{
		prototypeone(temp);
		std::cout << temp;
		if (temp < 10 and temp > 0)
		{
			std::cout << '  ';
		}
		else if (temp > 10 and temp < 100)
		{
			std::cout << ' ';
		}
		else if (temp < 0 and temp > -10)
		{
			std::cout << '  ';
		}


		if (temp > 0)
		{
			prototypetwo();
		}
		else if (temp < 0)
		{
			prototypethree();
		}
		infile >> temp;

	}
}
else
{
	std::cout << "invalid temp" << std::endl;
}
}

int prototypeone(int temp) 
{
	if (temp < 0)
	{
		x = -temp / 3.0; 
	}
	else if (temp > 0)
	{
		x = temp / 3.0;
	}
	if (x >= (temp / 3) + 0.5)
	{
		a = x + 0.5;
	}
	else
	{
		a = x;
	}
	return a;
}

int prototypetwo() 
{
	countdown = 10;
	while (countdown != 0) 
	{
		std::cout << ' ';
		countdown = countdown - 1;
	}
	std::cout << '|';
	countdown = 0;
		while (countdown <= a)
		{
			std::cout << '*';
			countdown = countdown + 1;
	}
		std::cout << " " << std::endl;
		return 0;
}

int prototypethree()
{
	countdown = 9 - a;
	while (countdown != 0)
	{
		std::cout << ' ';
		countdown = countdown - 1;
	}

	countdown = 0;
	while (countdown <= a)
	{
		std::cout << '*';
		countdown = countdown + 1;
	}
	std::cout << '|';
	std::cout << " " << std::endl;
	return 0;
}