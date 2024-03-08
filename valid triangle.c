//modular c program to print valid triangle
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/#include <stdio.h>

void isTriangleValid(int angle1, int angle2, int angle3, int *valid) {
    int sum = angle1 + angle2 + angle3;
    if (sum == 180) {
        *valid = 1;
    } else {
        *valid = 0;
    }
}

int main() {
    int angle1, angle2, angle3, valid;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    isTriangleValid(angle1, angle2, angle3, &valid);
    if (valid) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }
    return 0;
}
