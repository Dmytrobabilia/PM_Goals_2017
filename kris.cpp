#include <iostream>
#include <string>

class Goal {

  private:
    std::string mGoal;
    bool mCompleted; //determines whether the goal has been completed or not
  public:
    Goal(std::string goalText) : mGoal(goalText) {
      mCompleted = false;
    }

    void setGoal(std::string goalText) {
      mGoal = goalText;
    }

    void completeGoal(bool goalCompletion) {
      mCompleted = goalCompletion;
    }

    void getGoal() {
      mCompleted == true ? std::cout << 'Y' : std::cout << 'N';
      std::cout << "   " << mGoal << '\n';
    }

};

int main() {

  //define goals
  Goal goal0("Get my MacBook back from repairs :(");
  Goal goal1("Learn in detail how banks work");
  Goal goal2("Suggest that we don't upload such stuff to public repositories, because, well, someone might see it and this will look goofy");
  Goal goal3("Finaly decide which programming langauge I want to specialize in, or better yet: decide what I want to programm and then choose the language for it");
  Goal goal4("Create own app / game so that I can improve it and by improving it learn all of the nuances of programming");
  Goal goal5("Visit Austria (or any other European country)");

  //modify goals

  //print goals
  std::cout << "Done | Goal text\n";

  goal0.getGoal();
  goal1.getGoal();
  goal2.getGoal();
  goal3.getGoal();
  goal4.getGoal();
  goal5.getGoal();

}
