#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
};


TableTennisPlayer::TableTennisPlayer(const string& fn, const string & ln, bool ht): firstname(fn),lastname(ln),hasTable(ht){}

void TableTennisPlayer::Name() const {
	std::cout << lastname << ", " << firstname;
}

class RatedPlayer : public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string& fn = "none", const string& ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Rating()const { return rating; };
	void ResetRating(unsigned int r) { rating = r; };
};

RatedPlayer::RatedPlayer(unsigned int r, const string& fn, const string& ln, bool ht) : TableTennisPlayer(fn, ln,ht){
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) : TableTennisPlayer(tp) {
	rating = r;
}




int main59(void) {
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

	rplayer1.Name();

	if (rplayer1.HasTable()) {
		cout << ": has a table.\n";
	}
	else {
		cout << ": hasn't a table.\n";
	}
	player1.Name();
	if (player1.HasTable()) {
		cout << ": has a table.\n";
	}
	else {
		cout << ": hasn't a table.\n";
	}

	cout << "Name: ";
	rplayer1.Name();
	cout << "; Rating: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(1212, player1);

	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	return 0;
}