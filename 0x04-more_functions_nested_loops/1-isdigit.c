#include "main.h"
/**
*_isdigit- check number from0 to 9
*@x: the number to be checked
*Return: 1 for 0-9 num else 0
*/
int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
}
	return (0);
}
