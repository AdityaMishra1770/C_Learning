#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



// --------------------------------Storage Class----------------------



int ao = 4;
void maly(){
    extern int ao;
    printf("Extern varible ao= %d\n",ao);
    static int c = 5;
    printf("Static variable c=%d\n",c);
    c++;
    register ai =4578;
    printf("Register variable ai=%d\n",ai);
}




int main()
{
    int *ptr;
    int a ;
    scanf("%d",&a);
    ptr = (int *)malloc(a*sizeof(int));
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ptr[i]);
    }printf("\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    printf("\nMalloc passed\n");


    int *ptr_c;
    int b ;
    scanf("%d",&b);
    ptr_c = (int *)calloc(b,sizeof(int));
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&ptr_c[i]);
    }printf("\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d\n",ptr_c[i]);
    }
    
    
    printf("\nCalloc passed\n");
//  -------------------------------Realloc_____________
    printf("Enter new Size of Malloc Array: ");
    int e;
    scanf("%d",&e);
    ptr=(int*)realloc(ptr,e*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated \n");
        }
        else
        {
            for (int i = 0; i < e; i++)
        {
            scanf("%d",&ptr[i]);
        }printf("\n");
        for (int i = 0; i < e; i++)
        {
            printf("%d\n",ptr[i]);
        }
            printf("Memory successfully reallocated \n");
            }
            // ----------------------------Free ___________________
            free(ptr);
            printf("Memory freed %d & %d\n",&ptr,ptr);

// -------------------------------Storage Classes---------------------
    maly();maly();maly();maly();
    return 0;
}
