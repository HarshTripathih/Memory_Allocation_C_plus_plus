#include <iostream>
using namespace std;
class Doctor{
    private:
        int id, salary;
        string name, specialization;
    public:
      
        Doctor(int id, int sal, string name, string special){
            get_data(id, sal, name, special);
        }
        void get_data(int id, int sal, string n, string special){
            this->id = id;
            salary = sal;
            name = n;
            specialization = special;
        }
        void show_data(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Specialization: "<<get_specialization()<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
        string get_specialization(){
            return specialization;
        }
};
int main(){
    string name, special;
    int id, salary;
    cout<<"Input number of doctors: ";
    int number; cin>>number;
    Doctor *drs[number];
    for(int i = 0; i < number; i++){
        cout<<"\nInput doctor name "<<i + 1<<endl;
        cin>>name;
        cout<<"Input doctor id "<<endl;
        cin>>id;
        cout<<"Input salary "<<endl;
        cin>>salary;
        cout<<"Input specialization "<<endl;
        cin>>special;
        drs[i] = new Doctor(id, salary, name, special);
    }
    for(int i = 0; i < number; i++){
        cout<<"\nDoctor "<<i + 1<<endl;
        drs[i]->show_data();
    }
    return 0;
}