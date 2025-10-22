#include <stdio.h>
int num1, num2;
void add(){
    num1= 10;
    num2= num1 * 2;
}
int main(){
    int num2= 5;
    add();
    printf("%d %d", num1, num2);
    return 0;
}