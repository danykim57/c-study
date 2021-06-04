#include <iostream>


void fork() {
	//here goes code for fork.
}
int main(){
	int pid;
	std::cout << "Example of fork() function" << std::endl;
	pid = fork();
	if (pid == 0) {
		std::cout << "This is a child process" << std::endl;
	}

	else {
		std::cout << "This is a parent process" << std::endl;
	}
	return 0;
}
