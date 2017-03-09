#include<iostream>   //for using cin and cout 
#include<cmath>      //for using mathimatical functions
#include<process.h>  //for using exit(0)
#include<string>     //for using strings 
using namespace std;   //for using cin and cout
char Numbers[] = "0123456789ABCDEFGHIJ";

class fraction  //class fraction to do operation in the fraction 
{
private:  //private member variables  
	double num, den;
public:
	fraction()  //constractor public initilize num=0 and den=1
	{
		num = 0; den = 1;
	}
	void get_fraction() //member get frist fraction from user 
	{
		char ch;
		cout << "Enter frist fraction as(n/m) to do some operation \n";
		cin >> num >> ch >> den;
		while (den == 0)  //while user enter den = 0 it will repeat
		{
			cout << "Enter frist fraction as(n/m) to do some operation : m!=0\n";
			cin >> num >> ch >> den;
		}
	}
	void get_fraction2()//member get second fraction from user 
	{
		char ch;
		cout << "Enter second fraction as(n/m) to do some operation \n";
		cin >> num >> ch >> den;
		while (den == 0)
		{
			cout << "Enter second fraction as(n/m) to do some operation : m!=0\n";
			cin >> num >> ch >> den;
		}
	}
	void print()   //print result of operation
	{
		cout << "The result = " << num << "/" << den << endl;
	}
	void sum(fraction ff1, fraction ff2)  //sum member function
	{
		num = (ff1.num*ff2.den) + (ff1.den*ff2.num);
		den = ff1.den*ff2.den;
	}
	void sub(fraction ff1, fraction ff2)   //substract member function
	{
		num = (ff1.num*ff2.den) - (ff1.den*ff2.num);
		den = ff1.den*ff2.den;
	}
	void multiplue(fraction ff1, fraction ff2)   //multiplication member function
	{
		num = ff1.num*ff2.num;
		den = ff1.den*ff2.den;
	}
	void division(fraction ff1, fraction ff2)//divisin member function
	{
		num = ff1.num*ff2.den;
		den = ff1.den*ff2.num;
	}
};
class complex  //class complex to do operation in to complex numbers
{
private:   //two private real and image variables 
	double real, image;
public:
	complex() //public constactor to intilize variables
	{
		real = 0; image = 0;
	}
	void get_complex_number()  //member function to get frist complex from user  
	{
		cout << "Enter frist complex number real part\n";
		cin >> real;
		cout << "Enter frist complex number image part\n";
		cin >> image;
	}
	void get_complex_number2() //member function to get second complex from user
	{
		cout << "Enter second complex number real part\n";
		cin >> real;
		cout << "Enter second complex number image part\n";
		cin >> image;

	}
	void print_complex()  //member function to print result of operation 
	{
		cout << "The result of complex number = " << real << "+" << image << "i \n";
	}
	void sum(complex cc1, complex cc2)  //sum member function for two complex numbers
	{
		real = cc1.real + cc2.real;
		image = cc1.image + cc2.image;
	}
	void sub(complex cc1, complex cc2) //substract member function for two complex numbers
	{
		cc2.real *= -1;
		cc2.image *= -1;
		real = cc1.real + cc2.real;
		image = cc1.image + cc2.image;
	}
	void multi(complex cc1, complex cc2)  //multiplication member function for two complex numbers
	{
		real = (cc1.real*cc2.real) + (-1 * (cc1.image*cc2.image));
		image = (cc1.real*cc2.image) + (cc1.image*cc2.real);
	}
	void division(complex cc1, complex cc2)   //divisin member function for two complex numbers
	{
		complex cc3;
		cc3.real = cc2.real;
		cc3.image = cc2.image*-1;
		double den = (cc1.real*cc3.real) - (cc1.image*cc3.image);
		real = ((cc3.real*cc1.real) - (cc3.image*cc1.image)) / den;
		image = image = ((cc1.real*cc3.image) + (cc1.image*cc3.real)) / den;
	}
};
void abslouate_value();
unsigned long calc_factorial(int num);
void factorial();
void power();
void  arthimatic_operation();
void fraction_operation();
void complex_operation();
void quadratic_equation();
void square_root();
void sin();
void cos();
void tan();
void triangle_func();
void log();
void exiting_func();
void display();
string Convert();
void dis_convert();
int main()   //main function 
{

	display();  //call for function display 

	system("pause");
	return 0;
}
void abslouate_value() // function calculate absolute value
{
	int x;         //defination variables
	char ch;
	do
	{
		cout << "Enter the number to calculate absoulte value \n"; //get number from user
		cin >> x;
		cout << "Absloute value of number |" << x << "| = " << abs(x) << endl;  //call absolute function 
		cout << "\n Enter y to calculate absoulte value for another number or (n) to end \n ";  
		cin >> ch;                                            //ask user if he want to repeat
		while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))  //if user donot enter y or Y or n or N
		{
			cout << "Please Enter (y) to calculate absoulte value for another number or(n) to end\n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');     //while he enter y or (Y) it repeat 

}
unsigned long calc_factorial(int num)  //unsigned long function to calculate factorial 
{
	unsigned long fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}
void factorial()    // function to get variable and print result
{

	int num;
	char ch;
	do
	{
		cout << "Enter a positive integer number to calculate the factorial \n";
		cin >> num;
		while (num<0)   //while number negative 
		{
			cout << " Please enter a positive integer number to calculate the factorial \n";
			cin >> num;
		}

		cout << "The factorial of number " << num << "! = " << calc_factorial(num) << endl;  //calculate calc_factorial and print result
		cout << "\n Enter y to calculate factorial for another number or (n) to end \n ";
		cin >> ch;
		while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))
		{
			cout << "Please Enter (y) to calculate factorial for anthor number or(n) to end\n ";
			cin >> ch;
		}

	} while (ch == 'y' || ch == 'Y');
}
void power()   //function to calculate power 
{
	char ch;
	double  base, exponent;  //define two variables
	do
	{
		cout << "Enter a base \n";  //get base and exponent from user 
		cin >> base;
		cout << "and exponent to calculate power \n";
		cin >> exponent;
		cout << "The power of " << base << "^" << exponent << " = " << pow(base, exponent) << endl; //call power function and print it
		cout << "\n Enter (y) to calculate power for another number or (n) to end \n ";
		cin >> ch;
		while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))
		{
			cout << "Please Enter (y) to calculate power for another number or(n) to end\n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');

}
void  arthimatic_operation()
{
	float num1, num2, result;  //define variables

	char op, ch;
	do
	{
		cout << "Enter the operation as a form n(+,-,*,/)m : \n"; //get frist and operation and second numbers from user
		cin >> num1 >> op >> num2;
		while ((op != '+') && (op != '-') && (op != '*') && (op != '/'))
		{
			cout << "Please enter the operation as a form n(+,-,*,/)m : \n";
			cin >> num1 >> op >> num2;
		}
		switch (op)   //switch case on operator 
		{
		case '+':      //case '+' and sum two numbers 
			result = num1 + num2;
			break;   
		case '-':      //case '-' and substract two numbers 
			result = num1 - num2;
			break;
		case '*':      //case '*' and multiplication two numbers 
			result = num1*num2;
			break;
		case '/':      //case '/' and division two numbers 
			while (num2 == 0)    //while second number == 0 imposible to do this opereatin
			{
				cout << "Please enter the operation as a form n(+,-,*,/)m : m!=0 \n";
				cin >> num1 >> op >> num2;


			}
			result = num1 / num2;

			break;
		default:
			cout << "Invalid operation \n";
		}
		cout << "Result = " << result << endl;   //print result of operation

		cout << "\n Enter (y) to do another operation or (n) to end\n ";
		cin >> ch;
		while ((ch != 'y'&&ch != 'Y') && (ch != 'n'&&ch != 'N'))
		{
			cout << "Please Enter (y) to do another operation or (n) to end \n ";
			cin >> ch;
		}

	} while (ch == 'y' || ch == 'Y');

}
void fraction_operation()  //function to calculate operation in to fraction numbers 
{
	int choice;
	fraction f1, f2;  //create two object from class fraction
	char ch;
	do
	{
		f1.get_fraction();   //get frist fraction from user 
		f2.get_fraction2();   //get second fraction from user 
		cout << "=========================================\n"; //menu to select operation 
		cout << "       Choice operation      \n";
		cout << "=========================================\n";
		cout << "  1.Sum for two fraction \n";
		cout << "  2.Substract for two fraction \n";
		cout << "  3.Multiplication for two fraction \n";
		cout << "  4.Divisin for two fraction \n";
		cout << "=========================================\n";
		cout << "Enter your choice \n";
		cin >> choice;
		while (choice<1 || choice>4)
		{
			cout << "Please enter your choice between (1--->4) \n";
			cin >> choice;
		}
		switch (choice)      //switch case on choice 
		{
		case 1:         
			f1.sum(f1, f2);  //case 1 and sum two fraction numbers
			f1.print();
			break;
		case 2:   
			f1.sub(f1, f2);   //case 2 and substract two fraction numbers
			f1.print();
			break;
		case 3:
			f1.multiplue(f1, f2);  //case 3 and multiplication two fraction numbers
			f1.print();
			break;
		case 4:
			f1.division(f1, f2);   //case 4 and division two fraction numbers
			f1.print();
			break;
		default:
			cout << "Invalid choice \n";
		}
		cout << "Woud you like to do another operation (y/n) : \n";
		cin >> ch;
		while ((ch != 'y'&&ch != 'Y') && (ch != 'n'&&ch != 'N'))
		{
			cout << "Please Enter (y) to do another operation or (n) to end \n ";
			cin >> ch;
		}

	} while (ch == 'y' || ch == 'Y');

}
void complex_operation()  //function to calculate operation in two complex numbers 
{
	complex c1, c2;   //create two objects from class complex
	int choice;
	char ch;
	do
	{
		c1.get_complex_number();  //get function to get frist complex number from user 
		c2.get_complex_number2(); //get function to get second complex number from user 
		cout << "==============================================\n";
		cout << "       Choice operation      \n";                  //menu options to select operation
		cout << "==============================================\n";
		cout << "  1.Sum for two complex numbers \n";
		cout << "  2.Substract for two complex numbers \n";
		cout << "  3.Multiplication for two complex numbers \n";
		cout << "  4.Divisin for two complex numbers \n";
		cout << "==============================================\n";
		cout << "Enter your choice \n";
		cin >> choice;
		while (choice<1 || choice>4)
		{
			cout << "Please enter your choice between (1--->4) \n";
			cin >> choice;
		}
		switch (choice)   //switch case on choice 
		{
		case 1:
			c1.sum(c1, c2);   //case 1 and sum two complex numbers
			c1.print_complex();
			break;
		case 2:
			c1.sub(c1, c2);   //case 2 and substract two complex numbers
			c1.print_complex();
			break;
		case 3:
			c1.multi(c1, c2);  //case 3 and multiplication two complex numbers
			c1.print_complex();
			break;
		case 4:
			c1.division(c1, c2);  //case 4 and division two complex numbers
			c1.print_complex();
			break;
		default:
			cout << "Invalid choice \n";
		}
		cout << "Woud you like to do another operation (y/n) : \n";
		cin >> ch;
		while ((ch != 'y'&&ch != 'Y') && (ch != 'n'&&ch != 'N'))
		{
			cout << "Please Enter (y) to do another operation or (n) to end \n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');
}
void quadratic_equation()
{
	char ch;
	int a, b, c;  //defination variables
	double x1, x2;
	double sq1, sq2;
	do
	{
		cout << "Enter the factors a,b,c of quadratic equation ax^2+bx+c=0 : \n";
		cin >> a >> b >> c;  //get factors of equation from user
		while (a == 0)  //while a==0 
		{
			cout << "Please enter the factors a,b,c of quadratic equation ax^2+bx+c=0 : a!=0 \n";
			cin >> a >> b >> c;
		}
		sq1 = b*b - (4 * a*c);
		sq2 = sqrt(sq1);
		x1 = (-b + (sq2)) / 2 * a;  //calculate frist square root
		cout << "X1 = " << x1 << endl;//print frist square root
		x2 = (-b - (sq2)) / 2 * a;  //calculate second square root
		cout << "X2 = " << x2 << endl; //print second square root

		cout << "Woud you like to do another operation (y/n) : \n";
		cin >> ch;
		while ((ch != 'y'&&ch != 'Y') && (ch != 'n'&&ch != 'N'))
		{
			cout << "Please Enter (y) to do another operation or (n) to end \n ";
			cin >> ch;
		}

	} while (ch == 'y' || ch == 'Y');
}
void square_root()  //square root function
{
	char ch;
	do
	{
		double x;  
		cout << "Enter a number to calculate square root \n";
		cin >> x;     //get number from user 
		while(x<0)    //while number negative  
		{
		cout << "Please Enter a positive number to calculate square root \n";
		cin >> x;
		}
		cout << "Square root of number " << x << " is " << sqrt(x) << endl; //call function square root
		cout << "\n Enter y to calculate square root for another number or (n) to end \n ";
		cin >> ch;
		while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))
		{
			cout << "Please Enter (y) to calculate square root for another number or(n) to end\n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');
}
void sin()  //calculate sin function
{
	double x, y;  //get angle from user 
	cout << "Enter angle to calculate sin \n";
	cin >> x;
	y = x*0.01745329252;    //call function sin
	cout << "The sin of (" << x << ")= " << sin(y) << endl;
}
void cos()    //calculate cos function
{
	double x, y;   //get angle from user 
	cout << "Enter the angle to calculate cos \n";
	cin >> x;
	y = x*0.01745329252;  //call function cos
	cout << "The cos of (" << x << ") = " << cos(y) << endl;
}
void tan() //calculate tan function
{

	double x, y; //get angle from user 
	cout << "Enter the angle to calculate tan \n";
	cin >> x;
	y = x*0.01745329252; //call function tan
	cout << "The tan of (" << x << ") = " << tan(y) << endl;
}
void triangle_func()  //display triangle function
{
	char ch;
	int choice;  //enter choice
	do
	{        //menu options
		cout << "=========================================\n";
		cout << "       Choice operation      \n";
		cout << "=========================================\n";
		cout << " ** 1.Sin function                     **\n";
		cout << " ** 2.Cos function                     **\n";
		cout << " ** 3.Tan function                     **\n";
		cout << "=========================================\n";
		cout << "Enter your choice \n";
		cin >> choice;
		while (choice<1 || choice>3)
		{
			cout << "Please enter your choice between (1--->3) \n";
			cin >> choice;
		}
		switch (choice)   //switch case on choice
		{
		case 1:
			sin();     //case 1 calcuate sin 
			break;
		case 2:
			cos();       //case 2 calcuate cos
			break;
		case 3:            //case 3calcuate tan
			tan();
			break;

		default:
			cout << "Invalid choice \n";
		}
		cout << "Woud you like to do another operation (y/n) : \n";
		cin >> ch;
		while ((ch != 'y'&&ch != 'Y') && (ch != 'n'&&ch != 'N'))
		{
			cout << "Please Enter (y) to do another operation or (n) to end \n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');
}
void log()  //function calculate log and ln
{
	double x;
	int choice;
	char ch;
	do
	{   
		cout<<"   1- calculate ln for a number \n";
		cout<<"   2- calculate log for a number \n";
		cout<<"Enter your choice \n";
		cin>>choice;
		while(choice<1||choice>2)
		{
		cout<<"Please Enter your choice between (1-->2)\n";
		cin>>choice;
		
		}
		switch (choice)
		{
		case 1:cout << "Enter the number to calculate ln \n";
		cin >> x;  //call ln function 
		cout << "The ln of (" << x << ") = " << log(x) << endl;
        
			break;
		case 2:
			cout << "Enter the number to calculate log \n";//get number from user
		cin >> x;
		cout << "The log of (" << x << ") = " << log10(x) << endl;
			break;
		default :
			cout<<"Invalid operation  \n";
		
		}
		
		cout << "\n Enter y to calculate logarithm for another number or (n) to end \n ";
		cin >> ch;
		while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))
		{
			cout << "Please Enter (y) to calculate logarithm for anthor number or(n) to end\n ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');
}
void exiting_func()  //end program
{
	cout << "You exiting from program \n";
	exit(0);   //exit from program
}
string Convert(int x, int b)  //function to convert between systems
{
	 
	string ret;
	while (x)  //while x!=0
	{
		ret = Numbers[x%b] + ret;
		x /= b;
	}
	return ret;   
}
void dis_convert() //display function from systems
{
	char ch;
	do
	{
	int x, y1;  //get decimal number
	cout << "enter the decimal number : ";
	cin >> x;
	cout << "enter the system you want trans to : ";
	cin >> y1;  //get system user want to convert it 
	cout << Convert(x, y1) << endl;  //call convert function
	int  dec = 0, w = 1, y;  
	cout << "Enter Number by binary to covert to dicimal:" << endl;
	cin >> y;    //get binary number
	do
	{
		dec += (y % 10)*w;
		w *= 2;
		y /= 10;
	} while (y != 0);
	cout << "The Number by decimal is :" << dec << endl;  //display decimal number
	cout << "\n Enter y to covert between systems or (n) to end \n ";
	cin >> ch;
	while ((ch != 'y' && ch != 'Y') && (ch != 'n' && ch != 'N'))
	{
		cout << "Please Enter (y) to covert between systems or(n) to end\n ";
		cin >> ch;
	}
	} while (ch == 'y' || ch == 'Y');
}
void display()  //display program
{
	while (1)  //while no exit from user 
	{
		int choice;  //choice menu
		cout << "=======================================================================\n";
		cout << "     Choice from the following menu \n";

		cout << "=======================================================================\n";
		cout << "  1.Calculate abslouate value for any number                         **\n";
		cout << "  2.Calculate factorial for any number                               **\n";
		cout << "  3.Calculate power for any number                                   **\n";
		cout << "  4.Calculate arthimatic operation for any two numbers               **\n";
		cout << "  5.Calculate arthimatic operation for any two fraction numbers      **\n";
		cout << "  6.Calculate arthimatic operation for any two complex numbers       **\n";
		cout << "  7.Calculate two roots of quadratic equation                        **\n";
		cout << "  8.Calculate square root for any number                             **\n";
		cout << "  9.Calculate triangle functions                                     **\n";
		cout << "  10.Calculate logarithm function                                    **\n";
		cout << "  11.convert between systems                                         **\n";
		cout << "  12.Exiting from program                                            **\n";
		cout << "=======================================================================\n";

		cout << "Enter your choice \n";
		cin >> choice;
		while (choice<1 || choice>12)
		{
			cout << "Please enter your choice between (1---> 12) \n";
			cin >> choice;  
		}
		switch (choice)  //switch on choice
		{
		case 1:    //case 1 call abslouate_value
			abslouate_value();
			break;
		case 2:    //case 2 call factorial
			factorial(); 
			break;
		case 3:    //case 3 call power
			power();
			break;
		case 4:    //case 4 call arthimatic_operation
			arthimatic_operation();
			break;
		case 5:    //case 5 call fraction_operation
			fraction_operation();
			break;
		case 6:     //case 6 call complex_operation
			complex_operation();
			break;
		case 7:     //case 7 call quadratic_equation
			quadratic_equation();
			break;
		case 8:    //case 8 call square_root
			square_root();
			break;
		case 9:    //case 9 call triangle_func
			triangle_func();
			break;
		case 10:     //case 10 call log
			log();
			break;
		case 11:     //case 11 call dis_convert
			 dis_convert();
				break;
		case 12:    //case 12 call exiting_func
			exiting_func();
			break;
		default:
			cout << "Invalid operation \n";
		}
	}
}
