#include <iostream>
#include <map>
#include <vector>
using namespace std;

void stringToMorse() {
    string inputSentence;
    cout << "Please type the message you would like to encode:" << endl;
    cin.ignore();
    getline(cin, inputSentence);

    string result;
    map<char, string> morse;
    morse['A'] = ".-"; morse['B'] = "-..."; morse['C'] = "-.-."; morse['D'] = "-.."; morse['E'] = "."; morse['F'] = "..-."; morse['G'] = "--."; morse['H'] = "...."; morse['I'] = ".."; morse['J'] = ".---"; morse['K'] = "-.-"; morse['L'] = ".-.."; morse['M'] = "--"; morse['N'] = "-."; morse['O'] = "---"; morse['P'] = ".--."; morse['Q'] = "--.-"; morse['R'] = ".-."; morse['S'] = "..."; morse['T'] = "-"; morse['U'] = "..-"; morse['V'] = "...-"; morse['W'] = ".--"; morse['X'] = "-..-"; morse['Y'] = "-.--"; morse['Z'] = "--..";
    morse['a'] = ".-"; morse['b'] = "-..."; morse['c'] = "-.-."; morse['d'] = "-.."; morse['e'] = "."; morse['f'] = "..-."; morse['g'] = "--."; morse['h'] = "...."; morse['i'] = ".."; morse['j'] = ".---"; morse['k'] = "-.-"; morse['l'] = ".-.."; morse['m'] = "--"; morse['n'] = "-."; morse['o'] = "---"; morse['p'] = ".--."; morse['q'] = "--.-"; morse['r'] = ".-."; morse['s'] = "..."; morse['t'] = "-"; morse['u'] = "..-"; morse['v'] = "...-"; morse['w'] = ".--"; morse['x'] = "-..-"; morse['y'] = "-.--"; morse['z'] = "--..";
    morse['1'] = ".----"; morse['2'] = "..---"; morse['3'] = "...--"; morse['4'] = "....-"; morse['5'] = "....."; morse['6'] = "-...."; morse['7'] = "--..."; morse['8'] = "---.."; morse['9'] = "----."; morse['0'] = "-----";
    morse[' '] = "-.-.-.-"; morse[','] = "--..--"; morse[':'] = "---..."; morse[';'] = "-.-.-."; morse['.'] = ".-.-.-"; morse['\"'] = ".-..-."; morse['('] = "-----."; morse[')'] = ".-----"; morse['\''] = "-.--.-"; morse['!'] = "-.- .--";

    for(int i = 0; i < inputSentence.length(); i++) {
        char temp = inputSentence[i];
        string tempResult = morse.at(temp);
        result += tempResult + " ";
    }

    cout << "Here is your message encoded in Morse: \n" << result << endl;
}

void ceasarsCode() {
    string inputSentence;
    int alphaShift;
    cout << "Please type the message you would like to encode:" << endl;
    cin.ignore();
    getline(cin, inputSentence);
    cout << "What index do you want to shift your message by?: " << endl;
    cin >> alphaShift;
    string encodedMessage;
    
    vector<char> alphabet {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for(int i = 0; i < inputSentence.length(); i++) {

    }
}

void userInput() {
    int userNum;

    while ((cout << "Please choose which cypher you would like to use by typing the number associated: \n(0). EXIT\n(1). Morse Code\n(2). Caesar's Code\n(3). Coming Soon..." << endl) && !(std::cin >> userNum)) {
        cout << "That's not a number!!!!\n" << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    switch (userNum) {
        case 0:
            cout << "Goodbye!" << endl;
            exit(0);
        case 1:
            stringToMorse();
            break;
        case 2:
            ceasarsCode();
            break;
        case 3:
            cout << "Woah there, this is still in development!!!" << endl;
            break;
        default:
            cout << "Please pick one of the given options!!!" << endl;
    }
}

int main() {
    userInput();
    return 0;
}
