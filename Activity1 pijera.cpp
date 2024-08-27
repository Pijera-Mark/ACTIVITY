#include <iostream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs = filesystem;
void listFiles() {
    cout << "Listing files in the current directory:\n";
    for (const auto& entry : fs::directory_iterator(fs::current_path())) {
        cout << entry.path().filename().string() << '\n';
    }
}

int main(){
	int choice;
	cout << "     Main Menu     " << "\n";
	cout << "-------------------" << "\n\n";
	cout << "1. To Display List Of Files" << "\n";
	cout << "2. To Create New Directory" << "\n";
	cout << "3. Top Change the Working Directory" << "\n";
	cout << "4. Exit" << "\n";
	cout << "Enter: ";
	cin >> choice;
	switch (choice) {
            case 1:
                listFiles();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
	}
	
	
	
	return 0;
};
