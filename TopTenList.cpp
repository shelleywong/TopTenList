//Manages a list of top ten hyperlinks using delegation
// Top 10 _list uses the functionality of vector
// (instead of inheriting from vector, delegate the functionality to vector)
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;

// initialize top ten _list
TopTenList::TopTenList()
{
  _list.resize(10);
}

//display top ten list text from 1 to 10
void TopTenList::display_forward()
{
  int i;
  for(i = 1; i <= 10; i++){
    cout<<i<<". "<<get(i).text<<" ["<<get(i).url<<"]\n";
  }
}

//display top ten list from 10 to 1
void TopTenList::display_backward()
{
  int i;
  for(i = 10; i >= 1; i--){
    cout<<i<<". "<<get(i).text<<" ["<<get(i).url<<"]\n";
  }
}

// Use the _list member variable, call the vector at() function to set index
// (place in top ten list) for the corresponding link
// top 10 list indexes at 1, normal vector indexes at 0
void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index-1) = link;
}

// Use the _list member variable, and call the vector at() function to get the
// title of the Hyperlink at the requested index
// top 10 list indexes at 1, normal vector indexes at 0
Hyperlink TopTenList::get(int index)
{
  return _list.at(index-1);
}
