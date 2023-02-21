#include <iostream>
#include <vector>

using namespace std;

template<class T>
class CRUD {
    private:
        vector<T> data;
    public:
        CRUD(){

        }

        void create(T obj) {
            data.push_back(obj);
        }

        void update(int index, T obj) {
            if (index < 0 || index >= data.size()) {
                cout << "Index out of range" << endl;
                return;
            }
            data[index] = obj;
        }

        void remove(int index) {
            if (index < 0 || index >= data.size()) {
                cout << "Index out of range" << endl;
                return;
            }
            data.erase(data.begin() + index);
        }

        vector<vector<string>> getFieldValues() {
            vector<vector<string>> values;
            for (int i = 0; i < data.size(); i++) {
                values.push_back(data[i].getFieldValues());
            }
            return values;
        }

        ~CRUD(){}
};