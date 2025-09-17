int add(int a, int b);

int main () {
int a = 0; int b = 0;
printf ("Enter two numbers you would like to add:\n");
scanf ("%d %d", &a, &b);
add(a, b);
int sum;
sum = add(a, b);
printf ("Sum is %d", sum);
scanf ("%d", &a); //Forces terminal to stay open to see sum, not meant for any use 
}

//Addition
int add (int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}
