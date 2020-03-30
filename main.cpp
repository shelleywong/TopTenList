#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
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
