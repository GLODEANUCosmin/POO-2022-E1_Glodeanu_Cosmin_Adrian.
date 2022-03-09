#include "Math.h"
#include <cstdarg>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
static int Add(int a, int b)
{
	return a + b;
}
static int Add(int a, int b, int c)
{
	return a + b + c;
}
static int Add(double a, double b)
{
	return (int)(a + b);
}
static int Add(double a, double b, double c)
{
	return (int)(a + b + c);
}
static int Mul(int a, int s)
{
	return a * s;
}
static int Mul(int a, int s, int d)
{
	return a * s * d;
}
static int Mul(double a, double s)
{
	return (int)(a * s);
}
static int Mul(double a, double s, double d)
{
	return (int)(a * s * d);
}
static int Add(int count, ...)
{
	int tmp, s = 0;
	va_list v;
	va_start(v, count);
	for (int i = 0; i < count; i++)
	{
		tmp = va_arg(v, int);
		s += tmp;
	}
	va_end(v);
	return s;
}
static char* Add(const char* a, const char* b)
{
	int n1 = 0, n2=0;
	char x[30], fin[30];
	strcpy(x, a);
	while (x[0] != '\0')
	{
		n1 = n1 * 10 + (x[0] - '0');
		strcpy(x, x + 1);
	}
	strcpy(x, b);
	while (x[0] != '\0')
	{
		n2 = n2 * 10 + (x[0] - '0');
		strcpy(x, x + 1);
	}
	n1 += n2;
	while (n1 != 0)
	{
		int p = n1 % 10 + '0';
		n1 /= 10;
		char s = 'p';
		strcat(s, fin);
		strcpy(fin, s);
	}
	return fin;
}