#include <iostream>

using namespace std;

void AllStringReverse(string str){
        int strSize = str.length();
        for(int i = 0; i < strSize / 2; i++){
            swap(str[i], str[strSize - i - 1]);
        }
        cout << "String in reverse: " << str << endl;

}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    AllStringReverse(str);
    return 0;
}
