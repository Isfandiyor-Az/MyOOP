// Isfandiyor Azimboyev U2410047
// Lab 5

#include "Header.h"

int main() {
	Account user1;
	Account user2;
    // Display Account Info
	cin >> user1;
	cin >> user2;
	cout << user1;
	cout << user2;
    // Check ==

    if (user1 ==user2)
        cout << "\nTwo accounts have the same account number." << endl;
    else
        cout<<"\nTwo accounts haven't the same account number."<<endl;
    // Checking which one is greater than other one
    if (user1 > user2)
        cout<<"user1's balance greater than user2'balance."<<endl;
    else
        cout<<"user2's balance greater than user1'balance."<<endl;
	system("pause");
	return 0;
}
