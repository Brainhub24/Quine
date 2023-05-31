/*
   Quine Test
   + + + + + + 
   This is a Quine, a program that prints its own source code
   It defines a variable s that contains a format string that references itself
   It uses the printf function to print the variable s with the quotes as arguments
   The result is the entire source code of the program

   contact: github@brainhub24.com
   
*/
char*s="char*s=%c%s%c;main(){printf(s,34,s,34);}";main(){printf(s,34,s,34);}