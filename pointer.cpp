/*Compile and run pointers.cpp. A segmentation fault will be observed.
Use gdb to step through the program as it runs, and locate line of the program that causes this error and fix the bug.*/

// Segmentation Error Demonstration
// Author - Rohan Prasad
#include <iostream>
using namespace std;

int main()
{
	int* p = NULL;

	// This lines cause the segmentation
	// error because of accessing the
	// unknown memory location.
	*p = 1;

	cout << *p;
	return 0;
}

/*output:-
(gdb) r
Starting program: /home/logarithm/Desktop/Test Case/Miccl/a.out

Program received signal SIGSEGV, Segmentation fault.
0x00005555555547de in main () at Sege.cpp:8
8 *p=1;
(gdb)

————————————————————————————
Now you have got the line that causes segmentation error.
Exit from debugger and correct the program.
For exiting type quit and press enter.
———————————————————————————–

(gdb) quit
A debugging session is active.

Inferior 1 [process 3617] will be killed.

Quit anyway? (y or n) y

*/
