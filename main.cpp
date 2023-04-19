#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::string word, tmp;
    ifstream file;
    int count = 0;

    cout << "Input the word: ";
    cin >> word;

    file.open("words.txt");
    if (!file.is_open()){
        cerr << "File is not open!";
        return 0;
    } else {
        while (file >> tmp){
            if (tmp == word){
                count++;
            }
        }
    }
    file.close();

    cout << endl;
    cout << "The word \"" << word << "\" found " << count << " times";
    return 0;
}
