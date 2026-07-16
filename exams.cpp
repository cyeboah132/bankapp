#include <iostream>
#include <ctime>
#include <string>

class Todo
{
private:
    std::string full_name;

public:
    enum Status
    {
        completed,
        incomplete,
        deleted,
        current
    };
    int number_of_task = 0;
    int number_of_todo = 100;
    Status status;
    std::string ListOfItems[number_of_todo];

    // contructors
    Todo(std::string title, std::string task, int id)
    {
        title = "";
        task = "";
        id = 0;
    }

    // methods
    void getInput()
    {
        for (int i = 0; i < number_of_task; i++)
        {
            do
            {
                std::cout << "Enter the title of the task: \n";
                getline(std::cin >> std::ws, title);

                std::cout << "Enter the Task to be added: \n";
                getline(std::cin >> std::ws, task);

                std::cout << "Title \t" << title << std::endl;
                std::cout << "Task \t" << task << std::endl;

                std::cout << "task has been added sucessfully";
            }
        }
        std::cout << "Enter the title of the task: \n";
        getline(std::cin >> std::ws, title);

        std::cout << "Enter the Task to be added: \n";
        getline(std::cin >> std::ws, task);

        addTask(task, title, id);
    }

    void addTask(std::string task, std::string title, int id);
    void updateTask(std::string, int id);
    void deleteTask(std::string, int id);
    void showTask(std::string list, int n);
    void menu()
    {
    }
};

int main()
{
    return 0;
}