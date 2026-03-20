#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a<(b+c) && b<(a+c) && c<(a+b)) {
        if (a==b && b==c) {
            printf("The triangle is equilateral.\n");
        }else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b)) {
            printf("The triangle is right-angled.\n");
        } else if (a==b || a==c || b==c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
        
    } else {
        printf("The numbers cannot form a triangle.\n");
    }
    return 0;
}