#include <iostream>
#include <string>
using namespace std;
class StudentReport
{
private:
    string name;

    int rollNumber;
    int marks[5];

public:
    StudentReport(string name1, int rollnumber)
    {
        name = name1;
        rollNumber = rollnumber;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }
    bool setMark(int subjectIndex, int score)
    {
        if (subjectIndex >= 0 && subjectIndex < 5 && score >= 0 && score <= 100)
        {
            marks[subjectIndex] = score;
            return true;
        }

        cout << "INVALID MARKS OR SUBJECT ID ENTERED\n";
        return false;
    }
    double calculateAverage() const
    {
        double avg = 0;
        for (int i = 0; i < 5; i++)
        {
            avg += marks[i];
        }
        return avg / 5;
    }
    int getHighest() const
    {
        int a = marks[0];
        for (int i = 0; i < 5; i++)
        {
            if (marks[i] > a)
            {
                a = marks[i];
            }
        }
        return a;
    }
    void displayReportCard()
    {
        cout << "NAME OF THE STUDENT: " << name << "\n";
        cout << "ROLL NUMBER: " << rollNumber << "\n";
        cout << "THE MARKS IN SUBJECT 1 IS " << marks[0]<<"\n";
        cout << "THE MARKS IN SUBJECT 2 IS " << marks[1]<<"\n";
        cout << "THE MARKS IN SUBJECT 3 IS " << marks[2]<<"\n";
        cout << "THE MARKS IN SUBJECT 4 IS " << marks[3]<<"\n";
        cout << "THE MARKS IN SUBJECT 5 IS " << marks[4]<<"\n";
        cout << "THE AVERAGE SCORE IS " << calculateAverage()<<"\n";
        cout << "THE HIGHEST MARKS IS " << getHighest()<<"\n";
    }
};
int main()
{
    StudentReport s1("Ayush", 101);

    // Populate marks for 5 subjects
    int testScores[5] = {85, 92, 78, 90, 88};
    for (int i = 0; i < 5; i++)
    {
        s1.setMark(i, testScores[i]);
    }

    // Test out-of-bounds index (Should handle gracefully)
    s1.setMark(5, 95);

    // Test invalid mark value (Should handle gracefully)
    s1.setMark(0, 150);

    // Display summary
    s1.displayReportCard();

    return 0;
}