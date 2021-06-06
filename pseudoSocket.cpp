#include<iostream>
#include<string>

//This is a pseudo code for socket

int getSocket() {
	int s;

	s = socket(AF_NET, SOCK_DGRAM, 0);
	if (s == -1)
		perror("socket failed");
	else {
		cout << "socket success" << endl;
		close(s);
	}
	return s;
}
