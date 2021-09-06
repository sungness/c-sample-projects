// Fig. 4.5: fig04_05.c  
// Summation with for
#include <stdio.h>

// function main begins program execution
int main( void )
{
   unsigned int sum = 0; // initialize sum
   unsigned int number; // number to be added to sum

   for ( number = 2; number <= 100; number += 2 ) {
      sum += number; // add number to sum          
   } // end for

   printf( "Sum is %u\n", sum ); // output sum
} // end function main




/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/