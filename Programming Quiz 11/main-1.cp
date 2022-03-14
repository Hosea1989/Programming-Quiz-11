//Programming_Quiz_11
//Soccer Team Scores

//  Created by Damien Hosea on 9/29/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

struct SoccerPlayer //Structure of Soccer players Declaration
{
    string name;
    int number;
    int score;
};

int main()
{
    const int ArraySize = 12;
    SoccerPlayer playerScore [ArraySize]; // An Array with 12 elements
    int HighestScore = 0;
    int ScoreTotal = 0;
    
    cout << "Please Enter the information for 12 Team Players\n";
    cout << "\tPress Enter to continue\t\n";
    cin.get();
    
    for (int counter = 0; counter < ArraySize; ++counter)// Step through each element in the array
    {
        cout << "Player " << counter + 1 << " name: \n";
        cin >> playerScore[counter].name;
        cout << "Player " <<counter + 1 << " number: \n";
        cin >> playerScore[counter].number;
        
        while (playerScore[counter].number < 0) //Validate negative numbers
        {
            cout << " Please Enter ONLY positive numbers\n";
            cout << "Player " << counter + 1 << " score: \n";
            cin >> playerScore[counter].number;
        }
        cout << "player " << counter + 1 << " score: \n";
        cin >> playerScore[counter].score;
        
        while (playerScore[counter].score < 0) //Validate negative numbers
        {
            cout << "Please Enter ONLY positive numbers\n";
            cout << "Player " << counter + 1 << " score: \n";
            cin >> playerScore[counter].score;
        }
    }
    cout << "\t_______________TEAM INFORMATION_________\t\n";
    cout << " \nPlayer's_Number\t_Name\t_Score\n";
    for (int counter = 0; counter < ArraySize; ++counter)
    {
        ScoreTotal += playerScore[counter].score;
        cout << left;
        cout << setw(12) <<
        playerScore[counter].number << setw(12)<<
        playerScore[counter].name << setw(5)<<
        playerScore[counter].score <<endl;
    }
    cout << "Team's total points earned: " <<ScoreTotal << endl;
    for (int counter = 0; counter < ArraySize; ++counter)
    {
        if (playerScore[counter].score > HighestScore)
        {
            HighestScore = playerScore[counter].score;
        }
    }
    for (int counter = 0; counter < ArraySize; counter++)
    {
        if (HighestScore == playerScore[counter].score)
        {
            cout <<" * " << playerScore[counter].name << " HAS THE HIGHEST SCORE *\n" <<endl;
            return 0;
        }
    }
    return 0;
}
