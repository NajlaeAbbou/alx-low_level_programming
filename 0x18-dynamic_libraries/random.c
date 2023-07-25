#include <unistd.h>
#include <string.h>

int rand()
{
	static int i = -1;

	i++;
	switch( i )
	{
		case '0':
			return 8;
		case '1':
			return 8;
		case '2':
			return 7;
		case '3':
			return 9;
		case '4':
			return 23;
		case '5':
			return 74;
	}
	return i * i % 30000;
}
