﻿#include <iostream>
#include "console++.h"
using namespace std;

int main() {
    cout << "raw" << endl;
    bold();
    cout << "bold" << endl;
    reset();
    bokeh();
    cout << "bokeh" << endl;
    reset();
    italic();
    cout << "italic" << endl;
    reset();
    underline();
    cout << "underline" << endl;
    reset();
    flashing();
    cout << "flashing" << endl;
    reset();
    inverted();
    cout << "inverted" << endl;
    reset();
    invisible();
    cout << "invisible" << endl;
    reset();
    strikethrough();
    cout << "strikethrough" << endl;
    reset();
    black();
    cout << "black" << endl;
    reset();
    blackbg();
    cout << "blackbg" << endl;
    reset();
    red();
    cout << "red" << endl;
    reset();
    redbg();
    cout << "redbg" << endl;
    reset();
    green();
    cout << "green" << endl;
    reset();
    greenbg();
    cout << "greenbg" << endl;
    reset();
    yellow();
    cout << "yellow" << endl;
    reset();
    yellowbg();
    cout << "yellowbg" << endl;
    reset();
    blue();
    cout << "blue" << endl;
    reset();
    bluebg();
    cout << "bluebg" << endl;
    reset();
    magenta();
    cout << "magenta" << endl;
    reset();
    magentabg();
    cout << "magentabg" << endl;
    reset();
    cyan();
    cout << "cyan" << endl;
    reset();
    cyanbg();
    cout << "cyanbg" << endl;
    reset();
    white();
    cout << "white" << endl;
    reset();
    whitebg();
    cout << "whitebg" << endl;
    reset();
    return 0;
}