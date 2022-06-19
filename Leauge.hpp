#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Game.hpp"
#include "Team.hpp"
namespace ball_game {

    class GroupStats{
        public:
            Team* team;
            double win_p;
            double loose_p;
            int diff_score;
    };

    class Leauge {
        private:
            std::vector<Team*> season_teams;
            std::vector<Game*> games_of_the_league;
            std::vector<GroupStats> team_stats;
        public:
            Leauge();
            Leauge(std::vector<Team*>);

            void setleaguegames(std::vector<Game*>);

            void printtopgroups(int amount);
            void longestwinstreak();
            void longestloosestreak();
            void printalldiffscore();
            void winmorethen(int amount);
            void lostmorethen(int amount);
            void printstats();
    }; 
};