import java.util.ArrayList;
import java.util.Scanner;

class Task {
    private String name;
    private String description;
    private String dueDate;

    // Constructor
    public Task(String name, String description, String dueDate) {
        this.name = name;
        this.description = description;
        this.dueDate = dueDate;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public String getDescription() {
        return description;
    }

    public String getDueDate() {
        return dueDate;
    }

    // toString method to display task information
    @Override
    public String toString() {
        return "Task: " + name + "\nDescription: " + description + "\nDue Date: " + dueDate;
    }
}

class TaskManager {
    private ArrayList<Task> tasks;

    public TaskManager() {
        tasks = new ArrayList<>();
    }

    // Add a task to the list
    public void addTask(String name, String description, String dueDate) {
        tasks.add(new Task(name, description, dueDate));
        System.out.println("Task added successfully!");
    }

    // View all tasks
    public void viewTasks() {
        if (tasks.isEmpty()) {
            System.out.println("No tasks available.");
        } else {
            for (Task task : tasks) {
                System.out.println(task);
                System.out.println("-----------------------------");
            }
        }
    }

    // Delete a task by name
    public void deleteTask(String taskName) {
        boolean found = false;
        for (Task task : tasks) {
            if (task.getName().equalsIgnoreCase(taskName)) {
                tasks.remove(task);
                System.out.println("Task '" + taskName + "' deleted successfully!");
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Task not found!");
        }
    }
}

public class TaskPlannerSystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        TaskManager taskManager = new TaskManager();
        int choice;

        do {
            System.out.println("\nTask Planner System");
            System.out.println("1. Add a Task");
            System.out.println("2. View All Tasks");
            System.out.println("3. Delete a Task");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            scanner.nextLine();  // Consume newline character

            switch (choice) {
                case 1:
                    // Add a new task
                    System.out.print("Enter Task Name: ");
                    String name = scanner.nextLine();
                    System.out.print("Enter Task Description: ");
                    String description = scanner.nextLine();
                    System.out.print("Enter Due Date (YYYY-MM-DD): ");
                    String dueDate = scanner.nextLine();
                    taskManager.addTask(name, description, dueDate);
                    break;

                case 2:
                    // View all tasks
                    taskManager.viewTasks();
                    break;

                case 3:
                    // Delete a task
                    System.out.print("Enter Task Name to delete: ");
                    String taskName = scanner.nextLine();
                    taskManager.deleteTask(taskName);
                    break;

                case 4:
                    System.out.println("Exiting the system.");
                    break;

                default:
                    System.out.println("Invalid choice, please try again.");
            }
        } while (choice != 4);

        scanner.close();
    }
}
