#include <string>
#include <thread>

using namespace std;

class DirManager
{
    private:
        void watching_task(string path);
        bool stop_flag = false;
        int count_items(string path);
        thread* obj_linked_thd;

    public:
        ~DirManager();

        static void check_dirs();
        bool start_watching(string path);
        void stop_watching();
};