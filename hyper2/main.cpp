#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"
#include "Gallery.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
    Gallery* emoticons = new Gallery();
    Hyperlink hl;

    hl.text = "C++";
    hl.url = "https://www.cplusplus.com/";
    languages->set_at(1, hl);
    hl.text = "Python";
    hl.url = "https://www.python.org/";
    languages->set_at(2, hl);
    hl.text = "JavaScript";
    hl.url = "https://www.javascript.com/";
    languages->set_at(3, hl);
    hl.text = "Java";
    hl.url = "https://www.java.com/";
    languages->set_at(4, hl);
    hl.text = "C";
    hl.url = "https://en.hlreference.com/w/c/language";
    languages->set_at(5, hl);
    hl.text = "R";
    hl.url = "https://www.r-project.org/";
    languages->set_at(6, hl);
    hl.text = "Ruby";
    hl.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, hl);
    hl.text = "Swift";
    hl.url = "https://developer.apple.com/swift/";
    languages->set_at(8, hl);
    hl.text = "Go";
    hl.url = "https://golang.org/";
    languages->set_at(9, hl);
    hl.text = "Dart";
    hl.url = "https://dart.dev/";
    languages->set_at(10, hl);

    emoticons->add(":)","Smile");
    emoticons->add(":(","Frown");
    emoticons->add(":()","Monkey");
    
    cout<<"Top 10 Languages\n";
    cout<<"Display forward:\n";
    languages->display_forward();
    cout<<"Display backward:\n";
    emoticons->display_backward();

    return 0;
}
