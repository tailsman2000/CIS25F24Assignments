#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

class Movie {
public:
    // Constructor
    Movie(const std::string& title, int season, int year);

    // Getters
    std::string getTitle() const;
    int getSeason() const;
    int getYear() const;

private:
    std::string title;
    int season;
    int year;
};

// Function to parse movie string
Movie parseMovieString(const std::string& movieString);

#endif // MOVIE_HPP
