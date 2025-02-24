// C Program to Check if binary representation of a number is palindrome 
# include <stdio.h>
# include<math.h> 

// Function to check if binary representation is a palindrome
int checker(int x) {
    int n = ((log(x))/(log(2)) + 1); // Find number of bits
    int l = 0, r = n - 1;

    while (l < r) {
        // Compare bits at positions l and r
        if (((x >> l) & 1) != ((x >> r) & 1)) {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);
    int gate=checker(n);
    if(gate==1){printf("Palindrome\n");}
    else{printf("Not Palindrome");}
    return 0;
}