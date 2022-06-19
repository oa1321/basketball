#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Game.hpp"
#include "Team.hpp"
#include "Leauge.hpp"
namespace ball_game {
    class DaySchedule{
        public:
            Game* game1;
            Game* game2;
            Game* game3;
            Game* game4;
            Game* game5;

            DaySchedule(Game* game1,Game* game2,Game* game3,Game* game4,Game* game5);
            void playday();
            void print();
    };
    class Schedule {
        private:
            std::vector<Game*> games_to_play;
            std::vector<Game*> games_played;
            std::vector<DaySchedule> days_schedule_games;
            int days;
            Leauge* leauge;
        public:
            Schedule(Leauge* leauge);
    }; 
};