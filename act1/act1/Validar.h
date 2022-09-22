#pragma once

#include <iostream>
using namespace std;

short isValidDate(short dd, short mm, short yyyy)
{
	if (yyyy < 0)
		return 1;

	if (mm < 0 || mm > 12)
		return 1;

	if (mm == 2)
	{
		if (yyyy % 4 == 0)
		{
			if (dd > 29 || dd < 0)
				return 1;
		}
		else
		{
			if (dd > 28 || dd < 0)
				return 1;
		}
	}
	else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		if (dd > 31 || dd < 0)
			return 1;
	}
	else
	{
		if (dd > 30 || dd < 0)
			return 1;
	}

	return 0;
}