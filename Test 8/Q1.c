// write a program to prompt user to enter userid and password . After verifying userid and 
//password display a digit random number ID ASK TO ENTER the same.
//if user enter the same number the show him success message otherwise failed
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main() {
    char correctUserId[] = "rutuja";
    char correctPassword[] = "7822";
    char userId[50], password[50];
    int randomDigit, userDigit;

    printf("Enter User ID: ");
    scanf("%s", userId);
    printf("Enter Password: ");
    scanf("%s", password);

    
    if (strcmp(userId, correctUserId) == 0 && strcmp(password, correctPassword) == 0)
	 {
         srand(time(NULL));
        randomDigit = rand() % 10; 

        printf("Please enter the following digit to continue: %d\n", randomDigit);
        printf("Enter the digit: ");
        scanf("%d", &userDigit);

        if (userDigit == randomDigit) 
		{
            printf("Success ! \n");
        } else
		 {
            printf("Failed ! \n");
        }
    }
	 else 
	 {
        printf("Invalid User ID or Password.\n");
    }

    
}
