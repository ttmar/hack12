/**
Author: Victor Nguyen, Collin Sipple, David Ryan, Tony Ong, Alexis Linhardt,  Serigne Toure, Jake Wilson
My NU ID: 02357235
CLASS: 155E
Section 250
Date Started: 11/08/2018
Date Finished: 11/09/2018
*
*
*/

//Compute the binomial coefficient C(n, k) aka "n choose k" using Pascal's Rule
long choose(int n, int k);

//Like function above, but inputs a table that checks if a value has been
//computed already and stores it in that table
long chooseCare(int n, int k, long **table);
