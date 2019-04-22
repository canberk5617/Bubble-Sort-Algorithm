#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <Windows.h>

using namespace std; 

struct bubble
{
string girdiler[7] = {
"0000000000000000000000000000000000",
"00000000000000000000000000000",
"00000000000000000000000000000000000000000000",
"000000000000000000000000",
"00000000000000",
"000000000000000000000000000000000000000",
"0000000000000000000",
};

int next = 0;
};
void main()
{
	int i;
	bubble sort;
	string newgirdiler[7];

	std::cout << "Orjinal girdiler: " << endl;
	for (int i = 0; i < size(sort.girdiler); i++)
	{
		std::cout << sort.girdiler[i] << endl;
	}

	std::cout << "------------------------------------------";

	while (true)
	{
		int newnext;
		int pointer = sort.next;
		sort.girdiler[sort.next];
		sort.next++;
		if (sort.next == 7)
		{
			while (sort.next >= 1)
			{
				sort.next--;
				newnext = 0;
			}
		}
		if (sort.next > 0)
		{
			newnext = sort.next-1;
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////Kodlar buraya/////////////////////////////////////////////////////////////////////////////////////////////////////

		if (size(sort.girdiler[sort.next]) > size(sort.girdiler[newnext]))
		{
			std::cout << newgirdiler[sort.next] << endl;
		}
		else
		{
			sort.girdiler->_Move_alloc(sort.girdiler[sort.next]);
			std::cout << endl;
		}


	}
	std::cout << sort.girdiler;
	std::cout << sort.next;
	std::cin.get();
}