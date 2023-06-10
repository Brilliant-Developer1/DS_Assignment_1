// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

// #include<bits/stdc++.h>
using namespace std;

int main()
{

    int input;
    cin >> input;

    int k = 1;
    int s = input - 2;
    int s1 = 0;
    int s2 = 0;

    if (input % 2 != 0)
    {
        for (int i = 1; i <= input; i++)
        {

            if (i == (input / 2) + 1)
            {
                for (int j = 1; j <= s1; j++)
                {
                    cout << " ";
                }
                cout << "X";
                for (int j = 1; j <= s2; j++)
                {
                    cout << " ";
                }
            }
            else
            {
                if (i < (input / 2) + 1)
                {
                    for (int j = 1; j <= s1; j++)
                    {
                        cout << " ";
                    }
                    for (int j = 1; j <= k; j++)
                    {
                        cout << "\\";
                    }
                    for (int j = 1; j <= s; j++)
                    {
                        cout << " ";
                    }

                    for (int u = 1; u <= k; u++)
                    {
                        cout << "/";
                    }

                    for (int j = 1; j <= s2; j++)
                    {
                        cout << " ";
                    }
                }
                else
                {
                    for (int j = 1; j <= s1; j++)
                    {
                        cout << " ";
                    }
                    for (int j = 1; j <= k; j++)
                    {
                        cout << "/";
                    }
                    for (int j = 1; j <= s; j++)
                    {
                        cout << " ";
                    }

                    for (int u = 1; u <= k; u++)
                    {
                        cout << "\\";
                    }

                    for (int j = 1; j <= s2; j++)
                    {
                        cout << " ";
                    }
                }
            }
            if (i < (input / 2) + 1)
            {
                s -= 2;
                s1++;
                s2++;
            }
            else
            {
                s += 2;
                s1--;
                s2--;
            }

            cout << endl;
        }
    }

    return 0;
}