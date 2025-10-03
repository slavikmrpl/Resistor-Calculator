#include <iostream>
#include <string>

using namespace std;

double I;
double V_led;
double V_set;

double P;
double R;

void raschet(){
    R = (V_set - V_led) /I;
    P = (V_set - V_led) * I;
    
    cout << "Треба резистор з опором: " << R << " Ω" << endl;
    cout << "Росіюється на резисторі: " << P << " В" << endl;
    
    cout << endl;
    cout << endl;
    
    
    cout << "Схема підключення:" << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "                  / / " << endl;
    cout << endl;
            cout << "        \033[31m  + \033[0m    |\\  |      -      " << endl;
    cout << "\033[31m    |-----------\033[0m| \\ |-----------|" << endl;
    cout << "\033[31m    |     +    \033[0m | / |      -    |" << endl;
    cout << "\033[31m    |         \033[0m  |/  |           |" << endl;
    cout << "\033[31m    |               \033[0m                  " << endl;
    cout <<"    |   "   << endl;
    cout <<  "  __|__"    << endl;
    cout << " |     |  " << endl;
    cout << " |     |  " << endl;
    cout << " |  R  |  " << R << "Ω" << endl;
    cout << " |     |  " << endl;
    cout << " |     |  " << endl;
    cout << " |--|--|"   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
}

void raschet_en(){
    R = (V_set - V_led) /I;
    P = (V_set - V_led) * I;
    
    cout << "You need a resistor with a resistance of: " << R << " Ω" << endl;
    cout << "Resists on the resistor: " << P << " W" << endl;
    
    cout << endl;
    cout << endl;
    
    
    cout << "Connection diagram:" << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "                  / / " << endl;
    cout << endl;
            cout << "        \033[31m  + \033[0m    |\\  |      -      " << endl;
    cout << "\033[31m    |-----------\033[0m| \\ |-----------|" << endl;
    cout << "\033[31m    |     +    \033[0m | / |      -    |" << endl;
    cout << "\033[31m    |         \033[0m  |/  |           |" << endl;
    cout << "\033[31m    |               \033[0m                  " << endl;
    cout <<"    |   "   << endl;
    cout <<  "  __|__"    << endl;
    cout << " |     |  " << endl;
    cout << " |     |  " << endl;
    cout << " |  R  |  " << R << "Ω" << endl;
    cout << " |     |  " << endl;
    cout << " |     |  " << endl;
    cout << " |--|--|"   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
    cout <<"    |   "   << endl;
}






int main() {
    bool is_English = false;
    string act;
    
    cout << "Вас вітає програма калькулятор опору!" << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "Виберіть мову (Ua/En)" << endl;
    cout << "Select your language (Ua/En)" << endl;
    getline(cin, act);
    
    if (act == "En" || act == "en") {
        is_English = true;
    }
    
    
    
//I
    cout << "I(led) = ";
    cin >> I;
    
//    V_led
    
    cout << "V_led = ";
    cin >> V_led;
    
//    V_s
    cout << "V_s = ";
    cin >> V_set;
    
    if(!is_English){
        raschet();
    }
    
    else {
        raschet_en();
    }
    
    return 0;
}
