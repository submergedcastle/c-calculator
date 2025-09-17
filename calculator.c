int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main () {
int a = 0; int b = 0;
int result;
int choice = 0; //Initialized to ensure while loop happens

while ((choice<1)||(choice>4)) {
printf("Please enter the number of the operation you would like: \n 1) Add \n 2) Subtract \n 3) Multiply \n 4) Divide \n");
scanf ("%d", &choice);
}

printf ("Enter two integers you would like to use:\n");
scanf ("%d %d", &a, &b);

//Each of the choices. Functions are called, and then returned to the main program.
if (choice == 1) {
    printf ("You have selected addition. The integers that will be used are %d and %d \n", a, b);
    result = add(a, b);
    printf ("The sum of the two integers is: %d", result);
}

else if (choice ==2) {
    printf ("You have selected subtraction. The integers that will be used are %d and %d \n", a, b);
    result = subtract(a, b);
    printf ("The difference of the two integers is: %d", result);
}

else if (choice == 3) {
    printf ("You have selected multiplication. The integers that will be used are %d and %d \n", a, b);
    result = multiply(a, b);
    printf ("The product of the two integers is: %d", result);
}

else if (choice == 4) {
    printf ("You have selected division. The integers that will be used are %d and %d \n", a, b);
    result = divide(a, b);
    printf ("The quotient of the two integers is: %d", result);
}

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
    while (b == 0){
        printf("Cannot divide by 0. Please input another integer for the denominator. \n");
        scanf("%d", &b);
    }
    quotient = a/b;
    return quotient;
}