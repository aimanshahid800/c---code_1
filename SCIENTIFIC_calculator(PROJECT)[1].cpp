#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
// #define pie=3.145928
using namespace std;

class SimpleOperation
{
private:
	int a, b, i, arr[5];
	int pd, pm, py, bd, bm, by;
	int d, m, y;
	double x, z;

public:
	void addition() // for addition
	{
		cout << "ENTER two value to ADD : " << endl;
		cin >> a >> b;
		cout << "ADDITION is " << a + b << endl;
	}
	void subtraction() // for subtraction
	{
		cout << "ENTER two value to SUBTRACTION : " << endl;
		cin >> a >> b;
		cout << "SUBTRACTION is " << a - b << endl;
	}
	void multiplication() // for multiplication
	{
		cout << "ENTER two value to MULTIPLY : " << endl;
		cin >> a >> b;
		cout << "MULTIPLY is " << a * b << endl;
	}
	void division() // for division
	{

		cout << "ENTER two value to DIVIDE : " << endl;
		cin >> a >> b;
		if (b == 0)
		{
			cout << "DIVISION BY ZERO " << endl;
		}
		else
		{
			cout << "DIVISION is " << a / b << endl;
		}
	}
	void square() // for square
	{
		cout << "ENTER  a number for taking SQUARE : " << endl;
		cin >> a;
		cout << "SQUARE is " << a * a << endl;
	}
	void squareRoot() // for squareroot
	{
		cout << "ENTER a number for taking SQUAREROOT : " << endl;
		cin >> a;
		cout << "SQUAREROOT is " << sqrt(a);
		cout << endl;
	}
	void cube() // cube
	{
		cout << "ENTER  a number for taking CUBE : " << endl;
		cin >> a;
		cout << "CUBE of a number " << a * a * a << endl;
	}
	int percentage() // percentage
	{
		int i;
		int a, b;
		cout << "ENTER A NUMBER FOR % " << endl;
		cin >> a >> b;
		i = (a * 100) / b;
		cout << a << " over " << b << " is " << i << "%" << endl;
	}
	void factorial() // factorial
	{
		b = 1;
		cout << "ENTER A NUMBER FOR TAKING FACTORIAL : " << endl;
		cin >> a;
		if (a == 0 || a == 1)
		{
			b = 1;
		}
		while (a > 1)
		{
			b = b * a;
			a--;
		}
		cout << "FACTORIAL is : " << b;
	}
	void power() // for power
	{
		cout << "ENTER A NUMBER FOR POWER : " << endl;
		cin >> a;
		cout << "ENTER A POWER NUMBER : " << endl;
		cin >> b;
		cout << "POWER of num is :" << pow(a, b) << endl;
	}
	void sine() // for sine
	{
		cout << "ENTER A VALUE for taking SINE of a number : " << endl;
		cin >> a;
		cout << "Sine is :" << sin(a) << endl;
	}
	// is function takes angle (in radians) as an argument and return
	//  its cosine value that could be verified using cosine curve.
	int cos(double a) // for cosine
	{
		cout << "ENTER an ANGLE (in radians) : " << endl;
		cin >> x;
		double z = tan(x);
		cout << "tan(" << x << ") : " << z << endl;

		// a=((b*3.1415928)/180);
		// cout<<"Cos is :"<<cos(x)<<endl;
	}

	int tan(double a) // for tan
	{

		cout << "ENTER an ANGLE (in radian): " << endl;
		cin >> x;

		// a=((b*3.1415928)/180);
		// return (tan(a));
		cout << "tan is :" << tan(x) << endl;
	}

	void age(int pd, int pm, int py, int bd, int bm, int by) // age calculator
	{

		cout << " Enter the present date in the format dd mm yyyy : ";
		cin >> pd >> pm >> py;
		cout << " Enter the birth date in the format dd mm yyyy : ";
		cin >> bd >> bm >> by;
		int d, m, y;
		int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		y = py - by;
		if (pm < bm)
		{
			y--;
			m = 12 - (bm - pm);
		}
		else
		{
			m = pm - bm;
		}
		if (pd < bd)
		{
			m--;
			d = md[pm - 1] - (bd - pd);
		}
		else
		{
			d = pd - bd;
		}
		cout << "your age is : \n";
		cout << y << " years " << m << " months " << d << " days. ";
	}

	// logarithm

	double valueE(double x)
	{
		cout << "ENTER A NUMBER " << endl;
		cout << x;
		double z;
		return log(x);
		cout << "log(x) = " << z << endl;
	}
}; // simpleoperation class finish

// start currency exchange

class currencyExchange
{
private:
	int value;
	int result;
	int amount;

public:
	void dol_pak()
	{
		cout << "Enter US Dollars : ";
		cin >> amount;
		result = amount * 229.5;
		cout << amount << "US Dollers = " << result;
	}
	void pak_dol()
	{
		cout << "Enter Pakistani rupees : ";
		cin >> amount;
		result = amount / 229.5;
		cout << amount << "Pakistani Rupee =  $" << result;
	}
	void US_ind()
	{
		cout << "Enter US Dollers : ";
		cin >> amount;
		result = amount * 71.31;
		cout << amount << "US Dollars = " << result << "indian Rupees";
	}
	void ind_US()
	{
		cout << "indian Rupee : ";
		cin >> amount;
		result = amount / 71.31;
		cout << amount << "Indian Rupee = " << result << "US Dollars";
	}
	void Euro_US()
	{
		cout << "Enter Euros : ";
		cin >> amount;
		result = amount * 247;
		cout << amount << "Euros = $" << result << " US Dollers";
	}
	void US_Euro()
	{
		cout << "Enter US Dollars : ";
		cin >> amount;
		result = amount / 247;
		cout << amount << "	US dollars = $" << result << " Euros";
	}
	void Yaun_Pak()
	{
		cout << "Enter Yaun : ";
		cin >> amount;
		result = amount * 31.27;
		cout << amount << " Yaun = " << result << " Pakistani Rupee";
	}
	void Pak_Yaun()
	{
		cout << "Enter Pakistani rupee : ";
		cin >> amount;
		result = amount / 31.27;
		cout << amount << "	Pakistani rupee  = " << result << "	Euros";
	}
	void Dirham_Pak()
	{
		cout << "Enter Dirham : ";
		cin >> amount;
		result = amount * 65.7;
		cout << amount << "	Dirham = " << result << "Pakistani Rupee";
	}
	void Pak_Dirham()
	{
		cout << "Enter Pak Rupee : ";
		cin >> amount;
		result = amount / 65.7;
		cout << amount << "  Pakistani Rupee = " << result << "  Dirham";
	}
	void Yen_Pak()
	{
		cout << "Enter Yen : ";
		cin >> amount;
		result = amount * 1.9;
		cout << amount << " Yen = " << result << " Pak Rupee";
	}
	void Pak_Yen()
	{
		cout << "Enter Pak Rupee : ";
		cin >> amount;
		result = amount / 1.9;
		cout << amount << " Pak Rupee = " << result << " Yen";
	}
	void Pound_Pak()
	{
		cout << "Enter Pound : ";
		cin >> amount;
		result = amount * 287.5;
		cout << amount << " Pound = " << result << " Pakistani Rupee";
	}
	void Pak_Pound()
	{
		cout << "Enter Pak Rupee : ";
		cin >> amount;
		result = amount / 287.5;
		cout << amount << " Pakistani Rupee = " << result << "  pound";
	}
	void Riyal_Pak()
	{
		cout << "Enter Riyal : ";
		cin >> amount;
		result = amount * 63.7;
		cout << amount << " Riyal = " << result << "  Pak Rupee";
	}
	void Pak_Riyal()
	{
		cout << "Enter Pak Rupee : ";
		cin >> amount;
		result = amount / 63.7;
		cout << amount << " Pak Rupee = " << result << "  Riyal";
	}
	void Dinar_Pak()
	{
		cout << "Enter Dinnar : ";
		cin >> amount;
		result = amount * 597.33;
		cout << amount << " Dinar = " << result << " Pak Rupee";
	}
	void Pak_Dinar()
	{
		cout << "Pak Rupee : ";
		cin >> amount;
		result = amount / 597.33;
		cout << amount << " Pak rupee = " << result << "  Dinar";
	}
	void Franc_Pak()
	{
		cout << "Enter Franc : ";
		cin >> amount;
		result = amount * 236.22;
		cout << amount << " Franc = " << result << "  Pak Rupee";
	}
	void Pak_Franc()
	{
		cout << "Enter Pak Rupee : ";
		cin >> amount;
		result = amount / 236.22;
		cout << amount << " Pak rupee = " << result << "  Franc";
	}
};

int main()
{
	cout << "----------------------------------------------------------";
	cout << endl;
	cout << "\t\tSCIENTIFIC CALCULATOR\t\t";
	cout << "----____----__DEVELOP BY Aiman __----___---";
	cout << endl;
	cout << "-----------------------------------------------------------";
	cout << endl;
	SimpleOperation obj;
	cout << endl;
	currencyExchange obj1;
	cout << endl;
	int num;
	cout << "ENTER 1 FOR PERFORMING ARITHEMATIC OPERATIONS " << endl;
	cout << "ENTER 2 TO CONVERT EXCHNAGE CURRENCY " << endl;
	cout << "ENTER 3 TO CONVERT SI UNIT " << endl;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		char choice;
		do
		{
			cout << "ENTER T, to terminate program " << endl;
			cout << "PRESS a,for ADDITION" << endl;
			cout << "PRESS bfor SUBTRACTION" << endl;
			cout << "PRESS c,for MULTIPLICATION" << endl;
			cout << "PRESS d,for DIVISION" << endl;
			cout << "PRESS e,for taking SQUARE" << endl;
			cout << "PRESS f,for taking SQUAREROOT" << endl;
			cout << "PRESS g,for taking CUBE" << endl;
			cout << "PRESS h,for taking PERCENTAGE : " << endl;
			cout << "PRESS i,for taking FACTORIAL" << endl;
			cout << "PRESS j,for taking POWER " << endl;
			cout << "PRESS k,for taking SINE " << endl;
			cout << "PRESS l,for taking COSINE " << endl;
			cout << "PRESS m,for taking TANGENT " << endl;
			cout << "PRESS n,for calculate AGE " << endl;
			cout << "PRESS o,for LOGARITHM " << endl;
			cout << "ENTER z, for clear screen " << endl;
			cout << "--------------------------------------------" << endl;

			cout << "ENTER A CHOICE TO PERFORM OPERATON : " << endl;
			cin >> choice;
			int pd, pm, py, bd, bm, by;
			int a, b;
			double x;
			cout << endl;

			if (choice == 'T')
			{
				return 0;
			}
			if (choice == 'a')
			{
				obj.addition();
				cout << endl;
			}
			else if (choice == 'b')
			{
				obj.subtraction();
				cout << endl;
			}
			else if (choice == 'c')
			{
				obj.multiplication();
				cout << endl;
			}
			else if (choice == 'd')
			{
				obj.division();
				cout << endl;
			}
			else if (choice == 'e')
			{
				obj.square();
				cout << endl;
			}
			else if (choice == 'f')
			{
				obj.squareRoot();
				cout << endl;
			}
			else if (choice == 'g')
			{
				obj.cube();
				cout << endl;
			}
			else if (choice == 'h')
			{
				obj.percentage();
				cout << endl;
			}
			else if (choice == 'i')
			{
				obj.factorial();
				cout << endl;
			}
			else if (choice == 'j')
			{
				obj.power();
				cout << endl;
			}
			else if (choice == 'k')
			{
				obj.sine();
				cout << endl;
			}
			else if (choice == 'l')
			{
				obj.cos(a);
				cout << endl;
			}
			else if (choice == 'm')
			{
				obj.tan(a);
				cout << endl;
			}

			else if (choice == 'n')
			{

				obj.age(pd, pm, py, bd, bm, by);
				cout << endl;
			}
			else if (choice == 'o')
			{
				obj.valueE(x);
				cout << endl;
			}
			else if (choice == 'z')
			{
				system("cls"); /*system("cls")  is used for clear screen */
			}
			else
			{
				cout << "invalid choice" << endl;
			}

			cout << endl;
		} while (choice != 'T');
	}
	break;
	// currency exchange case 2
	case 2:
	{
		int value;
		do
		{
			cout << "Press 1: Convert US doller to pak Currency" << endl;
			cout << "Press 2: Convert pak to US doller" << endl;
			cout << "_____________" << endl;
			cout << "Press 3: Convert US Doller to Indian rupee" << endl;
			cout << "Press 4: Convert Indian rupee to US Dollers" << endl;
			cout << "_____________" << endl;
			cout << "Press 5: Convert Euro to US dollers" << endl;
			cout << "Press 6: Convert US Dollers to Euros" << endl;
			cout << "_____________" << endl;
			cout << "Press 7: Convert Yuan into Pak Currency" << endl;
			cout << "Press 8: Convert Pak Currency into Yaun" << endl;
			cout << "_____________" << endl;
			cout << "Press 9: Convert Dirham into Pak Currency " << endl;
			cout << "Press 10: Convert Pak Currency into Dirham" << endl;
			cout << "_____________" << endl;
			cout << "Press 11: Convert Japanes Yen into Pak Currency" << endl;
			cout << "Press 12: Convert Pak Currency into Yen" << endl;
			cout << "_____________" << endl;
			cout << "Press 13: Convert UK Pound into Pak Currency" << endl;
			cout << "Press 14: Convret Pak Currency into UK Pound" << endl;
			cout << "_____________" << endl;
			cout << "Press 15: Convert Riyal into Pak Currency" << endl;
			cout << "Press 16: Convert Pak Currency into Riyal" << endl;
			cout << "_____________" << endl;
			cout << "Press 17: Convert Dinar into Pak Currency" << endl;
			cout << "Press 18: Convert Pak Currency into Dinar" << endl;
			cout << "_____________" << endl;
			cout << "Press 19: Convert Swiss Franc into Pak Currency" << endl;
			cout << "Press 20: Convert Pak Currency into Swiss Franc " << endl;
			cout << "_____________" << endl;
			cout << "press 30 ,to TERMINATE " << endl;
			cout << "press 40,to clear screen " << endl;
			cout << endl;
			cout << "ENTER A CHOICE TO  CONVERT CURRENCY : " << endl;
			cout << endl;

			cin >> value;
			float result;
			float amount;

			switch (value)
			{
			case 1:
				obj1.dol_pak();
				cout << endl;
				break;
			case 2:
				obj1.pak_dol();
				cout << endl;
				break;
			case 3:
				obj1.US_ind();
				cout << endl;
				break;
			case 4:
				obj1.ind_US();
				cout << endl;
				break;
			case 5:
				obj1.Euro_US();
				cout << endl;
				break;
			case 6:
				obj1.US_Euro();
				cout << endl;
				break;
			case 7:
				obj1.Yaun_Pak();
				cout << endl;
				break;
			case 8:
				obj1.Pak_Yaun();
				cout << endl;
				break;
			case 9:
				obj1.Dirham_Pak();
				cout << endl;
				break;
			case 10:
				obj1.Pak_Dirham();
				cout << endl;
				break;
			case 11:
				obj1.Yen_Pak();
				cout << endl;
				break;
			case 12:
				obj1.Pak_Yen();
				cout << endl;
				break;
			case 13:
				obj1.Pound_Pak();
				cout << endl;
				break;
			case 14:
				obj1.Pak_Pound();
				cout << endl;
				break;
			case 15:
				obj1.Riyal_Pak();
				cout << endl;
				break;
			case 16:
				obj1.Pak_Riyal();
				cout << endl;
				break;
			case 17:
				obj1.Dinar_Pak();
				cout << endl;
				break;
			case 18:
				obj1.Pak_Dinar();
				cout << endl;
				break;
			case 19:
				obj1.Franc_Pak();
				cout << endl;
				break;
			case 20:
				obj1.Pak_Franc();
				cout << endl;
				break;
			case 30:
				return 0;
				break;

			case 40:
				system("cls");
				cout << endl;
				break;

			default:
				cout << "Invalid Entry!";
				break;

			}				   // switvh finish
		} while (value != 30); // do finish
	}						   // case finish2

	break;

	// case 3:
	default:
		cout << "invalid ";
	}
}
