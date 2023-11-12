// Chirkov var. 24


#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

void main()
{
	int n, c, condition = 0;
	double s, x,eps, xn;
	
	while (1)
	{
	//cin >> x >> n >> c;
		x = 5; n = 4; c = 1;
		xn = 1;// сохраняет степень
		eps = 1. / (1 + x);
		switch (c)
		{
		case 1:
			s = 1;
			for (int i = 1; i <= n; i++)
			{
				xn *= x;
				if (i % 2 != 0)
				{
					s -= xn;
				}
				else
					s += xn;
			}
			eps = fabs(s - eps);
			printf_s("\nsumm = %.2Lf, eps = %.2Lf", s, eps);
			break; 
		case 2:

			break;
		case 3:
			break;
		default:
			cout << "Зачем ты сюда залез?";
			break;
		}

		
		printf_s("\nIf you want exit put 1 else not, put any number: ");
		scanf_s("\n%d", &condition);
		if (condition == 1)
		{
			break;
		}
		system("cls");
	}






}



