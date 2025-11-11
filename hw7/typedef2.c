#include <stdio.h>

typedef struct {
    	float x, y, z;
} Vector;

Vector add(Vector v1, Vector v2) {
    	Vector result;
    	result.x = v1.x + v2.x;
    	result.y = v1.y + v2.y;
    	result.z = v1.z + v2.z;
    	return result;
}

int main() {
    	Vector a = {1.0, 2.0, 3.0};
    	Vector b = {4.0, 5.0, 6.0};
    	Vector sum = add(a, b);
		
    	printf("Result Vector: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);

    	return 0;
}

