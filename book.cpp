#include <iostream>
#include <string>
#include <vector>
#include "author.cpp"
#include "chapter.cpp"

class Book{
   private:
    int publicationYear;
    std::string title;
    std::vector <Chapter> chapters;
    Author author;
}