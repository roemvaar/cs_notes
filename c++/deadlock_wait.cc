// deadlock_wait.cc

#include <iostream>
#include <mutex>
#include <string>
#include <thread>

std::mutex cout_mutex;

int main()
{
	std::thread t([] {
		std::cout << "Still waiting..." << std::endl;
		std::lock_guard<std::mutex> lock_guard(cout_mutex);
		std::cout << "child: " << std::this_thread::get_id() << std::endl;
		}
	);

	// t.join();

	{
		std::lock_guard<std::mutex> lock_guard(cout_mutex);
		std::cout << "creator: " << std::this_thread::get_id() << std::endl;
		t.join();
	}

	return 0;
}

