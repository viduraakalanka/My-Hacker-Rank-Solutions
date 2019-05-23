#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;
#include  <string.h>
int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    total_number_of_books=(int*)malloc(sizeof(int)*total_number_of_shelves);
    
    total_number_of_pages=(int**)malloc(sizeof(int*)*total_number_of_shelves);
    
    for(int i=0; i<total_number_of_shelves; i++){
        total_number_of_books[i]=0;
        total_number_of_pages[i]=(int*)malloc(sizeof(int)*1100);
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            
            total_number_of_books[x] = total_number_of_books[x]+1;
            total_number_of_pages[x] =realloc(total_number_of_pages[x],total_number_of_books[x] *sizeof(int));
            total_number_of_pages[x][total_number_of_books[x]-1] = y;
            // alternative approach
            //*(total_number_of_books+x)+=1;
            //*(total_number_of_pages+x)=realloc(*(total_number_of_pages+x),
            //*(total_number_of_books+x)*sizeof(int));
            //*(*(total_number_of_pages+x)+*(total_number_of_books+x)-1)=y;

        } else if (type_of_query == 2) {
