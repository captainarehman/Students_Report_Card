/*Documentation: This is a small side-quest of mine where I made a simple % marks calculator based on 5 subjects and given a Report Card Summary with the use of Multi-Dimensional Array's*/

#include <stdio.h>

void main()
{
    int i; 					//To initialize the array components
    char sub[5][50]=  //If you want to increase the subjects change the sub[num] if number of characters sub[][num]
            {
                "Maths",  //Subject Names
                "Physics",
                "Chemistry",
                "History",
                "Geography",
            };					//Subject Array
    int marks[5]; 
    float percentage=0.0;			//Percentage in float cuz WHY NOT >:)
    
    for(i=0; i<5; i++) 				//For loop to access the specific areas of the array
    {
        do					//Keeps on a loop until the while is false
        {
        printf("Enter %-9s Marks: ", sub[i]);    //Change this %-9s to according to your according
        scanf("%i", &marks[i]); 
        
        if(marks[i]>100 || marks[i]<0)		//If marks don't meet the specific criteria prints an error else
        {
            printf("Invalid Marks! Enter marks between 0 - 100\n");
        }
        else					//else.
        {
            percentage = percentage + marks[i]; //Sums up the percentage rather than making another for loop
        }
        }
        while(marks[i]>100 || marks[i]<0);
	//If marks would've been in the range like if, loop = true = infinite looping. Hence, conditions opposite 
    }
    
    percentage=(percentage/500)*100; //Amount of Subjects = Num of the 500 to change ( DO BASIC MATHS NIGGA!)
    //This was much more simpler rather than doing it with the else and just more lines of code hehe:3
            
    //I actually made this using Gemini cuz I was bored and didn't wanted to waste *Productive* time making this
    //Has formatting.:3
    printf("\n==================================\n");
    printf("        REPORT CARD SUMMARY       \n");
    printf("==================================\n");
    for(i = 0; i < 5; i++)
    {
     printf("%-20s \t= %.2f\n", sub[i], (float)marks[i]); //Basically Accesses the stored data in the array
    }
    printf("----------------------------------\n");
    printf("Total Percentage \t\t= %.2f%%\n", percentage);
    printf("==================================\n");
}

/*I could've used functions, but as for now I'm not great with them, also I made this project with the intention for beginners to learn*/
