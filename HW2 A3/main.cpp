#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter your 3 test scores and I will ";
    cout << "average them:";
    int score1, score2, score3;
    cin>> score1 >> score2 >> score3;
    double average;
    average = (score1 + score2 + score3) / 3.0;
    cout<< "Your average is " << average <<endl;
    if (average == 100)
    {
       bool perfectScore;
       perfectScore = true;// Set the flag variable
       if (perfectScore)
            {
                cout<< "Congratulations!\n";
                cout<< "That's a perfect score.\n";
                cout<< "You deserve a pat on the back!\n";
            }
    }


    return 0;
}
