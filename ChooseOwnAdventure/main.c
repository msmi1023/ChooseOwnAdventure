//
//  main.c
//  ChooseOwnAdventure
//
//  Created by tstone10 on 5/20/16.
//  Copyright © 2016 DetroitLabs. All rights reserved.
//

#include <stdio.h>

char readInput() {
	char ch;
	
	ch = getchar();
	while('\n' != getchar());
	
	return ch;
}

void returnToBar(){
    int controlFlag = 0;
    
    do {
        printf("Cool. You are heading to HopCat for some Crack Fries and beer. Let's start with a beer.\n");
        printf("What beer would you like: \n");
        printf("1. Your old standby, Crooked Tree? or \n");
        printf("2. A different Michigan beer? \n");
        printf("Please enter your choice: ");
        char enteredChoice = readInput();
        
        if(enteredChoice == '1') {
            controlFlag = 1;
        }
        else if (enteredChoice == '2') {
            controlFlag = 1;
        }
        else {
            printf("Invalid choice, please reconsider:\n");
        }
        
        
    } while (!controlFlag);
    
}



void barTwoHearted(){
    int controlFlag = 0;
    
    do {
        printf("Good Choice!.\n");
        printf("Do you want to: \n");
        printf("1. Stick with this for the night? or \n");
        printf("2. Choose a different beer? \n");
        printf("Please enter your choice: ");
        char enteredChoice = readInput();
        
        if(enteredChoice == '1') {
            controlFlag = 1;
        }
        else if (enteredChoice == '2') {
            controlFlag = 1;
            returnToBar();
        }
        else {
            printf("Invalid choice, please reconsider:\n");
        }
        
        
    } while (!controlFlag);
    
}

// Bar Start Point
void bar(){
	int controlFlag = 0;
	
	do {
		printf("Cool. You are heading to HopCat for some Crack Fries and beer. Let's start with a beer.\n");
		printf("What beer would you like: \n");
		printf("1. Your old standby, Two Hearted? or \n");
		printf("2. A different Michigan beer? \n");
		printf("Please enter your choice: ");
		char enteredChoice = readInput();
		
		if(enteredChoice == '1') {
			controlFlag = 1;
                barTwoHearted();
		}
		else if (enteredChoice == '2') {
			controlFlag = 1;
		}
		else {
			printf("Invalid choice, please reconsider:\n");
		}
		
		
	} while (!controlFlag);
	
}
// Hooligan Start Point
void hooligan(){
	int controlFlag = 0;
	
	do {
		printf("Cool. You are going to the Fowling Warehouse.\n");
		printf("Do you want to: \n");
		printf("1. Head to the Bar? or \n");
		printf("2. Hit the lanes? \n");
		printf("Please enter your choice: ");
		char enteredChoice = readInput();
		
		if(enteredChoice == '1') {
			controlFlag = 1;
		}
		else if (enteredChoice == '2') {
			controlFlag = 1;
		}
		else {
			printf("Invalid choice, please reconsider:\n");
		}
		
		
	} while (!controlFlag);
	
}

void welcome() {
	int controlFlag = 0;
	
	do {
		printf("Nice! You just finished your first week of iOS Apprenticeship.\n");
		printf("Do you want to: \n");
		printf("1. Embrace your inner hooligan? or \n");
		printf("2. Celebrate by going to happy hour? \n");
		printf("Please enter your choice: ");
		char enteredChoice = readInput();
		
		if(enteredChoice == '1') {
			controlFlag = 1;
				hooligan();
		}
		else if (enteredChoice == '2') {
			controlFlag = 1;
            bar();
		}
		else {
			printf("Invalid choice, please reconsider:\n");
		}

		
		
//		char choice = ' ';
//		scanf("\n%c", &choice);
//		
//		if(choice == '1') {
//			controlFlag = 1;
//		}
//		else if (choice == '2') {
//			controlFlag = 1;
//		}
//		else {
//			printf("Invalid choice, please reconsider:\n");
//		}
		
	} while (!controlFlag);

}



int main(int argc, const char * argv[]) {
	
//	printf("Welcome adventurer! You wake up in the middle of a desert.\n");
//	
//	int controlFlag = 0;
//	
//	do {
//		printf("You think you see 2 things in the distance...\n");
//		printf("1. Is that a red building?\n");
//		printf("2. Is that some water?\n");
//		printf("Enter the number of the one you want to head toward: ");
//		
//		char choice = ' ';
//		scanf("\n%c", &choice);
//		
//		if(choice == '1') {
//			controlFlag = 1;
//		}
//		else if (choice == '2') {
//			controlFlag = 1;
//		}
//		else {
//			printf("Invalid choice, please reconsider:\n");
//		}
//
//	} while (!controlFlag);

	welcome();
	
    return 0;
}
