#include <iostream>
using namespace std;

class DanceSchool {
protected:
    int dancersCount;
    double fee;

public:
    DanceSchool(double fee) {
        this->dancersCount = 0;
        this->fee = fee;
    }

    void setDancersCount(int count) {
        if (count < 10 || count > 25) {
            cout << "Dancers should be between 10 and 25!" << endl;
        } else {
            this->dancersCount = count;
        }
    }

    int getDancersCount() const {
        return this->dancersCount;
    }

    ~DanceSchool() {
        cout << "Dancers: " << this->dancersCount << endl;
        cout << "Fee: " << this->fee << endl;
    }
};

class DanceSchoolChitalishte : public DanceSchool {
private:
    string location;

public:
    DanceSchoolChitalishte(double fee,  const string& loc) : DanceSchool(fee) {
        this->location = loc;
    }

    DanceSchoolChitalishte(): DanceSchool(0) {
        this->location = "Salona na NPG po KTS";
    }

    ~DanceSchoolChitalishte() {
        cout << "Location: " << this->location << endl;
    }
};

int main() {
    DanceSchool school1(100);
    school1.setDancersCount(5);
    school1.setDancersCount(12);

    DanceSchoolChitalishte school2(120, "Chitalishte Vuzrashdane");
    school2.setDancersCount(20);

    DanceSchoolChitalishte school3;

    return 0;
}
