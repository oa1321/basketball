#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Team.hpp"
namespace ball_game {

    class Game {
        private:
            int home_score;
            int out_score;
            Team* winner;
            
        public:
            Game(Team* home, Team* out);

            void sethometeam();
            void setoutteam();
            int gethomescore();
            int getoutscore();
            Team* getwinner();

            void play();

    }; 
};