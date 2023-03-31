/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
	while (getchar() != '\n')
	{
		; //do nothing!
	}
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
	printf("<ENTER> to continue...");
	clearInputBuffer();
	putchar('\n');
}

// Get Integer input 
int inputInt(void)
{
	int flag = 1;
	int n;
	char c;

	while (flag)
	{
		scanf("%d%c", &n, &c);

		if (c == '\n')
		{
			flag = 0;
		}
		else
		{
			clearInputBuffer();
			printf("Error! Input a whole number: ");
		}
	}
	return n;
}

// Get positive Integer
int inputIntPositive(void)
{
	int positiveInt;
	int flag = 1;

	while (flag)
	{
		positiveInt = inputInt();
		if (positiveInt > 0)
		{
			flag = 0;
		}
		else
		{
			printf("ERROR! Value must be > 0: ");
		}
	}
	
	return positiveInt;
}

// Get Integer inclusive between a range
int inputIntRange(int min, int max)
{
	int numberInRange;
	int flag = 1;

	while (flag)
	{
		numberInRange = inputInt();

		if (numberInRange >= min && numberInRange <= max)
		{
			flag = 0;
		}
		else
		{
			printf("ERROR! Value must be between %d and %d inclusive: ", min, max);
		}
	}

	return numberInRange;
}

// Get a character within a range
char inputCharOption(const char cStringRestriction[])
{
	char validChar;
	int i = 0;
	int flag = 1;
	int match = 0;
	
	while (flag)
	{
		scanf("%c", &validChar);

		for ( i = 0; cStringRestriction[i] != '\0'; i++)
		{
			if (validChar == cStringRestriction[i])
			{
				flag = 0;
				match = 1;
			}
			else if (cStringRestriction[i+1] == '\0' && match == 0)
			{
				printf("ERROR: Character must be one of [%s]: ", cStringRestriction);
			}
		}
		clearInputBuffer();
	}

	return validChar;
}

// get a string with a specific length size between a range
void inputCString(char *cString, int minChar, int maxChar)
{
	int flag = 1;
	char letter = '\0';

	while (flag)
	{
		int size = 0;
		while (letter != '\n' && size <= maxChar)
		{
			letter = getchar();
			cString[size] = letter;
			size++;
		};

		if (letter == '\n' && size <= (maxChar + 1))
		{
			size--;
			cString[size] = '\0';
		}
		else
		{
			cString[maxChar] = '\0';
			clearInputBuffer();
		}

		if (size >= minChar && size <= maxChar)
		{
			flag = 0;
		}
		else
		{
			letter = '\0';
			if (minChar == maxChar)
			{
				printf("ERROR: String length must be exactly %d chars: ", minChar);

			}
			else
			{
				if (size < minChar)
				{
					printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
				}
				else if (size > maxChar)
				{
					printf("ERROR: String length must be no more than %d chars: ", maxChar);
				}
			}
		}
	}
}

// Displays an array of 10-character digits as formatted phone number
void displayFormattedPhone(const char cstring[])
{
	int i;

	if (cstring == NULL)
	{
		printf("(___)___-____");
	}
	else
	{
		int size = 0;
	
		while (cstring[size] != '\0' && isdigit(cstring[size]))
		{
			size++;
		}

		if (size == 10)
		{
			for (i = 0; cstring[i] != '\0'; i++)
			{
				if (i == 0)
				{
					printf("(");
				}
				else if (i == 3)
				{
					printf(")");
				}
				else if (i == 6)
				{
					printf("-");
				}
				printf("%c", cstring[i]);

			}

		}
		else
		{
				printf("(___)___-____");
		}

	}

}
