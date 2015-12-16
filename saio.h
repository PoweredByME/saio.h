// This code is Powered By M.E.

// The code is written by Saad Ahmad.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
/*
float m_in(float array1[][100],int row1,int column1)
void m_out(const float array2[][100],int row2, int column2)
float m_determinant(float array[][100], int n)
float madd(float answerofsum[][100],float array3[][100],int row3,int column3,float array4[][100],int row4,int column4)
float m_subtract(float answerofsubtraction[][100],float array3[][100],int row3,int column3,float array4[][100],int row4,int column4)
int promptrow()
int promptcolumn()

*/
float m_in(float array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print
	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%f", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}
int m_in(int array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%d", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}
double m_in(double array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print
	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%lf", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}
short m_in(short array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print
	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%hu", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}
unsigned m_in(unsigned array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print
	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%u", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}
long m_in(long array1[][100], int row1, int column1)                            //function for the matrix input
{
	int counter, counter1;             //defining variables
	printf("\n");                                          //print
	for (counter = 0; counter<row1; counter++) {                        //For loop to select the row input
		for (counter1 = 0; counter1<column1; counter1++) {                //for loop to select the column input 
			printf("Enter the element, a[%d][%d] = ", counter + 1, counter1 + 1);                    //prompt 
			scanf_s("%ld", &array1[counter][counter1]);                                         //input for matrix
		}                                                                 //end for loop for the column select 
	}                                                                      //end for loop for the row select
	printf("\n");                                                                    //print
	return (array1[100][100]);                                                //return array of the matrix to the main
}

//_______________________________________________________________________________________________________________________________________________________//
void m_out(const float array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4.1f   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const int array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4d   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const unsigned array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4u   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const double array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4lf   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const long array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4ld   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const short array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4hu   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
void m_out(const char array2[][100], int row2, int column2) {
	int counter, counter1;
	for (counter = 0; counter<row2; counter++) {
		printf("\t");
		for (counter1 = 0; counter1<column2; counter1++) {
			printf("%4c   ", array2[counter][counter1]);
		}
		printf("\n");
	}
}
//_____________________________________________________________________________________________________________________________________________________//
float m_determinant(float array[][100], int n) {                                                           //function for the determinant
	float newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}                                                       //end function
float m_determinant(int array[][100], int n) {                                                           //function for the determinant
	int newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}
float m_determinant(long array[][100], int n) {                                                           //function for the determinant
	long newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}
float m_determinant(short array[][100], int n) {                                                           //function for the determinant
	short newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}
float m_determinant(double array[][100], int n) {                                                           //function for the determinant
	double newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}
float m_determinant(unsigned array[][100], int n) {                                                           //function for the determinant
	unsigned newmatrix[100][100];                                                                     //defing array for a newmatrix
	float store[100];                                                                               //defing array for the stroe, string values
	int newsize, ncolumn, row, column, newrow, newcolumn, sign, counter, counter1;                //defing variables
	float determinant;                                                                           //defining variables

	newsize = n - 1;                                                                                   //newsize of the prcessed matrix

	if (n == 1) {                                                                            //if case for one element matrix
		determinant = 0;                                                                     //initiallization 
		determinant = array[0][0];                                                          //determinant is equal to that single values in the matrix
		return (determinant);                                                            //return determinant to the main function
	}

	else if (n == 2) {                                                                        //else if case for 2X2 matric
		determinant = 0;                                                                    //initiallization 
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];           //formula to determine the determinant ((a(0,0)Xa(1,1))-(a(0,1)Xa(1,0)) 
		return (determinant);                                                        //return the determinant
	}

	else {                                                                              //else case for other bigger matrices 
		for (ncolumn = 0; ncolumn<n; ncolumn++) {                //for loop to select the column which is to be neglected.
			newrow = 0;                                     //initiallize for the new row for the new matrix
			newcolumn = 0;                                 //initiallize for the new column for the new matrix
			for (row = 0; row<n; row++) {                        //for loop to select the row of the given matrix
				for (column = 0; column<n; column++) {             //for loop to solect the column of the given matrix
					if (row != 0) {                                   //if case to negect the row is the first one.
						if (column != ncolumn)            //if case to neglect the column which is equal to the one selected by the negelct column for loop
						{                                                         //if both cases are satisfied
							newmatrix[newrow][newcolumn] = array[row][column];      //making new matrix out of the matrix being processed   
							newcolumn++;                                          //new column increment
							if (newcolumn == newsize) {                //if case for whether to size of newmatrix is equal to the newsize  
								newrow++;                                    //increment new row
								newcolumn = 0;                              //reinitiallize the new column
							}
							else;
						}
						else;
					}
					else;
				}                                   //end for loop for column selection
			}                                       //end for loop for row selection 
			sign = -1;                                         //initiiallize sign = -1
			for (counter = 0; counter <= ncolumn; counter++) {           //for loop for sign 
				sign *= -1;                                       //sign processing
			}                                                  //end for loop for sign
			store[ncolumn] = sign*m_determinant(newmatrix, newsize);             //storing the process value in a stroe array and recurcive functioning

		}                                                 // end for loop for neglect column
		determinant = 0;                                             //initiallization of determinant

		for (counter1 = 0; counter1<n; counter1++) {                  //for loop to sum up the store and determinant values                
			determinant += (array[0][counter1] * store[counter1]);               //formula
		}                                                               //end for loop for suming up th determinant the value 

		return (determinant);                                       //retrun determinant calculated
	}                                                           //end else case
}

//_____________________________________________________________________________________________________________________________________________-_______//
float m_add(float answerofsum[][100], float array3[][100], int row3, int column3, float array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
int m_add(int answerofsum[][100], int array3[][100], int row3, int column3, int array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
double m_add(double answerofsum[][100], double array3[][100], int row3, int column3, double array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
long m_add(long answerofsum[][100], long array3[][100], int row3, int column3, long array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
short m_add(short answerofsum[][100], short array3[][100], int row3, int column3, short array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
unsigned m_add(unsigned answerofsum[][100], unsigned array3[][100], int row3, int column3, unsigned array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("\nError... The given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3&&counter<row4; counter++) {
			for (counter1 = 0; counter1<column3&&counter1<column4; counter1++) {
				answerofsum[counter][counter1] = array3[counter][counter1] + array4[counter][counter1];
			}
		}
		return (answerofsum[100][100]);
	}
}
//__________________________________________________________________________________________________________________________________________________________//
float m_subtract(float answerofsubtraction[][100], float array3[][100], int row3, int column3, float array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
int m_subtract(int answerofsubtraction[][100], int array3[][100], int row3, int column3, int array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
long m_subtract(long answerofsubtraction[][100], long array3[][100], int row3, int column3, long array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
short m_subtract(short answerofsubtraction[][100], short array3[][100], int row3, int column3, short array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
double m_subtract(double answerofsubtraction[][100], double array3[][100], int row3, int column3, double array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
unsigned m_subtract(unsigned answerofsubtraction[][100], unsigned array3[][100], int row3, int column3, unsigned array4[][100], int row4, int column4)
{
	int counter, counter1;
	if (row3 != row4 || column3 != column4)
	{
		printf("Error the given matrices are unequal\n");
	}
	else if (row3 == row4 && column3 == column4) {
		for (counter = 0; counter<row3; counter++) {
			for (counter1 = 0; counter1<column3; counter1++) {
				answerofsubtraction[counter][counter1] = array3[counter][counter1] - array4[counter][counter1];
			}
		}
		return (answerofsubtraction[100][100]);
	}
}
//-----------_________________________________________________________________________________________________________________________?/
int promptrow()
{
	int row;
	printf("Tell me the number of ROWS of the matrix = ");
	scanf_s("%d", &row);
	return (row);
}
//________________________________________________________________________________________________________________________________________________________//
int promptcolumn()
{
	int column;
	printf("Tell me the number of COLUMNS of the matrix = ");
	scanf_s("%d", &column);
	return (column);
}
//___________________________________________________________________________________________________________________________________________________________//
float m_product(float answerofproduct[][100], float array8[][100], int row8, int column8, float array9[][100], int row9, int column9)
{
	int counter, counter1, counter2, counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
int m_product(int answerofproduct[][100], int array8[][100], int row8, int column8, int array9[][100], int row9, int column9)
{
	int counter, counter1, counter2,  counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
double m_product(double answerofproduct[][100], double array8[][100], int row8, int column8, double array9[][100], int row9, int column9)
{
	int counter, counter1, counter2, counter3, counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
long m_product(long answerofproduct[][100], long array8[][100], int row8, int column8, long array9[][100], int row9, int column9)
{
	int counter, counter1, counter2, counter3, counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
short m_product(short answerofproduct[][100], short array8[][100], int row8, int column8, short array9[][100], int row9, int column9)
{
	int counter, counter1, counter2, counter3, counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
unsigned m_product(unsigned answerofproduct[][100], unsigned array8[][100], int row8, int column8, unsigned array9[][100], int row9, int column9)
{
	int counter, counter1, counter2, counter3, counter4, counter5;
	if (column8 != row9) {
		printf("\nError...The product of matrix A (%dX%d) and matrix B (%dX%d) does not exist.\n", row8, column8, row9, column9);
	}
	else {
		for (counter = 0; counter<row8; counter++)
		{
			for (counter1 = 0; counter1<column9; counter1++)
			{
				for (counter2 = 0; counter2<column8; counter2++)
				{
					if (counter2 == 0)
					{
						answerofproduct[counter][counter1] = array8[counter][counter2] * array9[counter2][counter1];
					}
					else
					{
						answerofproduct[counter][counter1] += (array8[counter][counter2] * array9[counter2][counter1]);
					}
				}
			}
		}
		return (answerofproduct[100][100]);
	}
}
//_______________________________________________________________________________________________________________________________________________/
void m_outp(const float array2[][100], int row2, int column2) {                         //function for the matrix printing (function won't return a thing) 
	int counter, counter1;                                   //variable defining
	for (counter = 0; counter<row2; counter++) {                              //for loop to select the row of the given matrix
		printf("\t");                                                    //print spaces
		for (counter1 = 0; counter1<column2; counter1++) {                             //for loop to select the column of the matrix
			printf("%8.4f\t", array2[counter][counter1]);                      //print the value of the matrix
		}                                                                      //end for loop to select columns
		printf("\n");                                                     //printf
	}                                                             //end for loop to select the row of the matrix
}
//_________________________________________________________________________________________________________________________________________________________?/
//______________________________________________________________________________________________________________________________________________________//
float m_transpose(float transpose[][100], float matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			transpose[counter1][counter] = matrix[counter][counter1];
		}
	}
	return (transpose[100][100]);
}
int m_transpose(int transpose[][100], int matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			transpose[counter1][counter] = matrix[counter][counter1];
		}
	}
	return (transpose[100][100]);
}
double m_transpose(double transpose[][100], double matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			transpose[counter1][counter] = matrix[counter][counter1];
		}
	}
	return (transpose[100][100]);
}
short m_transpose(short transpose[][100], short matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			transpose[counter1][counter] = matrix[counter][counter1];
		}
	}
	return (transpose[100][100]);
}
long m_transpose(long transpose[][100], long matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			transpose[counter1][counter] = matrix[counter][counter1];
		}
	}
	return (transpose[100][100]);
}
//________________________________________________________________________________________________________________________________________________________//
float m_adjoint(float adjoint[][100], float matrix[][100], int row, int column)
{
	if (row != column)
	{
		printf("\nError...Adjoint only exist for square matrics\n");
	}
	else if (row == 1 && column == 1)
	{
		adjoint[0][0] = matrix[0][0];
		return (adjoint[0][0]);
	}
	else 	
	{
		int sum, ncolumn, nrow, newrow, newcolumn, sign, counter, counter1, newsize, counter3;
		float newmatrix[100][100], tobeadjoint[100][100];
		newsize = row - 1;
		for (nrow = 0; nrow<row; nrow++) {
			for (ncolumn = 0; ncolumn<column; ncolumn++) {
				newrow = 0;
				newcolumn = 0;
				for (counter = 0; counter<row; counter++) {
					for (counter1 = 0; counter1<column; counter1++) {
						if (counter != nrow) {
							if (counter1 != ncolumn) {
								newmatrix[newrow][newcolumn] = matrix[counter][counter1];
								newcolumn++;
								if (newcolumn == newsize) {
									newrow++;
									newcolumn = 0;
								}
								else;
							}
							else;
						}
						else;
					}
				}
				sign = 0;
				sum = ncolumn + nrow;
				sign = pow((double)-1, sum);
				tobeadjoint[nrow][ncolumn] = sign*m_determinant(newmatrix, newsize);
			}
		}
		m_transpose(adjoint, tobeadjoint, row, column);
		return (adjoint[100][100]);
	}
}

//_______________________________________________________________________________________________________________________________________________________//
float ma_inverse(float inverse[][100], float matrix[][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++) {
		for (counter1 = 0; counter1<column; counter1++) {
			inverse[counter][counter1] = -1 * matrix[counter][counter1];
		}
	}
	return (inverse[100][100]);
}
//___________________________________________________________________________________________________________________________________________________________//
float mm_inverse(float inverse[][100], float matrix[][100], int row, int column)
{
	int counter, counter1, determinant;
	float adjoint[100][100];
	if (row != column) {
		printf("\nError...inverse exist only for square matrics. Enter a square matrix.\n\n");
	}
	else
	{
		determinant = m_determinant(matrix, row);
		if (determinant == 0) {
			printf("\nThe given matrix is singular... Inverse does not exist.\n\n");
		}
		else
		{
			m_adjoint(adjoint, matrix, row, column);
			for (counter = 0; counter<row; counter++) {
				for (counter1 = 0; counter1<column; counter1++) {
					inverse[counter][counter1] = (adjoint[counter][counter1] / determinant);
				}
			}
		}
		return (inverse[100][100]);
	}
}
//____________________________________________________________________________________________________________________________________________________________//
void p_swap(float *ptr1, float *ptr2)
{
	float hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
//_____________________________________________________________________________________________________________________________________________________?/
void p_swap(int *ptr1, int *ptr2)
{
	int hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
void p_swap(double *ptr1, double *ptr2)
{
	double hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
void p_swap(char *ptr1, char *ptr2)
{
	char hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
void p_swap(long *ptr1, long *ptr2)
{
	long hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
void p_swap(short *ptr1, short *ptr2)
{
	float hold;
	hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}
//________________________________________________________________________________________________________________________________________________________//
void a_in(int *ptr, int amount)
{
	int counter;
	for (counter = 0; counter<amount; counter++)
	{
		printf("Enter the element, a[%d] = ", counter + 1);
		scanf_s("%d", &ptr[counter]);
	}
}
void a_in(float *ptr, int amount)
{
	int counter;
	for (counter = 0; counter<amount; counter++)
	{
		printf("Enter the element, a[%d] = ", counter + 1);
		scanf_s("%f", &ptr[counter]);
	}
}
void a_in(double *ptr, int amount)
{
	int counter;
	for (counter = 0; counter<amount; counter++)
	{
		printf("Enter the element, a[%d] = ", counter + 1);
		scanf_s("%f", &ptr[counter]);
	}
}
void a_in(long *ptr, int amount)
{
	int counter;
	for (counter = 0; counter<amount; counter++)
	{
		printf("Enter the element, a[%d] = ", counter + 1);
		scanf_s("%ld", &ptr[counter]);
	}
}
void a_in(char *ptr, int amount)
{
	int counter;
	for (counter = 0; counter<amount; counter++)
	{
		printf("Enter the element, a[%d] = ", counter + 1);
		scanf_s("%d", &ptr[counter]);
	}
}
//-----__________________________________________________________________________________________________________________________________________________//
void a_out(int *aptr, int amount, int type)
{
	int counter;
	if (type == 1)
	{
		for (counter = 0; counter<amount; counter++)
		{
			printf("%d ", aptr[counter]);
		}
	}
	else if (type == 2)
	{
		printf("\n");
		for (counter = 0; counter<amount; counter++)
		{
			printf("%d\n", aptr[counter]);
		}
	}
	else
	{
		printf("\nInvalid print type entered.\n");
	}
}

//-----__________________________________________________________________________________________________________________________________________________//
void a_out(float *aptr, int amount, int type)
{
	int counter;
	if (type == 1)
	{
		for (counter = 0; counter<amount; counter++)
		{
			printf("%.1f ", aptr[counter]);
		}
	}
	else if (type == 2)
	{
		printf("\n");
		for (counter = 0; counter<amount; counter++)
		{
			printf("%.1f\n", aptr[counter]);
		}
	}
	else
	{
		printf("\nInvalid print type entered.\n");
	}
}
void a_out(double *aptr, int amount, int type)
{
	int counter;
	if (type == 1)
	{
		for (counter = 0; counter<amount; counter++)
		{
			printf("%.1lf ", aptr[counter]);
		}
	}
	else if (type == 2)
	{
		printf("\n");
		for (counter = 0; counter<amount; counter++)
		{
			printf("%.1lf\n", aptr[counter]);
		}
	}
	else
	{
		printf("\nInvalid print type entered.\n");
	}
}
void a_out(long *aptr, int amount, int type)
{
	int counter;
	if (type == 1)
	{
		for (counter = 0; counter<amount; counter++)
		{
			printf("%ld ", aptr[counter]);
		}
	}
	else if (type == 2)
	{
		printf("\n");
		for (counter = 0; counter<amount; counter++)
		{
			printf("%1ld\n", aptr[counter]);
		}
	}
	else
	{
		printf("\nInvalid print type entered.\n");
	}
}
void a_out(char *aptr, int amount, int type)
{
	int counter;
	if (type == 1)
	{
		for (counter = 0; counter<amount; counter++)
		{
			printf("%c ", aptr[counter]);
		}
	}
	else if (type == 2)
	{
		printf("\n");
		for (counter = 0; counter<amount; counter++)
		{
			printf("%c\n", aptr[counter]);
		}
	}
	else
	{
		printf("\nInvalid print type entered.\n");
	}
}


//_____________________________________________________________________________________________________________________________________________________//
float m_identity(float matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
int m_identity(int matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
char m_identity(char matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
double m_identity(double matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
long m_identity(long matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
short m_identity(short matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
unsigned m_identity(unsigned matrix[][100], int order)
{
	short counter, counter1;
	for (counter = 0; counter<order; counter++) {
		for (counter1 = 0; counter1<order; counter1++) {
			if (counter == counter1) {
				matrix[counter][counter1] = 1;
			}
			else
			{
				matrix[counter][counter1] = 0;
			}
		}
	}
	return (matrix[100][100]);
}
//________________________________________________________________________________________________________________________________________________________-//
int mc_product(int answer[100][100], int number, int matirx[100][100], int row, int column)
{
	short counter, counter1;
	for (counter = 0; counter<row; counter++)
	{
		for (counter1 = 0; counter1<column; counter1++)
		{
			answer[counter][counter1] = number*matirx[counter][counter1];
		}
	}
	return (answer[100][100]);
}
float mc_product(float answer[100][100], float number, float matirx[100][100], int row, int column)
{
	int counter, counter1;
	for (counter = 0; counter<row; counter++)
	{
		for (counter1 = 0; counter1<column; counter1++)
		{
			answer[counter][counter1] = number*matirx[counter][counter1];
		}
	}
	return (answer[100][100]);
}
//_____________________________________________________________________________________________________________________________________________________//
float m_swap(float m[100][100], int matrixrow, int matrixcolumn, int row1, int row2)
{
	float hold;
	int c = matrixcolumn;
	int r = matrixrow;
	int a = row1;
	int b = row2;
	if (a>0 && a <= r) {
		if (b>0 && a <= r) {
			for (int counter = 0; counter<c; counter++)
			{
				hold = m[a - 1][counter];
				m[a - 1][counter] = m[b - 1][counter];
				m[b - 1][counter] = hold;
			}
		}
		else;
	}
	else
	{
		printf("Error.... the given rows are not in the given matrix. \n");
	}
	return m[100][100];
}

int m_swap(int m[100][100], int matrixrow, int matrixcolumn, int row1, int row2)
{
	int hold;
	int c = matrixcolumn;
	int r = matrixrow;
	int a = row1;
	int b = row2;
	if (a>0 && a <= r) {
		if (b>0 && a <= r) {
			for (int counter = 0; counter<c; counter++)
			{
				hold = m[a - 1][counter];
				m[a - 1][counter] = m[b - 1][counter];
				m[b - 1][counter] = hold;
			}
		}
		else;
	}
	else
	{
		printf("Error.... the given rows are not in the given matrix. \n");
	}
	return m[100][100];
}

double m_swap(double m[100][100], int matrixrow, int matrixcolumn, int row1, int row2)
{
	double hold;
	int c = matrixcolumn;
	int r = matrixrow;
	int a = row1;
	int b = row2;
	if (a>0 && a <= r) {
		if (b>0 && a <= r) {
			for (int counter = 0; counter<c; counter++)
			{
				hold = m[a - 1][counter];
				m[a - 1][counter] = m[b - 1][counter];
				m[b - 1][counter] = hold;
			}
		}
		else;
	}
	else
	{
		printf("Error.... the given rows are not in the given matrix. \n");
	}
	return m[100][100];
}

unsigned m_swap(unsigned m[100][100], int matrixrow, int matrixcolumn, int row1, int row2)
{
	unsigned hold[1][100];
	int c = matrixcolumn;
	int r = matrixrow;
	int a = row1;
	int b = row2;
	if (a>0 && a <= r) {
		if (b>0 && a <= r) {
			for (int counter = 0; counter<c; counter++)
			{
				hold[0][counter] = m[a - 1][counter];
			}
			for (int counter1 = 0; counter1<c; counter1++)
			{
				m[a - 1][counter1] = m[b - 1][counter1];
			}
			for (int counter2 = 0; counter2<c; counter2++)
			{
				m[b - 1][counter2] = hold[0][counter2];
			}
		}
		else;
	}
	else
	{
		printf("Error.... the given rows are not in the given matrix. \n");
	}
	return m[100][100];
}

long m_swap(long m[100][100], int matrixrow, int matrixcolumn, int row1, int row2)
{
	long hold[1][100];
	int c = matrixcolumn;
	int r = matrixrow;
	int a = row1;
	int b = row2;
	if (a>0 && a <= r) {
		if (b>0 && a <= r) {
			for (int counter = 0; counter<c; counter++)
			{
				hold[0][counter] = m[a - 1][counter];
			}
			for (int counter1 = 0; counter1<c; counter1++)
			{
				m[a - 1][counter1] = m[b - 1][counter1];
			}
			for (int counter2 = 0; counter2<c; counter2++)
			{
				m[b - 1][counter2] = hold[0][counter2];
			}
		}
		else;
	}
	else
	{
		printf("Error.... the given rows are not in the given matrix. \n");
	}
	return m[100][100];
}
//____________________________________________________________________________________________________________________________________________________//
int m_rowAlter(int matrix[100][100], int row, int column, int r2, int r1, int k)
{
	int hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}

float m_rowAlter(float matrix[100][100], int row, int column, int r2, int r1, float k)
{
	float hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}

double m_rowAlter(double matrix[100][100], int row, int column, int r2, int r1, double k)
{
	double hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}

long m_rowAlter(long matrix[100][100], int row, int column, int r2, int r1, long k)
{
	long hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}

unsigned m_rowAlter(unsigned matrix[100][100], int row, int column, int r2, int r1, int k)
{
	unsigned hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}

unsigned m_rowAlter(unsigned matrix[100][100], int row, int column, int r2, int r1, unsigned k)
{
	unsigned hold[1][100];
	for (int counter = 0; counter<column; counter++)
	{
		hold[0][counter] = k*matrix[r2 - 1][counter];
	}
	for (int counter1 = 0; counter1<column; counter1++)
	{
		matrix[r1 - 1][counter1] = matrix[r1 - 1][counter1] + hold[0][counter1];
	}
	return matrix[100][100];
}
//________________________________________________________________________________________________________________________________________________________//

int m_rowScaling(int matrix[100][100], int row, int column, int selectedrow, int numbertomultiply)
{
	for (int counter = 0; counter<column; counter++)
	{
		matrix[selectedrow - 1][counter] = numbertomultiply*matrix[selectedrow - 1][counter];
	}
	return matrix[100][100];
}

int m_rowScaling(int matrix[100][100], int row, int column, int selectedrow, float numbertomultiply)
{
	for (int counter = 0; counter<column; counter++)
	{
		matrix[selectedrow - 1][counter] = (float)numbertomultiply*matrix[selectedrow - 1][counter];
	}
	return matrix[100][100];
}

float m_rowScaling(float matrix[100][100], int row, int column, int selectedrow, float numbertomultiply)
{
	for (int counter = 0; counter<column; counter++)
	{
		matrix[selectedrow - 1][counter] = numbertomultiply*matrix[selectedrow - 1][counter];
	}
	return matrix[100][100];
}

double m_rowScaling(double matrix[100][100], int row, int column, int selectedrow, double numbertomultiply)
{
	for (int counter = 0; counter<column; counter++)
	{
		matrix[selectedrow - 1][counter] = numbertomultiply*matrix[selectedrow - 1][counter];
	}
	return matrix[100][100];
}

int m_rowScaling(int matrix[100][100], int row, int column, int selectedrow, double numbertomultiply)
{
	for (int counter = 0; counter<column; counter++)
	{
		matrix[selectedrow - 1][counter] = numbertomultiply*matrix[selectedrow - 1][counter];
	}
	return matrix[100][100];
}

//__________________________________________________________________________________________________________________________________________________//
int promptorder()
{
	int order;
	printf("The me the order of the square matrix = ");
	scanf_s("%d", &order);
	return (order);
}
