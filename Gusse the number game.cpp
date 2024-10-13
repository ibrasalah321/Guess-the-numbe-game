#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int start, end, attempts;
    char again;
    bool found = false;
    cout << "Setting of the game\n";
    cout << "enter the range of numbers:\n";
    cout << "Start= ";
    cin >> start;
    cout << "End= ";
    cin >> end;
    int random = rand() % (end - start + 1) + start;
    cout << "How many attempts do you want ? ";
    cin >> attempts;

    do
    {
        int random = rand() % (end - start + 1) + start;
        cout << "Number between " << start << " and " << end << " was put in memory.\n";
        cout << "You have " << attempts << " Attempts to know this number otherwise Game will over.\n ";
        while (!found)
        {
            int guess;
            cout << "guess the number\n ";
            cin >> guess;
            if (guess == random)
            {
                cout << "  Congratulation You Won\n";
                found = true;
            }
            else
            {
                attempts--;
                if (guess > random)
                {
                    cout << "the number is smaller than " << guess << endl;
                }
                else
                {
                    cout << "the number is greater than " << guess << endl;
                }
                cout << "you still have " << attempts << " Attempts.\n";
            }
            if (attempts == 0)
            {
                cout << "your attempts is finished \n";
                break;
            }
        }

        found = false;
        cout << "Do you want to play again? press y ";
        cin >> again;

    } while (again == 'y');
    return 0;
}