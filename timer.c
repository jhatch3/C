/* 
straightforward timer application 
  things learned/improved on:
      for loops 
      getting comfortable with syntax and printf formats
      clearing console (different for Linux and Windows)
      sleep(1) to sim clock 
      #include <> are libaries?
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main ()
{
  int hr = 00;
  int min = 00;
  int sec = 00;
  char sign = '-';

  while (1 < 2)
	{
	  // print and formating of the clock %02d for 00:00:00 
	  // formating instead of 0:0:0 
	  printf ("------------------\n");
	  printf ("| JUSTIN'S ClOCK |\n");
	  printf ("|    %02d:", hr);
	  printf ("%02d:", min);
	  printf ("%02d    |\n", sec);
	  printf ("------------------   ");

	
	// timer   
	sec = sec + 1;
	if (sec == 60)
	{
	
		min = min + 1;
		sec = 00;
	}
	
	if (min == 60)
	{
		hr = hr + 1;
		min = 00;
		sec = 00;
	}
	
	if (hr == 24)
	{
		hr = 00;
		min = 00;
		sec = 00;
	}


		
	// clock 
	if ((sec % 5) == 0)
	{
		sign = '/';
	}
	
	if ((sec % 5) == 1)
	{
		sign = '-';
	}
	if ((sec % 5) == 2)
		{
		sign = '\\';
	}
	if ((sec % 5) == 3)
	{
		sign = '-';
	}
	if ((sec % 5) == 4)
	{
		sign = '|';
	}
	
 
	// stops for 1 second and clears conole screen
	printf ("\n   %c \n", sign);
	sleep (1);
	system ("clear");

	}
}
