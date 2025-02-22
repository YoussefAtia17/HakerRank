#include <iostream>
#include <sstream>
using namespace std;

class Student {
  private:
    int _age;
    string _firstname;
    string _lastname;
    int _standerd ;
  public:
  
    void set_age(int x){
        _age = x ;
    }
    int get_age(){
        return _age ;
    }
    
    void set_first_name(string name){
        _firstname = name;
    }
    string get_first_name(){
        return _firstname;
    }
    
    void set_last_name(string name2){
        _lastname =name2;
    }
    string get_last_name(){
        return _lastname;
    }
    
    void set_standard(int st){
        _standerd = st;
    }
    
    int get_standard(){
        return _standerd ;
    }
        
    void to_string(){
        cout << _age << "," << _firstname << "," << _lastname << "," << _standerd ;
    }    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
     st.to_string();
    
    return 0;
}
