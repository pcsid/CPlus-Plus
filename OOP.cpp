#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        bool novel;

        Book(){
            cout << "empty contruction" << endl;
        }
        Book(string atitle, string aauthor, int apages){
            
            title = atitle;
            author = aauthor;
            pages = apages;
            isNovel();
            cout << "creating object with params" << title << author << pages << " " << novel << endl;
            
        }
        void isNovel(){
                if(pages > 500){
                    cout << "novel is true" << endl;
                    novel = true;
                }
                else;
                    novel = false;
            }

        //getter and setter
        int getPages(){
            return pages;
        }
        void setPages(int apages){
            pages = apages;
        }
};

class Comic : public Book{
    bool novel = false;
};

int main(){
    Book Book1;
    Book1.title = "The Poop Su";
    Book1.author = "Sid";
    Book1.pages = 100;
    Book1.novel = false;

    Book1.setPages(120);
    cout << Book1.getPages() << endl;
    

    cout << Book1.author << endl;

    Book Book2("The Su Poop", "Sid", 100);
    
    Comic myComic;
    myComic.setPages(200);
    cout << myComic.getPages() << endl;

    return 0;
}