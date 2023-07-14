#include <iostream>
#include <vector>
#include <algorithm>

int getPlayerOfTheYear(std::vector<std::vector<int>> series) {
    int playerCount = series.size();
    int periodCount = series[0].size();
    std::vector<int> tops;
    for (int i = 0; i < periodCount; i++) {
        int bestPerformance = std::numeric_limits<int>::min();
        for (int player = 0; player < playerCount; player++) {
            bestPerformance = std::max(bestPerformance, series[player][i]);
        }
        tops.push_back(bestPerformance);
    }
    int longestDuration = 0;
    int playerOfTheYear = 0;
    for (int player = 0; player < playerCount; player++) {
        int duration = 0;
        for (int i = 0; i < periodCount; i++) {
            if (series[player][i] == tops[i]) {
                duration++;
                if (duration > longestDuration) {
                    playerOfTheYear = player;
                    longestDuration = duration;
                }
            } else {
                duration = 0;
            }
        }
    }
    return playerOfTheYear;
}

int main() {
    std::vector<std::vector<int>> series = {
        {1, 3, 4, 5},
        {7, 2, 3, 4},
        {1, 3, 2, 1}
    };
    int player = getPlayerOfTheYear(series);
    std::cout << "Player of the year: " << player << std::endl;
    return 0;
}