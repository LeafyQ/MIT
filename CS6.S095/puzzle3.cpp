/* this is the cpp version of puzzle 3 of CS6.S095 */
/* Author: Rebecca, inspired by the lecture @ MIT
   https://www.youtube.com/watch?v=zDHhHPZm2rc
 * 
 * [Mind Reading]
 * Randomly pick 5 cards out of a deck of card
 * Show the 'guesser' 4 out of 5 cards
 * give out the 5th card
 */ 

#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::string;
using std::endl;
using std::vector;

// encoding a deck of cards
class Card{
public:
	vector<string> suite(4);
	vector<char> number(13);
	Card(){
		suite[0] = "Clubs";
		suite[1] = "Diamonds";
		suite[2] = "Hearts";
		suite[3] = "Spades";
	}
};


