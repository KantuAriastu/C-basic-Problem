//HEADER LIBRARY problem1lib.h
//IMPLEMENTASI METODE INTEGRAL RIEMAN
//BERISI JUGA FUNGSI YANG AKAN DICARI INTEGRALNYA


#include <math.h>

double f1(double x)
{
	double ans = pow((x-1), 2);
	return ans;
}

double f2(double x)
{
	double ans = 1./x;
	return ans;
}

double f3(double x)
{
	double ans = pow(2, x);
	return ans;
}

double lRect(int a, int b, int n, int func)
{
	double dx;
	int i;
	double ans;

	dx = (double)(b - a)/n;
	ans = 0;
	for(i=0; i<n; i++)
		switch(func)
		{
			case 1 :
				ans += f1(a + i*dx);
				break;
			case 2 :
				ans += f2(a + i*dx);
				break;
			case 3 :
				ans += f3(a + i*dx);
				break;
		}
	ans = ans * dx;
	return ans;
}

//Metode pedekatan Right Rectangle
double rRect(int a, int b, int n, int func)
{
	double dx;
	int i;
	double ans;

	dx = (double)(b - a)/n;
	ans = 0;
	for(i=1; i<=n; i++)
		switch(func)
		{
			case 1 :
				if(i == n)
					ans += f1(b);
				else
					ans += f1(a + i*dx);
				break;
			case 2 :
				if(i == n)
					ans += f2(b);
				else
					ans += f2(a + i*dx);
				break;
			case 3 :
				if(i == n)
					ans += f3(b);
				else
					ans += f3(a + i*dx);
				break;
		}
	ans = ans * dx;
	return ans;
}

//Metode pedekatan Middle Rectangle
double mRect(int a, int b, int n, int func)
{
	double dx;
	int i;
	double ans;

	dx = (double)(b - a)/n;
	ans = 0;
	for(i=0; i<n; i++)
		switch(func)
		{
			case 1 :
				ans += f1((a + i*dx)+(a + i*dx + 1)) / 2.;
				break;
			case 2 :
				ans += f2((a + i*dx)+(a + i*dx + 1)) / 2.;
				break;
			case 3 :
				ans += f3((a + i*dx)+(a + i*dx + 1)) / 2.;
				break;
		}
	ans = ans * dx;
	return ans;
}

//Metode pedekatan Trapezoidal Rule
double tRule(int a, int b, int n, int func)
{
	double dx;
	int i;
	double ans;

	dx = (double)(b - a)/n;
	ans = 0;
	for(i=0; i<=n; i++)
		switch(func)
		{
			case 1 :
				if (i == 0)
					ans += f1((double)a);
				else if (i == n)
					ans += f1((double)b);
				else
					ans += 2 * f1(a + i*dx);
				break;
			case 2 :
				if (i == 0)
					ans += f2((double)a);
				else if (i == n)
					ans += f2((double)b);
				else
					ans += 2 * f2(a + i*dx);
				break;
			case 3 :
				if (i == 0)
					ans += f3((double)a);
				else if (i == n)
					ans += f3((double)b);
				else
					ans += 2 * f3(a + i*dx);
				break;
		}
	ans = ans * dx/2.;
	return(ans);
}

//Metode pedekatan Simpson's Rule
double sRule(int a, int b, int n, int func)
{
	double dx;
	int i;
	double ans;

	dx = (double)(b - a)/n;
	ans = 0;
	for(i=0; i<=n; i++)
		switch(func)
		{
			case 1 :
				if (i == 0)
					ans += f1((double)a);
				else if (i == n)
					ans += f1((double)b);
				else
				{
					if (i % 2 == 1)
						ans += 4 * f1(a + i*dx);
					else
						ans += 2 * f1(a + i*dx);
				}
				break;
			case 2 :
				if (i == 0)
					ans += f2((double)a);
				else if (i == n)
					ans += f2((double)b);
				else
				{
					if (i % 2 == 1)
						ans += 4 * f2(a + i*dx);
					else
						ans += 2 * f2(a + i*dx);
				}
				break;
			case 3 :
				if (i == 0)
					ans += f3((double)a);
				else if (i == n)
					ans += f3((double)b);
				else
				{
					if (i % 2 == 1)
						ans += 4 * f3(a + i*dx);
					else
						ans += 2 * f3(a + i*dx);
				}
				break;
		}
	ans = ans * dx/3.;
	return(ans);
}
