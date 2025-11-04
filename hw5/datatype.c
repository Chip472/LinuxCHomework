#include <stdio.h>

int main() {
	int a = 0;
	float b = 2.3f;
	double c = 4.55555;
	char character = 'c';
	printf("%x, %f, %lf, %c\n", a, b, c, character);

	char a1 = 'a', b1 = 'b', c1 = 'c', x = 'x', y = 'y', z = 'z';
	char A = 'A', B = 'B', C = 'C', X = 'X', Y = 'Y', Z = 'Z';
	printf("%c %c %c %c %c %c %c %c %c %c %c %c\n",
           a1, b1, c1, x, y, z, A, B, C, X, Y, Z);

	char a2 = 97, b2 = 98, c2 = 99, x2 = 120, y2 = 121, z2 = 122;
	char A2 = 65, B2 = 66, C2 = 67, X2 = 88, Y2 = 89, Z2 = 90;
	printf("ASCII values: %c %c %c %c %c %c %c %c %c %c %c %c\n", 
			a2, b2, c2, x2, y2, z2, A2, B2, C2, X2, Y2, Z2);

	float sci_f = 3.45e2f;
	double sci_d = 6.789e-3;
	printf("Scientific float: %e\n", sci_f);
	printf("Scientific double: %e\n", sci_d);

	float fnum = 7.8329811f;
	printf("%.1f, %.2f, %.4f, %.6f\n", fnum, fnum, fnum, fnum);

	printf("Size of int: %zu bytes; float: %zu bytes; double: %zu bytes; char: %zu bytes\n", 
			sizeof(int), sizeof(float), sizeof(double), sizeof(char));

	int num1 = 7, num2 = 3; 
	float result = (float)num1 / num2;
	printf("7 / 3 = %.3f\n", result); 
	printf("Percentage: %.2f%%\n", result * 100);
		
	long lnum = 123456789L;
	long long llnum = 109283090198LL; 
	long double ldnum = 2.79797944224696902011235L; 
	printf("Long: %ld\n", lnum);
	printf("Long long: %lld\n", llnum);
	printf("Long double: %Lf\n", ldnum);

	return 0;
}
