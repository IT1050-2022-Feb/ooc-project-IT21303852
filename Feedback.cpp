#include <iostream>
#include "Feedback.h"
#include <cstring>
using namespace std;

  Feedback()
  {
    FeedbackID = " ";
    FeedbackDesk = " ";
  }

  Feedback(char pFeedbackID[] , char pFeedbackDesk[])
  {
    strcpy(FeedbackID, pFeedbackID) ;
    strcpy(FeedbackDesk , pFeedbackDesk);
  }
    
  void setFeedbackID(char pFeedbackID[])
  {
    //method implementation
  }
  void setFeedbackDesk(char pFeedbackDesk[])
  {
    //method implementation
  }

  char getFeedbackID()
  {
    //method implementation
  }
  char getFeedbackDesk()
  {
    //method implementation
  }

  ~Feedback()
  {
    //method implementation
  }