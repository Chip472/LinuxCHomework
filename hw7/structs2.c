#include <stdio.h>
#include <math.h>

struct Point {
    	float x, y;
};

float distance(struct Point a, struct Point b) {
    	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

int main() {
    	struct Point p1, p2;

    	printf("Enter x y for point 1: ");
    	scanf("%f %f", &p1.x, &p1.y);

    	printf("Enter x y for point 2: ");
    	scanf("%f %f", &p2.x, &p2.y);

    	printf("Distance: %.2f\n", distance(p1, p2));
    	return 0;
}

