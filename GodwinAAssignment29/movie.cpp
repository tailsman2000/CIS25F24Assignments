#include "Movie.hpp"
#include <regex>
#include <stdexcept>

// Constructor
Movie::Movie(const std::string& title, int season, int year)
    : title(title), season(season), year(year) {}

// Getters
std::string Movie::getTitle() const { return title; }
int Movie::getSeason() const { return season; }
int Movie::getYear() const { return year; }

// Function to parse the movie string
Movie parseMovieString(const std::string& movieString) {
    std::regex pattern(R"((.+?)\s+s(\d+),(\d{4}))");
    std::smatch match;

    if (std::regex_match(movieString, match, pattern)) {
        std::string title = match[1];
        int season = std::stoi(match[2]);
        int year = std::stoi(match[3]);
        return Movie(title, season, year);
    } else {
        throw std::invalid_argument("Invalid format");
    }
}
