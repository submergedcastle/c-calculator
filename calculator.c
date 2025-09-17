int add(int a, int b);
int subtract(int a, int b);

int main () {
int a = 0; int b = 0;
printf ("Enter two numbers you would like to subtract:\n");
scanf ("%d %d", &a, &b);
add(a, b);
int result;
result = subtract(a, b);
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