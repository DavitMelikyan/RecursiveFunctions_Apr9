#include <stdio.h>
int fib(int n);
int digmul(int num);
void numprint(int n);
void revprint(int n);
void bin(int number);
void printarr(int *arr, const int size, int i);
void revarr(int *arr, const int size, int i);
int digsum(int num);
void upper(char *str, const int size, int i);
int minmax(int *arr, const int size, int i, int oper, int val);

int main() {
//      task1
        int n = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Your number is %d \n", fib(n));

//      task2
        int num1 = 1234;
        printf("%d \n", digmul(num1));

//      task3
        int n2 = 10;
        numprint(n2);

//      task4
        int n3 = 12;
        revprint(n3)
//      task5
        const int size = 8;
        int arr[size] = {1,10,3,5,92,12,43,57};
        int i = 0;
        printarr(arr, size, i);
        printf("\n");

//      task6
        const int size2 = 8;
        int arr2[size2] = {5,8,94,0,30,12,76,15};
        int i2 = 0;
        revarr(arr2, size2, i2);
        printf("\n");

//      task7
        int number = 1013;
        printf("%d \n", digsum(number));


//      task8
        int N = 220;
        bin(N);
        printf("\n");


//      task9
        const int sizestr = 11;
        char str[sizestr] = "hello World";
        int i3 = 0;
        upper(str, sizestr, i3);
        printf("\n");

//      task10
        const int sizemm = 5;
        int arrmm[sizemm] = {1 , 4, 5, -1, 8};
        int mm = arrmm[0];
        int imm = 0;
        int oper = 0;
  
        return 0;
}
