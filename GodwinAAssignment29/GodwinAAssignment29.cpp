#include <iostream>
#include "Movie.hpp"

int main() {
    std::string movieString = "24 s2,2014";
    try {
        Movie movie = parseMovieString(movieString);
        std::cout << "Title: " << movie.getTitle()
                  << ", Season: " << movie.getSeason()
                  << ", Year: " << movie.getYear() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
