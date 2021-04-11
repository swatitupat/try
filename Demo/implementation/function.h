#include<stdbool.h>


#ifndef __FUNCTION_H__
#define ___FUNCTION_H__




/**
 * @brief Structure to hold a Details to Book Ticket
 * 
 */

typedef struct{
	char name[50];
	int train_num;
	int num_of_seats;
}pd;




/* Read 1 character with echo */



/*******************************************FUNCTION PROTOTYPE**********************************************************/
//function prototypes to be used

/**
 * @brief Some functions carried out are void 
 * @brief all variables are global
 * 
 */

/**
 * @brief data process to book a ticket
 * 
 */
void reservation(void);							//main reservation function

/**
 * @brief Display all the available tickets
 * 
 */
void viewdetails(void);							//view details of all the trains

/**
 * @brief Use to display the book ticket
 * 
 */
void display(void);	

/**
 * @brief Cancel the user ticket
 * 
 */
void cancel(void);

/**
 * @brief Display the user booked ticket
 * 
 * @param name whose ticket is booked
 * @param int train ticket number
 * @param int number of seats booked
 * @param float price of the ticket
 */
void printticket(char name[],int,int,float);	//print ticket 

/**
 * @brief display specific train details
 * 
 * @param int train number
 * 
 */
void specifictrain(int);						//print data related to specific train

/**
 * @brief function use to set the price of the ticket according to train selected
 * 
 * @param int train number
 * @param int number of seats booked
 * 
 * @return float 
 */
float charge(int,int);							//charge automatically w.r.t number of seats and train

/**
 * @brief initiater used to login the user
 * 
 */
void login();

/**
 * @brief Begining of application
 * 
 */
void compute();


/**
 * @brief function use to check whther ticket exist or not
 * 
 */
void validate();


/**
 * @brief To check the name exist in booked list
 * 
 * @param name 
 * @return true 
 * @return false 
 */
bool present(char name[]);

#endif
