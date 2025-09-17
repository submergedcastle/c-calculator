int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main () {
int a = 0; int b = 0;
int result;
printf ("Enter two numbers you would like to divide:\n");
scanf ("%d %d", &a, &b);
result = divide(a, b);
printf ("Result is %d", result);
scanf ("%d", &a); //Forces terminal to stay open to see sum, not meant for any use 
}

//Addition
int add (int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

//Subtraction
int subtract(int a, int b){
    int difference;
    difference = a - b;
    return difference;
}

//Multiplication
int multiply(int a, int b){
    int product;
    product = a*b;
    return product;
}

//Division
int divide(int a, int b){
    int quotient;
    if (b == 0) {
        printf("Cannot divide by 0.\n");
        return 0;
    }
    else quotient = a/b;
    return quotient;
}