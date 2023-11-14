#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include <sstream>
using namespace std;
// ..............................Helper Functions..........
void displayMainMenu()
{
    cout << "\n-----------------------------------------------------" << endl;
    cout << "Welcome to NUCES Airline Flight System (NAFS)" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. View NAFS Details" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------------------------" << endl;
}

void displayUserMenu()
{
    cout << "\n-----------------------------------------------------" << endl;
    cout << "NAFS User Menu" << endl;
    cout << "1. Flight Reservation" << endl;
    cout << "2. Flight Cancellation" << endl;
    cout << "3. View Flight Schedule" << endl;
    cout << "4. View Booking History" << endl;
    cout << "5. Logout" << endl;
    cout << "\n-----------------------------------------------------" << endl;
}

void display_Admin_Menu(){
	cout<<"-------------------------------------------------"<<endl;
	cout<<"1 - Update Flight Source and Destinations:"<<endl;
	cout<<"2 - Change Timing:"<<endl;
	cout<<"3 - Remove Passenger"<<endl;
	cout<<"4 - View Flight Details"<<endl;
	cout<<"-------------------------------------------------"<<endl;
}


bool verifyPassword(string password)
{
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasNumber = false;
    bool hasSpecialChar = false;

    if (password.length() < 8)
    {
        return false;
    }

    for (int i = 0; i < password.length(); i++)
    {
        if (isupper(password[i]))
        {
            hasUpperCase = true;
        }
        else if (islower(password[i]))
        {
            hasLowerCase = true;
        }
        else if (isdigit(password[i]))
        {
            hasNumber = true;
        }
        else
        {
            hasSpecialChar = true;
        }
    }

    return hasUpperCase && hasLowerCase && hasNumber && hasSpecialChar;
}

//...............................Yaha tak......................................



class Passport {
private:
    std::string type; // Local or Foreign
    bool hasVisa;

public:
    Passport(std::string passportType) {
        type = passportType;
        hasVisa = false;
    }

    bool hasValidVisa() {
        return hasVisa;
    }

    void stampVisa() {
        hasVisa = true;
    }
};


class User
{
protected:
    string username;
    string password;
    string name;
    string cnic;

public:
    User() {

    }
    User(string u, string p, string n, string c)
    {
        username = u;
        password = p;
        name = n;
        cnic = c;
    }

    string getUsername()
    {
        return username;
    }

    string getPassword()
    {
        return password;
    }

    string getName()
    {
        return name;
    }

    string getCNIC()
    {
        return cnic;
    }

    void setCNIC(string cnic) {
        this->cnic = cnic;
    }
    void setName(string name) {
        this->name = name;
    }
    void setPassword(string password) {
        this->password = password;
    }

};



class Admin : public User
{
public:
    Admin() {

    }
    Admin(string u, string p, string n, string c) {}

};

class Passenger : public User
{
private:
    string accountType;
    Passport* passport;
    std::string mostVisitedCountry;
    double estimateTravelCost;

public:
	 string accountNumber;
	 float Account_Balance;
	void setAccount(string s){
		accountNumber = s;
	}
    Passenger() {
        accountNumber = "";
        accountType = "";
        Account_Balance = 0;
    }

    Passenger(string u, string p, string n, string c, string an, string at)
    {
        accountNumber = an;
        accountType = at;
        Account_Balance = 0;
    }

    Passenger(Passport* pass) {
        passport = pass;
        mostVisitedCountry = "";
        estimateTravelCost = 0.0;
    }

    void setPassport(Passport* pass) {
        passport = pass;
    }

    Passport* pass() {
        return passport;
    }
    string getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountType()
    {
        return accountType;
    }

    void displayUserMenu()
    {
        cout << "--------------------------" << endl;
        cout << "NAFS User Menu" << endl;
        cout << "1. Flight Reservation" << endl;
        cout << "2. Flight Cancellation" << endl;
        cout << "3. View Flight Schedule" << endl;
        cout << "4. View Booking History" << endl;
        cout << "5. Logout" << endl;
        cout << "--------------------------" << endl;
    }
};

class Finance_Department {
private:
    string name;
public:
    Finance_Department() : name("") {}
    ~Finance_Department() {}

    bool verify_Payment(const Passenger& pass, const string& str) const {
        return pass.accountNumber==str;
    }
};




class Flight
{
public:
    string source;
    string destination;
    int availableSeats;
public:
    string departureTime;
    string arrivalTime;
    int Duration;
    Passenger passangers[50];
    int total_passanger;

    Flight() {
        total_passanger = 0;
    }
    Flight(string src, string dest, string depTime, string arrTime, int dur, int seats)
    {
        total_passanger = 0;
        source = src;
        destination = dest;
        departureTime = depTime;
        arrivalTime = arrTime;
        Duration = dur;
        availableSeats = seats;
    }
    string getSource() const {
        return source;
    }
    string getDestination() const {
        return destination;
    }
    string getDepartureTime() const {
        return departureTime;
    }
    string getArrivalTime() const {
        return arrivalTime;
    }
    int getDuration() const {
        return Duration;
    }
    int getAvailableSeats() const {
        return availableSeats;
    }

    void setSource(string src) {
        source = src;
    }
    void setDestination(string dest) {
        destination = dest;
    }
    void setDepartureTime(string depTime) {
        departureTime = depTime;
    }
    void setArrivalTime(string arrTime) {
        arrivalTime = arrTime;
    }
    void setDuration(int dur) {
        Duration = dur;
    }
    void setAvailableSeats(int seats) {
        availableSeats = seats;
    }
    
    void print_Passanger(int i){
    	cout<<"-----------------------------------------"<<endl;
    	cout<<"Name:"<<passangers[i].getName()<<endl;
    	cout<<"Cnic:"<<passangers[i].getCNIC()<<endl;
    	cout<<"-----------------------------------------"<<endl;
	}
	
    void printFlight()
    {
        cout << "From: " << source << endl;
        cout << "To: " << destination << endl;
        cout << "Departure Time: " << departureTime << endl;
        cout << "Arrival Time: " << arrivalTime << endl;
        cout << "Duration: " << Duration << " hours" << endl;
        cout << "Available Seats: " << availableSeats << endl;
        cout<<"Ticket Price:"<<Duration*15000<<endl;
    }
    
    void Remove_Passenger(Passenger pass,int index){
    	 for (int i = index; i <=total_passanger; i++) {
        passangers[i] = passangers[i + 1];
    }
    total_passanger--;
    	
	}
    void bookSeat(Passenger pass)
    {
        if (availableSeats > 0)
        {
            passangers[total_passanger] = pass;
            total_passanger++;
            cout << "Seat booked Sucessfully" << endl;

            availableSeats--;
        }
        else {
            cout << "Seats are not Availiable" << endl;
        }
    }
    void bookSeat() {

    }
};

class Plane
{
private:
    int id;
    bool isInternational;
    Flight flights[20];
    int numFlights;
public:
    //Plane() {}
    Plane(int planeId, bool intl)
    {
        id = planeId;
        isInternational = intl;
        numFlights = 0;
    }
    void addFlight(Flight flight)
    {
        if (numFlights >= 20)
        {
            cout << "Maximum number of flights reached." << endl;
            return;
        }
        if (isInternational && numFlights > 0)
        {
            cout << "International flights can only have one journey per day." << endl;
            return;
        }
        if (!isInternational && numFlights > 0)
        {
            int lastFlightDuration = flights[numFlights - 1].Duration;
            time_t lastFlightArrivalTime = convertToTime(flights[numFlights - 1].arrivalTime);
            time_t newFlightDepartureTime = convertToTime(flight.departureTime);

            if (difftime(newFlightDepartureTime, lastFlightArrivalTime) < lastFlightDuration + 2)
            {
                cout << "Local flights must have a gap of 2 hours between journeys." << endl;
                return;
            }
        }
        flights[numFlights] = flight;
        numFlights++;
    }
    void printSchedule()
    {
        cout << "Schedule for Plane #" << id << ":" << endl;
        for (int i = 0; i < numFlights; i++)
        {
            flights[i].printFlight();
        }
    }
    void bookSeat(int flightIndex)
    {
        flights[flightIndex].bookSeat();
    }
    time_t convertToTime(string timeString)
    {
    	/*
        std::tm tm = {};
        std::istringstream ss(timeString);
        ss >> std::get_time(&tm, "%Y-%m-%dT%H:%M:%S");
        if (ss.fail()) {
            std::cerr << "Failed to parse date string" << std::endl;
            return 1;
        }
        std::time_t t = std::mktime(&tm);
        */
    }
};

