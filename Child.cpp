#include <iostream> 
#include <string>
#include <stdio.h> 
using namespace std;

int prim(int nr)
{
	for (int i = 2; i <= nr / 2; i++)
	{
		if (nr % i == 0)
		{
			return 0;
		}
	}
	return nr;
}

int _tmain(int argc, char** argv)
{
	if (argv[1] && argv[2]) {
		for (int i = stoi(argv[1]); i <= stoi(argv[2]); ++i)
			if (prim(i))
				cout << i << ' ';
	}
	else {
		cout << "NO arguments ;(";
	}
	getchar();
	return 0;
}
