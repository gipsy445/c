#include <stdio.h>
#include <math.h>

long decimalToBinary(int n){
  long B_Number = 0;
   int cnt = 0;
   while (N != 0) {
       int rem = N % 2;
       ull c = pow(10, cnt);
       B_Number += rem * c;
       N /= 2;

       // Count used to store exponent value
       cnt++;
   }
   return B_Number;
}

int main() {
    int number;
    printf("Enter your decimal number: ");
    scanf("%d" ,&number);
    long binary = decimalToBinary(number);
    printf("The number in binary for is: %ld \n" ,binary);
    return 0;
}
