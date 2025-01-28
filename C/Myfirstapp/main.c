#include <stdio.h>
#include "./compute/compute.h"
#include "./graphics/circle.h"

int main(){
    int data1 = addition(2 , 5);
    int data2 = subtraction(5 , 3);
    int data3 = multiplication(2 , 5);
    int data4 = division(2 , 5);

    printf("addition is : %d \n", data1);
    printf("subtraction is : %d \n", data2);
    printf("multilication is : %d \n", data3);
    printf("division is : %d \n", data4);

    float area1 = area(6);
    float circumference1 = circumference(4);

    printf("area is : %f \n",area1);
    printf("circumference is : %f \n",circumference1);

    return 0;

}