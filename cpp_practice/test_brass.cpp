#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

class Brass {
private:
	string fullName;
	long acctNum;
	double balance;
public:
	Brass(const string& s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass() {};
};


Brass::Brass(const string& s, long an, double bal) {
	fullName = s;
	acctNum = an;
	balance = bal;
}

void Brass::Deposit(double amt) {
	if (amt < 0) {
		cout << "Negative deposit not allowed; "
			<< "deposit is cancelled.\n";
	}
	else {
		balance += amt;
	}
}

void Brass::Withdraw(double amt) {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0) {
		cout << "Withdraw amout must be positive;"
			<< "withdraw canceled.\n";
	}else if (amt <= balance) {
		balance -= amt;
	}
	else {
		cout << "Withdraw amout of $" << amt << "exceeds your balance.\n"
			<< "withdraw canceled.\n";
	}
	restore(initialState, prec);
}

double Brass::Balance()const {
	return balance;
}

void Brass::ViewAcct()const {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;

	restore(initialState, prec);
}

class BrassPlus : public Brass {
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const string& s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r= 0.11125);
	BrassPlus(const Brass & ba, double ml = 500, double r=0.11125);
	virtual void ViewAcct()const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; };
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0; };
};

BrassPlus::BrassPlus(const string& s , long an , double bal, double ml, double r) : Brass(s, an, bal) {
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r) : Brass(ba) {
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::ViewAcct()const {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();

	cout << "Maximum load: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout.precision(3);
	cout << "Load Rate: " << 100 * rate << "%\n";

	restore(initialState, prec);
}


void BrassPlus::Withdraw(double amt) {
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal) {
		Brass::Withdraw(amt);
	}
	else if (amt <= bal + maxLoan -owesBank) {
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Band advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else {
		cout << "Credit limit exceeded. Transcation cancelled.\n";
	}
	restore(initialState, prec);
}

format setFormat() {
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p) {
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}

int main60(void) {

	Brass Piggy("Porcelot Pigg", 381299, 4000.0);
	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.0);

	Piggy.ViewAcct();
	cout << endl;

	Hoggy.ViewAcct();
	cout << endl;

	cout << "Depositing $1000 into the Hogg Accout:\n";
	Hoggy.Deposit(1000.0);
	cout << "New balance: " << Hoggy.Balance() << endl;

	cout << "Withdrawing $4200 from the Pigg Account" << endl;
	Piggy.Withdraw(4200.0);
	cout << "Pigg account balance: $" << Piggy.Balance() << endl;

	cout << "Withdrawing $4200 from the Hoggy Accout:\n";
	Hoggy.Withdraw(4200.0);
	Hoggy.ViewAcct();

	return 0;
}