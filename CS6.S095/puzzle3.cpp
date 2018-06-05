/* this is the cpp version of puzzle 3 of CS6.S095 */
/* Author: Rebecca, inspired by the lecture @ MIT
   https://www.youtube.com/watch?v=zDHhHPZm2rc
 * 
 * [Mind Reading]
 * Randomly pick 5 cards out of a deck of card
 * Show the 'guesser' 4 out of 5 cards
 * give out the 5th card
 */ 

#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <random>

using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::set;

// encoding a deck of cards
class Deck{
public:
	struct Card{
		string suite;
		string number;
		Card(){}
		Card(string s, string n):suite(s), number(n){}
	};

	vector<Card> deck;
	Deck(){
		deck.resize(52);
		// for simpler initial
		vector<string> suite(4);
		vector<string> number(13);
		suite[0] = "Clubs";
		suite[1] = "Diamonds";
		suite[2] = "Hearts";
		suite[3] = "Spades";

		for(int i=1;i<11;i++){
			number[i-1] = std::to_string(i);
		}
		number[10] = 'J';
		number[11] = 'Q';
		number[12] = 'K';

		for(int i=0;i<4;i++){
			for(int j=0;j<13;j++){
				deck[i*13+j] = Card(suite[i],number[j]);
			}
		}
		
	}

	void pirntCard(Card c){
		cout<<c.number<<" of "<<c.suite<<"."<<endl;
	}
	void print(int idx){
		pirntCard(deck[idx]);
	}

	void print(int s, int n){
		pirntCard(deck[s*13+n]);
	}

	void print(string s, string n){
		cout<<n<<" of "<<s<<"."<<endl;
	}
};

// mimic the mind reading game: pick 5 cards at random
void randGame(Deck& d, int seed = 123){
	std::srand(seed);
	set<int> idx;
	while(idx.size()<5){
		idx.insert(std::rand()%52);
	}
	cout<<endl;
	cout<<"Finish picking cards..."<<endl;
	cout<<"You have following cards:"<<endl;
	for(const int i: idx){
		cout<<"Index: "<<i<<endl;
		d.print(i);
	}
	return;
}

// @todo: mimic the algorithm of mind reading
void Decoding(){
	return;
}



// simple test
int main(){
// Class test
	Deck d;
	d.print(10);
	d.print(51);
	d.print(0,12);

// random picking test
	randGame(d);
	return 0;
}





