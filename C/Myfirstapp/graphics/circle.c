#include "./circle.h"
float area(int radius){
    float area=0;
    float pi=3.14;
    area=pi*radius*radius;
    return area;
}

float circumference(int radius){
    float circumference=0;
    float pi=3.14;
    circumference=2*pi*radius;
    return circumference;
}