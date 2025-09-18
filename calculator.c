double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main () {
double a = 0; double b = 0;
double result;
int choice = 0; //Initialized to ensure the while loop starts


while ((choice<1)||(choice>4)) { //While loop defines range of acceptable integers for menu
printf("Please enter the number of the operation you would like: \n 1) Add \n 2) Subtract \n 3) Multiply \n 4) Divide \n \n");
if (scanf("%d", &choice)!=1){ //Combines choice selection with integer checks
    printf("Please enter a valid integer. \n"); //Only displays if a non-integer is input

    int check;
    while ((check = getchar()) != '\n' ){ //Removes nonsense until reads a new line (Removes user's ability to enter a character)
        continue;
    }
}

    if (choice >=1 && choice <= 4){
    break;
    } 

    else {printf("Please enter an integer between 1 and 4. \n");}
}




printf ("Enter two numbers you would like to use:\n"); //Accepts input for the two numbers
while (scanf ("%lf %lf", &a, &b) != 2) { //Combines choice selection with double checks
    printf("Please enter two valid numbers.\n");
    int check;
    while ((check = getchar()) != '\n') { //Reused strategy from first while loop
        continue;
    }

}


//Each of the choices. Functions are called, and then returned to the main program.
if (choice == 1) {
    printf ("You have selected addition. The numbers that will be used are %f and %f \n", a, b);
    result = add(a, b);
    printf ("The sum of the two numbers is: %.2f", result);
}

else if (choice ==2) {
    printf ("You have selected subtraction. The numbers that will be used are %f and %f \n", a, b);
    result = subtract(a, b);
    printf ("The difference of the two numbers is: %.2f", result);
}

else if (choice == 3) {
    printf ("You have selected multiplication. The numbers that will be used are %f and %f \n", a, b);
    result = multiply(a, b);
    printf ("The product of the two numbers is: %.2f", result);
}

else if (choice == 4) {
    printf ("You have selected division. The numbers that will be used are %f and %f \n", a, b);
    result = divide(a, b);
    printf ("The quotient of the two numbers is: %.2f", result);
}
}




//Addition
double add (double a, double b) {
    double sum;
    sum = a + b;
    return sum;
}

//Subtraction
double subtract(double a, double b){
    double difference;
    difference = a - b;
    return difference;
}

//Multiplication
double multiply(double a, double b){
    double product;
    product = a*b;
    return product;
}

//Division
double divide(double a, double b){
    double quotient;
    while (b == 0){
        printf("Cannot divide by 0. Please input another number for the denominator. \n");
        scanf("%lf", &b);
    }
    quotient = a/b;
    return quotient;
}