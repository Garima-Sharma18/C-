#include <iostream>
using namespace std;

int main() 
{
    int rounds;
    cin >> rounds;

    int currentLead = 0;
    int maxLead = 0;
    int leadingPlayer = 0;

    for (int i = 0; i < rounds; i++) {
        int score1, score2;
        cin >> score1 >> score2;

        int scoreDifference = score1 - score2;
        currentLead += scoreDifference;

        // Check if the current lead is greater than the maximum lead
        if (abs(currentLead) > maxLead) {
            maxLead = abs(currentLead);
            
            // Determine the leading player based on the current lead
            if (currentLead > 0) {
                leadingPlayer = 1;  // Player 1 is leading
            } else {
                leadingPlayer = 2;  // Player 2 is leading
            }
        }
    }

    // Output the leading player and the maximum lead
    cout << leadingPlayer << " " << maxLead << endl;

    return 0;
}