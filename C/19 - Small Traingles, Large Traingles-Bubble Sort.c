#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    double *area = malloc(n * sizeof(double));

    for (int i=0; i<n; i++){
        int a,b,c;
        a = tr[i].a;
        b = tr[i].b;
        c = tr[i].c;
        double p = (a+b+c)/2.0;
        double traingle_area = sqrt(p*(p-a)*(p-b)*(p-c));
        //printf("%f",traingle_area);
        //when float is passed into printf, it  will be converted to  double. So no
        area[i] = traingle_area;

    }
    bubble_sort(tr,n,area);
}

void bubble_sort(triangle *tr, int n, double *area) {
    int c, d;
    triangle temp_tr;
    double temp_area;

    for (c = 0; c < n - 1; c++) {
        for (d = 0; d < n - c - 1; d++) {
            if (area[d] > area[d + 1]) {

                /* Swapping Area*/
                temp_area = area[d];
                area[d] = area[d + 1];
                area[d + 1] = temp_area;

                /*Swapping Sides*/
                temp_tr = tr[d];
                tr[d] = tr[d + 1];
                tr[d + 1] = temp_tr;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
