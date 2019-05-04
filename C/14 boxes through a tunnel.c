#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
// In the C Programming Language, the #define directive allows the definition of
// macros within your source code. These macro definitions allow constant values
// to be declared for use throughout your code.

struct box
{
    int length, width, height;
};

//here 'box' is an alias to 'struct box'. Now 'box' is considered as a new data type
typedef struct box box;
// The typedef is an advance feature in C language which allows us to create an
// alias or new name for an existing type or user defined type

int get_volume(box b) {
    return b.length*b.height*b.width;
}

int is_lower_than_max_height(box b) {
    if (b.height >= 41){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
// In the C Programming Language, the #define directive allows the definition of
// macros within your source code. These macro definitions allow constant values
// to be declared for use throughout your code.

struct box
{
    int length, width, height;
};

//here 'box' is an alias to 'struct box'. Now 'box' is considered as a new data type
typedef struct box box;
// The typedef is an advance feature in C language which allows us to create an
// alias or new name for an existing type or user defined type

int get_volume(box b) {
    return b.length*b.height*b.width;
}

int is_lower_than_max_height(box b) {
    if (b.height >= 41){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
// In the C Programming Language, the #define directive allows the definition of
// macros within your source code. These macro definitions allow constant values
// to be declared for use throughout your code.

struct box
{
    int length, width, height;
};

//here 'box' is an alias to 'struct box'. Now 'box' is considered as a new data type
typedef struct box box;
// The typedef is an advance feature in C language which allows us to create an
// alias or new name for an existing type or user defined type

int get_volume(box b) {
    return b.length*b.height*b.width;
}

int is_lower_than_max_height(box b) {
    if (b.height >= 41){ //checks whether box height is > 41 units
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	//creates an array  with box elements in it
	box *boxes = malloc(n * sizeof(box));

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
