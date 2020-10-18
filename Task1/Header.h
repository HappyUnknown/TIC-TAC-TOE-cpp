#pragma once
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
char ChooseHardness1()
{
	char mode;
	do {
		cout << "\nChoose game mode\n";
		cout << "Easy-e\n";
		cout << "Medium-m\n";
		cout << "Hard-h\n";
		cout << "Do : ";
		cin >> mode;
	} while (mode != 'e'&&mode != 'm'&&mode != 'h');
	return mode;
}
char ChooseHardness2()
{
	char mode;
	do {
		cout << "\nChoose game mode\n";
		cout << "Easy-e\n";
		cout << "Medium-m\n";
		cout << "Hard-h\n";
		cout << "Do : ";
		cin >> mode;
	} while (mode != 'e'&&mode != 'm'&&mode != 'h');
	return mode;
}
char PrimaryMenu1()
{
	char choise;
	do
	{
		cout << "\t\t\t\tTIC TAC TOE\n";
		cout << "________________________________________________________________________________\n";
		cout << "Enter your choise from menu\n";
		cout << "START-s\n";
		cout << "Exit-e\n";
		cout << "Do : ";
		cin >> choise;
	} while (choise != 's' && choise != 'e');
	return choise;
}
char PlayFor1()
{
	char side;
	do
	{
		cout << "\nChoose your symbol (x or o) : ";
		cin >> side;
	} while (side != 'x' && side != 'o');
	return side;
}


void Show(char field[][3])
{
	cout << "_______________________________________\n";
	cout << "Present field\n";
	cout << "---------------------------------------\n";
	for (int width = 0; width < 3; width++)
	{
		for (int height = 0; height < 3; height++)
		{
			if (field[width][height] == 'X' || field[width][height] == 'O')
			{
				cout << field[width][height] << "\t";
			}
			else
			{
				cout << "-\t";
			}
		}
		cout << "\n\n";
	}
	cout << "_______________________________________\n\n";
}
int Victory1(char field[][3])
{

	if (field[0][0] == 'X'&&field[1][1] == 'X'&&field[2][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'X'&&field[1][1] == 'X'&&field[0][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	//
	else if (field[0][0] == 'X'&&field[0][1] == 'X'&&field[0][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[1][0] == 'X'&&field[1][1] == 'X'&&field[1][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'X'&&field[2][1] == 'X'&&field[2][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	//
	else if (field[0][0] == 'X'&&field[1][0] == 'X'&&field[2][0] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][1] == 'X'&&field[1][1] == 'X'&&field[2][1] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][2] == 'X'&&field[1][2] == 'X'&&field[2][2] == 'X')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'O'&&field[1][1] == 'O'&&field[2][2] == 'O'
		)
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'O'&&field[1][1] == 'O'&&field[0][2] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'O'&&field[0][1] == 'O'&&field[0][2] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[1][0] == 'O'&&field[1][1] == 'O'&&field[1][2] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'O'&&field[2][1] == 'O'&&field[2][2] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'O'&&field[1][0] == 'O'&&field[2][0] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][1] == 'O'&&field[1][1] == 'O'&&field[2][1] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][2] == 'O'&&field[1][2] == 'O'&&field[2][2] == 'O')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
}
int Victory2(char field[][3])
{
	if (field[0][0] == 'O'&&field[1][1] == 'O'&&field[2][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'O'&&field[1][1] == 'O'&&field[0][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	//
	else if (field[0][0] == 'O'&&field[0][1] == 'O'&&field[0][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[1][0] == 'O'&&field[1][1] == 'O'&&field[1][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'O'&&field[2][1] == 'O'&&field[2][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	//
	else if (field[0][0] == 'O'&&field[1][0] == 'O'&&field[2][0] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][1] == 'O'&&field[1][1] == 'O'&&field[2][1] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][2] == 'O'&&field[1][2] == 'O'&&field[2][2] == 'O')
	{
		cout << "Computer wins.\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'X'&&field[1][1] == 'X'&&field[2][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'X'&&field[1][1] == 'X'&&field[0][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'X'&&field[0][1] == 'X'&&field[0][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[1][0] == 'X'&&field[1][1] == 'X'&&field[1][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[2][0] == 'X'&&field[2][1] == 'X'&&field[2][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][0] == 'X'&&field[1][0] == 'X'&&field[2][0] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][1] == 'X'&&field[1][1] == 'X'&&field[2][1] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
	else if (field[0][2] == 'X'&&field[1][2] == 'X'&&field[2][2] == 'X')
	{
		cout << "YOU WIN!\n";
		system("pause");
		return 0;
	}
}
int EBot1(int &attempt, char field[][3])
{
	int row, col;
	if (attempt % 2 == 0)
	{
		row = rand() % 3;
		col = rand() % 3;
		if (field[row][col] != ' ')
		{
			do
			{
				row = rand() % 3;
				col = rand() % 3;
			} while (col < 1 || col>3 || row < 1 || row>3 || field[row][col] == 'X' || field[row][col] == 'O');
			Victory1(field);
		}
		field[row][col] = 'X';
		cout << "Enemy's turn...\n";
		Show(field);
		attempt++;
	}
	else
	{
		int row, col;
		//Fix
		cout << "Your turn, enter y coordinate (0-2) : ";
		cin >> row;
		cout << "Enter x coordinate (0-2) : ";
		cin >> col;
		if (field[row][col] != ' ') {
			do
			{
				cout << "TRY AGAIN.\n\n";
				cout << "Your turn, enter y coordinate (0-2) : ";
				cin >> row;
				cout << "Enter x coordinate (0-2) : ";
				cin >> col;
			} while (col < 1 || col>3 || row < 1 || row>3 || field[row][col] == 'X' || field[row][col] == 'O');
			Victory1(field);
		}
		field[row][col] = 'O';

		Show(field);
		attempt++;
	}
	return attempt;
}
int EBot2(int &attempt, char field[][3])
{
	int row, col;
	if (attempt % 2 == 0)
	{
		int row, col;
		cout << "Your turn, enter y coordinate (0-2) : ";
		cin >> row;
		cout << "Enter x coordinate (0-2) : ";
		cin >> col;
		if (field[row][col] != ' ') {
			do
			{
				cout << "TRY AGAIN.\n\n";
				cout << "Your turn, enter y coordinate (0-2) : ";
				cin >> row;
				cout << "Enter x coordinate (0-2) : ";
				cin >> col;
			} while (col < 1 || col>3 || row < 1 || row>3 || field[row][col] == 'X' || field[row][col] == 'O');
			Victory2(field);
		}
		field[row][col] = 'X';

		Show(field);
		attempt++;

	}
	else
	{
		row = rand() % 3;
		col = rand() % 3;
		if (field[row][col] != ' ')
		{
			do
			{
				row = rand() % 3;
				col = rand() % 3;
			} while (col < 1 || col>3 || row < 1 || row>3 || field[row][col] == 'X' || field[row][col] == 'O');
			Victory1(field);
		}
		field[row][col] = 'O';
		cout << "Enemy's turn...\n";
		Show(field);
		attempt++;
	}
	return attempt;
}
int HBot1(int &attempt, char field[][3])
{
	int rows, cols;
	if (attempt % 2 == 0)
	{
		cout << "Enemy's turn...\n";
		if (field[0][0] == ' '&&field[0][1] == ' '&&field[0][2] == ' '&&
			field[1][0] == ' '&&field[1][1] == ' '&&field[1][2] == ' '&&
			field[2][0] == ' '&&field[2][1] == ' '&&field[2][2] == ' ')
		{
			field[1][1] = 'X';
			Show(field);
		}
		else
		{
			if (field[0][0] == 'O'&&field[0][2] == 'O'&&field[0][1] == ' ')
			{
				field[0][1] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][1] == 'O'&&field[0][0] == 'O'&&field[0][2] == ' ')
			{

				field[0][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][0] == 'O'&&field[2][0] == 'O'&&field[1][0] == ' ')
			{
				field[1][0] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][2] == 'O'&&field[2][2] == 'O'&&field[1][2] == ' ')
			{
				field[1][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[2][0] == 'O'&&field[2][2] == 'O'&&field[2][1] == ' ')
			{
				field[2][1] = 'X';
				Show(field);
				Victory1(field);
			}

			else if (field[2][0] == 'O'&&field[1][1] == 'O'&&field[0][2] == 'X'&&field[0][0] == ' ')
			{
				field[0][0] = 'X';
				Show(field);
				Victory2(field);
			}
			else if (field[1][1] == 'O'&&field[2][2] == 'O'&&field[0][0] == 'X'&&field[2][0] == ' ')
			{
				field[2][0] = 'X';
				Show(field);
				Victory2(field);
			}
			else if (field[1][1] == 'O'&&field[0][1] == 'O'&&field[2][0] == 'X'&&field[2][2] == ' ')
			{
				field[2][2] = 'X';
				Show(field);
				Victory2(field);
			}


			else if (field[0][1] == 'O'&&field[0][2] == 'O'&&field[0][0] == ' ')
			{
				field[0][0] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[2][2] == 'O'&&field[1][2] == 'O'&&field[0][2] == ' ')
			{
				field[0][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][1] == 'O'&&field[0][0] == 'O'&&field[0][2] == ' ')
			{
				field[0][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][2] == 'O'&&field[0][0] == 'O'&&field[0][1] == ' ')
			{
				field[0][1] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[0][1] == 'O'&&field[0][0] == 'O'&&field[0][2] == ' ')
			{
				field[0][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[1][1] == 'O'&&field[0][1] == 'O'&&field[2][1] == ' ')
			{
				field[2][1] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[1][1] == 'O'&&field[1][0] == 'O'&&field[1][2] == ' ')
			{
				field[1][2] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[1][1] == 'O'&&field[2][1] == 'O'&&field[0][1] == ' ')
			{
				field[0][1] = 'X';
				Show(field);
				Victory1(field);
			}
			else if (field[1][1] == 'O'&&field[1][2] == 'O'&&field[1][0] == ' ')
			{
				field[1][0] = 'X';
				Show(field);
				Victory1(field);
			}
			else
			{
				rows = rand() % 3;
				cols = rand() % 3;
				if (field[rows][cols] != ' ')
				{
					do
					{
						rows = rand() % 3;
						cols = rand() % 3;
					} while (rows < 0 || rows > 3 || cols < 0 || cols>3 || field[rows][cols] == 'X' || field[rows][cols] == 'O');
				}
				field[rows][cols] = 'X';
				Show(field);
				Victory1(field);
			}
		}
		attempt++;
	}
	else
	{
		do {
			cout << "Enter y coordinate (0-2): ";
			cin >> rows;
			cout << "Enter x coordinate (0-2): ";
			cin >> cols;
		} while (cols < 1 || cols>3 || rows < 1 || rows>3 || field[rows][cols] == 'X' || field[rows][cols] == 'O');
		field[rows][cols] = 'O';
		attempt++;
	}
	return attempt;
}
int HBot2(int &attempt, char field[][3])
{
	int rows, cols;
	if (attempt % 2 == 0)
	{
		do {
			cout << "Enter y coordinate (0-2): ";
			cin >> rows;
			cout << "Enter x coordinate (0-2): ";
			cin >> cols;
		} while (cols < 1 || cols>3 || rows < 1 || rows>3 || field[rows][cols] == 'O' || field[rows][cols] == 'X');
		field[rows][cols] = 'X';
		attempt++;
	}
	else
	{
		cout << "Enemy's turn...\n";

		if (field[0][0] == 'X'&&field[0][2] == 'X'&&field[0][1] == ' ')
		{
			field[0][1] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][1] == 'X'&&field[0][0] == 'X'&&field[0][2] == ' ')
		{

			field[0][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][0] == 'X'&&field[2][0] == 'X'&&field[1][0] == ' ')
		{
			field[1][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][2] == 'X'&&field[2][2] == 'X'&&field[1][2] == ' ')
		{
			field[1][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[2][0] == 'X'&&field[2][2] == 'X'&&field[2][1] == ' ')
		{
			field[2][1] = 'O';
			Show(field);
			Victory2(field);
		}

		else if (field[0][1] == 'X'&&field[0][2] == 'X'&&field[0][0] == ' ')
		{
			field[0][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[2][2] == 'X'&&field[1][2] == 'X'&&field[0][2] == ' ')
		{
			field[0][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][1] == 'X'&&field[0][0] == 'X'&&field[0][2] == ' ')
		{
			field[0][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][2] == 'X'&&field[0][0] == 'X'&&field[0][1] == ' ')
		{
			field[0][1] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][1] == 'X'&&field[0][0] == 'X'&&field[0][2] == ' ')
		{
			field[0][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[0][2] == 'X'&&field[1][1] == 'X'&&field[2][0] == ' ')
		{
			field[2][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[2][0] == 'X'&&field[1][1] == 'X'&&field[0][2] == ' ')
		{
			field[0][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[0][1] == 'X'&&field[2][1] == ' ')
		{
			field[2][1] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[1][0] == 'X'&&field[1][2] == ' ')
		{
			field[1][2] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[2][1] == 'X'&&field[0][1] == ' ')
		{
			field[0][1] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[1][2] == 'X'&&field[1][0] == ' ')
		{
			field[1][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if(field[0][0]=='X'&&field[1][1]=='X'&&field[2][2]=='O'&&field[2][0]==' ')
		{
			field[2][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[2][0] == 'X'&&field[1][1] == 'X'&&field[0][2] == 'O'&&field[0][0] == ' ')
		{
			field[0][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[2][2] == 'X'&&field[0][0] == 'O'&&field[2][0] == ' ')
		{
			field[2][0] = 'O';
			Show(field);
			Victory2(field);
		}
		else if (field[1][1] == 'X'&&field[0][1] == 'X'&&field[2][0] == 'O'&&field[2][2] == ' ')
		{
			field[2][2] = 'O';
			Show(field);
			Victory2(field);
		}

		else
		{
			rows = rand() % 3;
			cols = rand() % 3;
			if (field[rows][cols] != ' ')
			{
				do
				{
					rows = rand() % 3;
					cols = rand() % 3;
				} while (rows < 0 || rows>3 || cols < 0 || cols>3 || field[rows][cols] == 'X' || field[rows][cols] == 'O');
			}
			field[rows][cols] = 'O';
			Show(field);
			Victory2(field);
		}

		attempt++;
	}
	return attempt;
}
int MBot1(int &attempt, char field[][3])
{
	int botChoise = rand();
	switch (botChoise)
	{
	case 0:HBot1(attempt, field); break;
	case 1:EBot1(attempt, field); break;
	}

	return attempt;
}
int MBot2(int &attempt, char field[][3])
{
	int botChoise = rand();
	switch (botChoise)
	{
	case 0:HBot2(attempt, field); break;
	case 1:EBot2(attempt, field); break;
	}

	return attempt;
}