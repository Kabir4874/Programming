#include <iostream>
#include <vector>
using namespace std;

int getMaxProfit(vector<int> &pieces, vector<int> &pr, int rodLength)
{
    if (pieces.empty() || pr.empty() || rodLength <= 0)
    {
        return 0;
    }

    int numberOfPieces = pieces.size();

    vector<vector<int>> arr(numberOfPieces, vector<int>(rodLength + 1, 0));

    for (int i = 0; i < numberOfPieces; i++)
    {
        for (int j = 1; j <= rodLength; j++)
        {
            int includingCurrentPieceProfit = 0;
            int excludingCurrentPieceProfit = 0;

            if (pieces[i] <= j)
            {
                includingCurrentPieceProfit = pr[i] + arr[i][j - pieces[i]];
            }

            if (i > 0)
            {
                excludingCurrentPieceProfit = arr[i - 1][j];
            }

            arr[i][j] = max(includingCurrentPieceProfit, excludingCurrentPieceProfit);
        }
    }

    return arr[numberOfPieces - 1][rodLength];
}

int main()
{
    vector<int> pieces = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> pr = {1, 5, 8, 9, 10, 17, 17, 20};

    int rodLength = 8;

    cout << getMaxProfit(pieces, pr, rodLength) << endl;

    return 0;
}
