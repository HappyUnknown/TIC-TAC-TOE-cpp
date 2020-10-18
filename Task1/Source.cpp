#include <iostream>
#include <cstdlib>
#include "Header.h"
using namespace std;
char PrimaryMenu1();
char PlayFor1();
char ChooseHardness1();
char ChooseHardness2();
int EBot1(int &attempt, char field[][3]);
int EBot1(int &attempt, char field[][3]);
int Victory1(char field[][3]);
int MBot1(int &attempt, char field[][3]);
int HBot1(int &attempt, char field[][3]);
void Show(char field[][3]);
int main()
{
	char primaryChoise = PrimaryMenu1();
	char hardness, side;
	if (primaryChoise == 'e')
	{
		cout << "Closing game...";
		system("cls");
		return 0;
	}
	if (primaryChoise == 's') //start
	{
		side = PlayFor1();
		if (side == 'o')//o
		{
			hardness = ChooseHardness1();
			if (hardness == 'e')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					EBot1(attempt, field);
					result = Victory1(field);
					if (result == 0)
					{
						system("pause");
						return 0;
					}
				}
			}
			if (hardness == 'm')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					MBot1(attempt, field);
				}
			}
			if (hardness == 'h')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					HBot1(attempt, field);
				}
			}
		}
		else if (side == 'x')//x
		{
			hardness = ChooseHardness2();
			if (hardness == 'e')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					EBot2(attempt, field);
					result = Victory2(field);
					if (result == 0)
					{
						system("pause");
						return 0;
					}
				}
			}
			if (hardness == 'm')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					MBot2(attempt, field);
				}
			}
			if (hardness == 'h')
			{
				int attempt = 0;
				char field[3][3]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
				int result;
				while (attempt < 9)
				{
					HBot2(attempt, field);
				}
			}
		}
	}
	else
	{
		cout << "Something unexpected happened...\n";
		system("cls");
		return 1;
	}
	cout << "THE GAME ENDED\n";
	system("pause");
	return 0;
}