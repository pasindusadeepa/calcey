#include <iostream>
using namespace std;

class Book{
protected:
    string title;
    string authorName;
public:
    void setTitle(){
        cout << "enter book title" << endl;
        cin >> title;
    }
    string getTitle(){
        return title;
    }
    void setAuthor(){
        cout << "enter author title" << endl;
        cin >> authorName;
    }
    string getAuthor(){ 
        return authorName;  
    }
    Book(string Title,string Authorname){
        title = Title;
        authorName = Authorname;
    }
    void printDescription(){
        cout<< "Title is " << title << endl;
        cout << "Author is " << authorName << endl;
    }
    

};

class AudioBook : public Book{
private:
    string voiceActor;
public:
    void setAuthor(string VoiceActor){
        cout << "enter Voice actor" << endl;
        cin >> voiceActor;
    }
    string getAuthor(){
        return voiceActor;
    }
    AudioBook(string Title,string Authorname,string VoiceActor):
    Book(Title,Authorname){
        voiceActor = VoiceActor;
    }
    void printDescription(){
        cout<< "Title of the book is " << title << endl;
        cout << "Author of the book is " << authorName << endl;
        cout << "Voice of the book actor is " << voiceActor << endl;
    }
};
