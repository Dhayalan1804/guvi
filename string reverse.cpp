#include<string.h>
#include <sstream.h>
#include <vector.h>
#include <algorithm.h>
#include <iterator.h>
#include <iostream.h>
using namespace std;
void ReverseWords(char* str)
{
    vector<string> words;
    istringstream iss(str);
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(words));
    ostringstream oss;
    copy(words.rbegin(), words.rend(), ostream_iterator<string>(oss, " "));
    copy_n(&oss.str().front(), oss.str().length() - 1, str);
}
int main()
{
    char str[] = "the house is blue";
    cout << str << endl;
    ReverseWords(str);
    cout << str << endl;
    return 0;
}
