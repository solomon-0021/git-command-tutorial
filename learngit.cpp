#include <iostream> 
using namespace std;


int main (){

    cout << "Adding a branch to your main project!" << endl;

    cout << "Hello Git!" << endl;
    cout << "Learing the basics of Git commands." << endl;
    cout << "We are now working on github" << endl;
    cout << "THANK YOU!" << endl;
    /* cout << "LET'S USE GIT PULL" << endl;
    cout << "Now we are in the reverse way" << endl;
    cout << "Using git push command" << endl; */
    
    // a loop to print a rectangulare pattern

    // outer loop to control the row
    for ( int i = 0; i < 4; i++){
        // inner loop to print the pattern
    for (int j = 0; j <= i; j++){
        cout << "# " ;
    }
        cout << endl;
    }
    
    int guess, target = 15;
    cout << "Enter your number to guess(1-50): ";
    cin >> guess;
    if (guess == target){
        cout << "You guessed the target";
    }
    else if (guess < target){
        cout << "You guess to low";
    }
    else{
        cout << "You guess to high";
    }



cout << "Now I am working on my local editor(Vscode)" << endl;

    return 0;
}
