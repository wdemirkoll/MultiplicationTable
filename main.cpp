#include <iostream>

int main(){
    // Loop variables for rows and columns of the multiplication table
    int i,j;

     // Outer loop represents the first number (1 to 10)
     for(i = 1; i <= 10; i++){
        // Inner loop represents the second number (1 to 10)
        for(j = 1; j <= 10; j++){
             // Print multiplication result in table format
             std::cout << i << " x " << j << " = " << i * j << std::endl;
        }
    }

  return 0;
}
