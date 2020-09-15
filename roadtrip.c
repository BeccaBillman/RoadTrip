/* Becca Billman, Road Trip Assignment,COP 3223C, CR02, 06/02/2018*/

//Pre-processor directives
#include<stdio.h>

//Main Function
int main()
{
    
//variable declarations
int length, rest; //for length of road trip and for resting time
float avgspeed, total_time, actual; //for average speed, total time to find the acutal average, and acutal average speed

//Prompt user to enter the length of their trip in miles 
printf("Enter the length of the road trip in miles: ");
scanf("%d", &length); 

//Prompt user to enter their average speed in mph
printf("Enter the average driving speed during the road trip in miles per hour (mph): ");
scanf("%f", &avgspeed); 

//Prompt user to enter amount of rest they recieved in mintues
printf("Enter the number of rest mintues during the trip : ");
scanf("%d", &rest); 

//Find the acutal average 
total_time = (float)(rest)/(float)(60) + ((float)(length)/avgspeed);
actual= length/total_time;

//Print the users acutal average 
printf("The actual average speed of your roadtrip was %.2f",actual);

//end main
return 0;

}
