//created by IT21212840

#include "Feedback.h"
#include <cstring>
#include <iostream>

using namespace std;

Feedback::Feedback()
{
  strcpy(feedbackID,"");
  strcpy(feedbackdescription,"");
  strcpy(feedbackview,"");
}

int Feedback:: getviewfeedback() {
    return feedbackview[45];
}
Feedback::~Feedback() { //Destructor

};