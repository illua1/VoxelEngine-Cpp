#ifndef WINDOW_INPUT_H_
#define WINDOW_INPUT_H_

#include <string>

namespace keycode {
    extern int ENTER;
    extern int TAB;
    extern int SPACE;
    extern int BACKSPACE;
    extern int LEFT_CONTROL;
    extern int LEFT_SHIFT;
    extern int LEFT_ALT;
    extern int RIGHT_CONTROL;
    extern int RIGHT_SHIFT;
    extern int RIGHT_ALT;
    extern int ESCAPE;
    extern int CAPS_LOCK;
    extern int LEFT;
    extern int RIGHT;
    extern int DOWN;
    extern int UP;
    extern int F1;
    extern int F2;
    extern int F3;
    extern int F4;
    extern int F5;
    extern int F6;
    extern int F7;
    extern int F8;
    extern int F9;
    extern int F10;
    extern int F11;
    extern int F12;
    extern int A;
    extern int B;
    extern int C;
    extern int D;
    extern int E;
    extern int F;
    extern int G;
    extern int H;
    extern int I;
    extern int J;
    extern int K;
    extern int L;
    extern int M;
    extern int N;
    extern int O;
    extern int P;
    extern int Q;
    extern int R;
    extern int S;
    extern int T;
    extern int U;
    extern int V;
    extern int W;
    extern int X;
    extern int Y;
    extern int Z;
    extern int NUM_0;
    extern int NUM_1;
    extern int NUM_2;
    extern int NUM_3;
    extern int NUM_4;
    extern int NUM_5;
    extern int NUM_6;
    extern int NUM_7;
    extern int NUM_8;
    extern int NUM_9;
    extern int MENU;
    extern int PAUSE;
    extern int INSERT;
    extern int LEFT_SUPER;
    extern int RIGHT_SUPER;
    extern int DELETE;
    extern int PAGE_UP;
    extern int PAGE_DOWN;
    extern int HOME;
    extern int END;
    extern int PRINT_SCREEN;
    extern int NUM_LOCK;
    extern int LEFT_BRACKET;
    extern int RIGHT_BRACKET;

    extern const std::string name(int code);
}

namespace mousecode {
    extern int BUTTON_1;
    extern int BUTTON_2;
    extern int BUTTON_3;

    extern const std::string name(int code);
}

enum class inputtype {
    keyboard,
    mouse,
};

struct Binding {
    inputtype type;
    int code;
    bool state = false;
    bool justChange = false;

    bool active() const {
        return state; 
    }

    bool jactive() const {
        return state && justChange;
    }

    const std::string text() const {
        switch (type) {
            case inputtype::keyboard: return keycode::name(code);
            case inputtype::mouse: return mousecode::name(code);
        }
        return "<unknown input type>";
    }
};


#endif // WINDOW_INPUT_H_