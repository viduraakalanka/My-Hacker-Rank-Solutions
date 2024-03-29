#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
public: 
    Message() {
        id++;
        my_id = id;
    }
    
    Message(const string& txt){
        id++;
        my_id = id;
        stored_message = txt;
    }
    const string& get_text() {
        return stored_message;
    }
    
   friend bool operator<(const Message & msg1 , const Message & msg2) ;
    
private:
    std::string stored_message;
    static int id;
    int my_id;
};

int Message :: id =0;

bool operator<(const Message & msg1 , const Message & msg2){
            if (msg1.my_id<msg2.my_id) return true;
            else return false;
            
    }

class MessageFactory {
public:
    MessageFactory() {}
    
    Message create_message(const string& text) {
        Message msg1(text);
        return msg1;
    }

};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
