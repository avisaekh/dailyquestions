#include <iostream>

using namespace std;
/*WAP to define a class Time that has 3 data members for hours, minutes and second. Include member functions :
1. void getTime() - To input time
2. void sum(time, time) - To add 2 different time
3. void display() - To display the resultant time*/

class time
{
   private:
       int hours, minutes, seconds;
       int sumHours,sumMinutes, sumSeconds;

   public:


    void getTime()
    {
        cout<<"ENTER TIME IN HOURS, MINUTES AND SECONDS"<<endl;
        cout<<"Hours :";
        cin>>hours;
        cout<<endl;
        cout<<"minutes :";
        cin>>minutes;
        cout<<endl;
        cout<<"seconds :";
        cin>>seconds;
        cout<<endl;
    }
    void sum(time t1, time t2)
    {
        int a1,a2,b1,b2;
        sumHours=t1.hours+t2.hours;
        sumMinutes=t1.minutes+t2.minutes;
        if (sumMinutes>=60)
        {
           a1=sumMinutes/60;
           b1=sumMinutes%60;
           sumHours=sumHours+a1;
           sumMinutes=b1;
        }
        sumSeconds=t1.seconds+t2.seconds;
             if (sumSeconds>=60)
        {
           a2=sumSeconds/60;
           b2=sumSeconds%60;
           sumMinutes=sumMinutes+a2;
           sumSeconds=b2;
        }
        }


   void display()
    {
        cout<<"the restultant sum of given time is :"<<sumHours<<"  hours   "<< sumMinutes<<"   Minutes  " <<sumSeconds<<"  seconds"<<endl;
    }
};
int main()
{
    time ktm, t1, t2;
    t1.getTime();
    t2.getTime();
    ktm.sum(t1,t2);
    ktm.display();
    return 0;
}

