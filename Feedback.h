//created by IT21212840

#include "Guest.h"
class Feedback {
protected:
char feedbackID[5];
char feedbackdescription[45];
char feedbackview[100];
Guest* G1[];

public:
Feedback();
int getviewfeedback();
~Feedback();
};