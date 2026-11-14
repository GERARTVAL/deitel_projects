#include <stdio.h>

int main(void)
{
int grade;
__u_int aCount = 0;
__u_int bCount = 0;
__u_int cCount = 0;
__u_int dCount = 0;
__u_int fCount = 0;

puts ("Enter the letter grades.");
puts ( "Enter the EOF character to end input.");

while ((grade = getchar ()) != EOF) 
{
    switch (grade)
    {

    case 'A':
    case 'a':
    ++aCount;
    break;
    
    case 'B':
    case 'b':
    ++bCount;
    break;

    case 'C':
    case 'c':
    ++cCount;
    break;

    case 'D':
    case 'd':
    ++dCount;
    break;
    
    case 'F':
    case 'f':
    ++fCount;
    break;
    
    case '\n':
    case '\t':
    case ' ':
    break;
    
    default:
    printf ( "%s", "Incorrect letter grade entered.");
    puts ("Enter a new grade.");
    break;
    }
}
puts ( "\nTotals for each letter grade are:");
printf ( "A: %u\n", aCount);
printf ( "B: %u\n", bCount);
printf ( "C: %u\n", cCount);
printf ( "D: %u\n", dCount);
printf ( "F: %u\n", fCount);


}