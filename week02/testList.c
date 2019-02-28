// testList.c - testing DLList data type
// Written by John Shepherd, March 2013

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "DLList.h"

int main (int argc, char *argv[])
{	
	int testCase = atoi(argv[1]);
	printf("write list, 3 lines long: \n");
	DLList myList = getDLList (stdin);
	printf("Original list:\n");
	putDLList (stdout, myList);
	printf("Original List Size: ");
	printf("%zu\n", DLListLength (myList));
	printf("Original current line: ");
	printf("%s\n",DLListCurrent (myList));
	switch(testCase) {
		//DLListBefore
		case 1:
			//edge case: before start
			
			DLListBefore (myList, "Start Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));

			printf("\n");

			//edge case: middle
			DLListMoveTo (myList, 3);
			DLListBefore (myList, "Middle Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));

			printf("\n");

			//edge case: end
			DLListMoveTo (myList, 5);
			DLListBefore (myList, "End Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			
			printf("Deleting 6 lines, to make empty list.....\n");
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);

			//edge case: empty
			DLListBefore (myList, "Empty Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			
			DLListBefore (myList, "1 Node Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			assert (validDLList (myList));
			break;
		case 2:
			//edge case: after start
			
			DLListAfter (myList, "Start Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));

			printf("\n");

			//edge case: middle
			DLListMoveTo (myList, 3);
			DLListAfter (myList, "Middle Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));

			printf("\n");

			//edge case: end
			DLListMoveTo (myList, 5);
			DLListAfter (myList, "End Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			
			printf("Deleting 6 lines, to make empty list.....\n");
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);
			DLListDelete (myList);

			//edge case: empty
			DLListAfter (myList, "Empty Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			
			DLListAfter (myList, "1 Node Case");
			printf("Current List: \n");
			putDLList (stdout, myList);
			printf("Current List Size: ");
		    printf("%zu\n", DLListLength (myList));
			printf("New current line: ");
			printf("%s\n",DLListCurrent (myList));
			assert (validDLList (myList));
			break;
	}
	
	assert (validDLList (myList));
	


	freeDLList (myList);
	return EXIT_SUCCESS;
}
