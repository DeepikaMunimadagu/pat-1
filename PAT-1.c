#include <stdio.h>
#include<conio.h>
int main() {
  int n, i, flag = 0;
  printf("Enter a number : ");
  scanf("%d", &n);

  //to check if the number is prime or not

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

    // to check if the number is armstrong number or not

    int originalNum, remainder, result = 0;
    originalNum = n;
    while (originalNum != 0) { 
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }

    if (result == n)
        printf("\n%d is an Armstrong number.", n);
    else
        printf("\n%d is not an Armstrong number.", n);
    
    // to check if the number is perfect number or not

    int l = 1, Sum = 0, j = 1; 
    while(j < n){
        if(n % i == 0)  
            Sum = Sum + j;  
            j++;  
    }  
    if(Sum == n){  
        printf("\n%d is Perfect Number", n);
    }  
    else{ 
        printf("\n%d is not a Perfect Number", n);  
    }
    return 0; 
} 

