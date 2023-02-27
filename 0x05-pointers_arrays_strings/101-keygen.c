#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Create a program that generates random valid passwords.
 * @void: nothing .
 *
 * Description: Create a program that generates random valid passwords.
 * Return: 0 Always.
 */

int main(void)
{
	char pass[84];
	int ind = 0, sum = 0, di1, di2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[ind] = 33 + rand() % 94;
		sum += pass[ind++];
	}
	pass[ind] = '\0';

	if (sum != 2772)
	{
		di1 = (sum - 2772) / 2;
		di2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		{
			di1++;
		}
		for (ind = 0; pass[ind]; ind++)
		{
			if (pass[ind] >= (33 + di1))
			{
				pass[ind] -= di1;
				break;
			}
		}
		 for (ind = 0; pass[ind]; ind++)
                {
                        if (pass[ind] >= (33 + di2))
                        {
                                pass[ind] -= di2;
                                break;
                        }
                }

	}
	printf("%s", pass);
	return (0);
}
