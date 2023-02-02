#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int key, rowCounter, rowStart, columnStart, columnEnd = 0;
    int rowEnd, answerRow = 0;
    vector<string> answer;

    /*LIST DECLARATION*/
    vector<vector<int>> myList{
        {5,7,13,22},
        {88,100,3,2},
        {33,7,2,3},
        {7,3,15,2}
    };

    /*KEY DECLARATION*/
    cout << "Please enter the key which you want to search: ";
    cin >> key;
    cout << "Please enter in how many rows you will search your key: ";
    cin >> rowCounter;
    cout << "\nIndex numbers will be between 0-3...";
    cout << "\nPlease enter the row which you want to start searching your key: ";
    cin >> rowStart;
    cout << "\nPlease enter the row which you want to end searching your key: ";
    cin >> rowEnd;
    for (int i = rowStart; i < rowEnd + 1; i++)
    {
        cout << "\nPlease enter the starting column for this row which you want to search your key: ";
        cin >> columnStart;
        cout << "\nPlease enter the ending column for this row which you want to search your key: ";
        cin >> columnEnd;
        for (int j = columnStart; j < columnEnd + 1; j++)
        {
            if (myList[i][j] == key)
            {
                string text = "Row: " + to_string(i) + " Column: " + to_string(j) + " Key: " + to_string(key);
                answer.push_back(text);
            };
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << endl << answer.at(i);
    }

    return 0;
}