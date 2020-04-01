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
    Hyperlink cpp;
    Hyperlink python;
    Hyperlink js;
    Hyperlink java;
    Hyperlink c;
    Hyperlink r;
    Hyperlink ruby;
    Hyperlink swift;
    Hyperlink go;
    Hyperlink dart;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);
    cpp.text = "Python";
    cpp.url = "https://www.python.org/";
    languages->set_at(2, cpp);
    cpp.text = "JavaScript";
    cpp.url = "https://www.javascript.com/";
    languages->set_at(3, cpp);
    cpp.text = "Java";
    cpp.url = "https://www.java.com/";
    languages->set_at(4, cpp);
    cpp.text = "C";
    cpp.url = "https://en.cppreference.com/w/c/language";
    languages->set_at(5, cpp);
    cpp.text = "R";
    cpp.url = "https://www.r-project.org/";
    languages->set_at(6, cpp);
    cpp.text = "Ruby";
    cpp.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, cpp);
    cpp.text = "Swift";
    cpp.url = "https://developer.apple.com/swift/";
    languages->set_at(8, cpp);
    cpp.text = "Go";
    cpp.url = "https://golang.org/";
    languages->set_at(9, cpp);
    cpp.text = "Dart";
    cpp.url = "https://dart.dev/";
    languages->set_at(10, cpp);

    emoticons->add(":)","Smile");
    emoticons->add(":(","Frown");
    emoticons->add(":()","Monkey");

    emoticons->display_backward();
    languages->display_forward();



    python.text = "Python";
    python.url = "https://www.python.org/";
    languages->set_at(2, python);

    js.text = "JavaScript";
    js.url = "https://www.javascript.com/";
    languages->set_at(3, js);

    java.text = "Java";
    java.url = "https://www.java.com/en/";
    languages->set_at(4, java);

    c.text = "C";
    c.url = "https://en.cppreference.com/w/c/language";
    languages->set_at(5, c);

    r.text = "R";
    r.url = "https://www.r-project.org/";
    languages->set_at(6, r);

    ruby.text = "Ruby";
    ruby.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, ruby);

    swift.text = "Swift";
    swift.url = "https://developer.apple.com/swift/";
    languages->set_at(8, swift);

    go.text = "Go";
    go.url = "https://golang.org/";
    languages->set_at(9, go);

    dart.text = "Dart";
    dart.url = "https://dart.dev/";
    languages->set_at(10, dart);

    cout<<"Display Top Ten List from 1 to 10:\n";
    languages->display_forward();
    cout<<"\n";
    cout<<"Display Top Ten List from 10 to 1:\n";
    languages->display_backward();

    return 0;
}
