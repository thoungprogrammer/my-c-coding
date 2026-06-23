#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// SOLVING CHALLENGE 5 BUT VERSION 2

int main(void){

	int seconds;
	int minutes;
	int hours;
	int remainSeconds;
	printf("==== SECON CONVERT TO TIME FORMAT PROGRAM VERSION 2 ====\n");
	printf("Enter the second: \n>");
	scanf("%i", &seconds);
	hours = seconds / 3600;
	minutes = ( second % 3600 ) / 60;
	remainSeconds = ((seconds % 3600) % 60);

	printf("The %i minutes is ", seconds);
	if ( hours < 10 ) {
	
		printf("0%i:", hours );
	
	else {
		printf("%i", hours ) ;
	}

	if ( minutes< 10 ) {
	
		printf("0%i:", minutes);
	}
	else {
		printf("%i", seconds ) ;
	}
	
	if ( hours < 10 ) {
	
		printf("0%i:", seconds);
	}
	else {
		printf("%i", seconds ) ;
	}
	return 0;

}
