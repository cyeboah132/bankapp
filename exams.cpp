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
    int ID[number_of_todo];

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
                option();
            }
        }
        std::cout << "Enter the title of the task: \n";
        getline(std::cin >> std::ws, title);

        std::cout << "Enter the Task to be added: \n";
        getline(std::cin >> std::ws, task);

        addTask(task, title, id);
    }

    void addTask(std::string task, std::string title, int id);
    void updateTask(std::string task, std::string title, int id);
    void deleteTask(std::string task, std::string title, int id);
    void showTask(std::string list, int n);

    void option()
    {
        int choice = 0;
        std::cout << "Enter a choice to select: \n";
        std::cout << "1. Add Task \n 2. Update Task \n 3. Delete Task \n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            addTask(std::string task, std::string title, int id);
            break;
        case 2:
            updateTask(std::string task, std::string title, int id);
            break;
        case 3:
            deleteTask(std::string task, std::string title, int id);
            break;
        default:
            std::cout << "You entered a wrong choice\n";
            void showTask(std::string list, int n);
        }
    }

    void addTask(std::string task, std::string title, int id)
    {
        ListOfItems[number_of_todo].append(task);
        id = ID[0];
        std::cout << "title \t" << title << " has been added sucessfully " << std::endl;
    }
    void updateTask(std::string task, std::string title, int id)
    {
        showTask(std::string list, int n);
        std::cout << "Enter the id of the task you want to delete: ";
        std::cin >> id;

        if (id in ID[] && id == ID[0])
        {
            std::cout << " Enter the new title\n";
            std::cin >> title;
            std::cout << "Update the task: ";
            std::cin >> task;
            id == ID[0];
        }

        std::cout << "Title" << title << " has been added sucessfully at ID " << id << std::endl;
    }

    void deleteTask(std::string task, std::string title, int id)
    {
        int choice = 0;
        showTask(std::string list, int n);
        std::cout << "Enter the ID of the task you want to delete: \n";
        std::cin >> id;

        std::cout << "Are you sure you want to delete " << title << " from task \n 1. Yes 2. No";
        std::cin >> choice;

        if (choice == 1)
        {
            ListOfItems[number_of_todo].remove(ListOfItems[0]);
            showTask(std::string list, int n);
        }
        else if (choice == 2)
        {
            return;
        }
        else
        {
            std::cout << "Invalid task";
        }
    }

    void showTask(std::string list, int n)
    {
        for (int i = 0; i < number_of_todo; i++)
        {
            ListOfItems[id][i];
        }
    }
};

int main()
{
    getInput();
    return 0;
}