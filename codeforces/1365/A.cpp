// Matrix Game
// Problem Set: 1365
// https://codeforces.com/contest/1365/problem/A

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int numQueries;
    cin >> numQueries;
    while (numQueries--)
    {
        int m, n;
        cin >> m >> n;

        unordered_set<int> columns;
        unordered_set<int> rows;

        int test[n][m];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int input;
                cin >> input;
                if (input == 1)
                {
                    columns.insert(j);
                    rows.insert(i);
                }

                test[j][i] = input;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << test[j][i] << ' ';
            }
            cout << '\n';
        }

        int num_columns = m - columns.size();
        int num_rows = n - rows.size();

        if (num_columns == 0 && num_rows == 0)
        {
            cout << "Vivek\n";
            continue;
        }

        if (num_columns == 0 || num_rows == 0)
        {
            cout << "Ashish\n";
            continue;
        }

        int min_partition_size = min(num_columns, num_rows);

        cout << ((min_partition_size % 2 == 1) ? "Ashish" : "Vivek") << '\n';
    }

    return 0;
}