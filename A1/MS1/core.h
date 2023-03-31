/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  :    Rendell Velasco
Student ID#:    140014218
Email      :    rvelasco6@myseneca.ca
Section    :    NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

// Get Integer 
int inputInt(void);

// Get positive Integer
int inputIntPositive(void);

// Get Integer inclusive between a range
int inputIntRange(int min, int max);

// Get a character within a range
char inputCharOption(const char cStringRestriction[]);

// get a string with a specific length size between a range
void inputCString(char *cString, int minChar, int maxChar);

// Displays an array of 10-character digits as formatted phone number
void displayFormattedPhone(const char cstring[]);