// #include <stdio.h>
//  void  swap (int *n, int *n1)
//  {
//     int tmp;
//     tmp=*n;
//     *n=*n1;
//     *n1=tmp;
//  }

//  int main()
//  {
//     int a=10;
//     int b=20;
//     printf("Before swapping: a=%d, b=%d\n",a,b);
//     swap(&a,&b);
//     printf("After swapping: a=%d, b=%d\n",a,b);
//     return 0;
// //


// #include <stdio.h>
// #include<time.h>
// #include <stdlib.h>


// #define SIZE_ARRAY 50
//     typedef struct s_fat_boy
//     {
//         char v[SIZE_ARRAY];
//     }           t_fat_boy;


//     void find_42(t_fat_boy *fat_boy)
//     {
//         for (int i = 0; i < SIZE_ARRAY; i++)
//         {
//             if (fat_boy->v[i] == 42)
//             {
//                 printf("Found 42 at index %d\n", i);
//                 return;
//             }
//         }
//         printf("42 not found\n");
//     }

#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void updateStruct(struct Person *p, int age){
    p->age = age;
}

int main (int argc, char **argv){
    struct Person lowlevellearning;
    updateStruct(&lowlevellearning, 25);
}
