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

    int input_1;
    cin >> input_1;
    vector<int> array(input_1);
    for (int i = 0; i < input_1; i++)
    {
        cin >> array[i];
    }

    int input_2;
    cin >> input_2;
    vector<int> array2(input_2);
    for (int i = 0; i < input_2; i++)
    {
        cin >> array2[i];
    }

    int input_x;
    cin >> input_x;

    array.insert(array.begin() + input_x, array2.begin(), array2.end());

    for (int i = 0; i < input_1 + input_2; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}