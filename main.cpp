#include <iostream>
#include "Circle.h"
#include "menu.h"

using namespace std;

int main() {
    Circle o1, o2;
    o1.setName("o1");
    o2.setName("o2");
    o2.setRadius(50);
    o1.setRadius(10);
    int option = 0;
    do{
        menu();
        scanf("%d", &option);
        switch (option){

            case 0:
                break;
            case 1 :
                o1.show();
                o2.show();
                break;
            case 2:{
                double circumference1 = o1.getRadius()*2*3.14;
                double circumference2 = o2.getRadius()*2*3.14;
                printf("circumference1: %f \n", circumference1);
                printf("circumference1: %f \n", circumference2);
                break;
            }

            default:
                printf("Choose a correct option \n");

        }
    }while (option != 0);
    printf("The End\n");

    return 0;
}