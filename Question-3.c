// Q.3 Triangle Angle Finder.
// Write a program to find the third angle of a right triangle when two other angles are given.

#include <stdio.h>

int main(){
    int FirstAngle, SecondAngle, ThirdAngle;

    printf("Enter the First Angle: ");
    scanf("%d",&FirstAngle);
    
    printf("Enter the Second Angle: ");
    scanf("%d", &SecondAngle);

    ThirdAngle = 180 - (FirstAngle + SecondAngle);

    printf("The Third Angle is: %d", ThirdAngle);

    return 0;
}