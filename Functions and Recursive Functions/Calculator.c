#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return a / b;
}

int main() {
    float m, n, result;
    char o;

    printf("Enter m: ");
    scanf("%f", &m);
    printf("Enter n: ");
    scanf("%f", &n);
    printf("Operator (+, -, *, /): ");
    scanf(" %c", &o);  

    if (o == '+')
        result = add(m, n);
    else if (o == '-')
        result = subtract(m, n);
    else if (o == '*')
        result = multiply(m, n);
    else if (o == '/')
        result = divide(m, n);
    else {
        printf("INVALID OPERATOR\n");
        return 0;
    }

    printf("Result = %f\n", result);
    return 0;
}

