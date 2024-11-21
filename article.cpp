#ifndef UNTITLED1_ARTICLE_H
#define UNTITLED1_ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"   
class Article{
private:
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;
public:
Article()
: title(" "),author(Author()),publicationYear(0),journal(" "){};

Article(string articleTitle,Author articleAuthor,int publicationYear,string journalName)
:title(articleTitle),author(articleAuthor),publicationYear(publicationYear),journal(journalName){};

Article(Article, &other)
:title(other.title),author(other.author),publicationYear(other.publicationYear),journal(other.journalName){};

int getPublicationYear(){
    return publicationYear
};
Author getAuthor(){
    return author;
};
std::string getTitle(){
    return title;
};
std::string getJournalName(){
    return journal;
};
void displayInfo(){
    std:: cout<<"debiljous";
};
};
#endif