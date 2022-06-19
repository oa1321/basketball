#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ostream>

namespace Color {
    enum Code {
        FG_BLACK    = 30,
        FG_RED      = 31,
        FG_GREEN    = 32,
        FG_YELLOW   = 33,
        FG_BLUE     = 34,
        FG_MAGENTA  = 35,
        FH_CYAN     = 36, 
        FG_WHITE    = 37,
        FG_DEFAULT  = 39,
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}

namespace ball_game {
    class Team {
        private:
            double skill;
            std::string& name;
            bool home;

        public:
            Team(std::string& name, double skill);

            void sethome(bool home);
            bool gethome();

            void setskill(double skill);
            double getskill();

            void setname(std::string& name);
            std::string& getname();

            int GetRandomScore();
            void print();
    };
};