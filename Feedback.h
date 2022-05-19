#include <iostream>
using namespace std;

Class Feedback{
private:
  char FeedbackID[10];
  char FeedbackDesc[100];

public:
  Feedback();

  Feedback(char FeedbackID[] , char FeedbackDesk[]);
    
  void setFeedbackID(char pFeedbackID[]);
  void setFeedbackDesk(char pFeedbackDesk[]);

  char getFeedbackID();
  char getFeedbackDesk();

  ~Feedback();
};






