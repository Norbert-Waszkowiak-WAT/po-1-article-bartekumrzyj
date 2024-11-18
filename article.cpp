
#include <iostream>
#include <string>
#include "author.cpp"   
class Article{
private:
    std::string title;
    Author author;
    int publicationyear;
    std::string journal;
public:
Article()
: title(" "),author(Author()),publicationyear(0),journal(" "){};
Article(string articletitle,Author articleauthor,int publicationyear,string journalname)
:title(articletitle),author(articleauthor),publicationyear(publicationyear),journal(journalname)
Article(Article,&other)
:title(other.title),author(other.author),publicationyear(other.publicationyear),journal(other.journalname)

int getpublicationyear(){
    return publicationyear
};
Author getauthor(){
    return author;
};
std::string gettitle(){
    return title;
};
void displayInfo(){
    std:: cout<<"debiljous";
};
};
#endif