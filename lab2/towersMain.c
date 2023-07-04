#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    

	if (argc == 1){ // If no arugment is given during user input then the algorithm just solves for the default tower: towers (3,1,2)
		n = 3;
		from = 1;
		dest = 2;
	}

	else if (argc == 2){ // If 1 argument is given this is the number for number of disk therefore the format will be (n, 1, 2)
		n = atoi(argv[1]); // converts the string input into an integer so the algorithm can ulitize it. 
		from = 1;
		dest = 2; 
	}

	else if (argc == 4){ // If 3 argument is given then the first number will be the number of disk (n) the second number will be the starting pillar 								(from) and the last number will be the ending pillar (dest).
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
	
		
		if (from == dest){ // Error message for if tower ID is the same which cannont happen
			fprintf(stderr, "Please enter two different tower IDs.");
			exit(0);
		}
		
		else if (from > 3 || from < 1){ // Error message: Tower ID (from) must range from 1 to 3
			fprintf(stderr, "Tower IDs must range from 1 to 3, Please enter a correct tower ID.");
			exit(0);
		}
		
		else if (dest > 3 || dest < 1){ // Error message: Tower ID (dest) must range from 1 to 3
			fprintf(stderr, "Tower IDS must range from 1 to 3, Please enter a correct tower ID.");
			exit(0);
		}
	
		else if (n < 0){ // Disk number must be a positive integer.
			fprintf(stderr, "Disk number must be a positive number, Please enter a correct disk number.");
			exit(0);
		}
	}
	towers(n, from, dest);
	exit(0);
}







		










