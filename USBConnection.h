#include <iostream>
#include <stack>

class USBConnection {
    private:
    int id;
    USBConnection(int id) : id(id) {}

    public:
    ~USBConnection() {USBConnection::ids.push(id);}
    static std::stack<int> ids;
    static USBConnection*CreateUsbConnection(){
        if (USBConnection::ids.empty()){
            return nullptr;
        } else {
            int id = USBConnection::ids.top();
            USBConnection::ids.pop();
            return new USBConnection(id);
        }
    }
    int get_id(){
        return USBConnection::id;
    }

};
std::stack<int> USBConnection::ids({3, 2, 1});