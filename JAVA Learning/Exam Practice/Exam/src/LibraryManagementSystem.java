
package librarymanagementsystem;
import java.util.ArrayList;
import java.util.Scanner;

public class LibraryManagementSystem {

    static ArrayList<String> books = new ArrayList<>();
    static ArrayList<Integer> bookIds = new ArrayList<>();

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            boolean exit = false;
            
            while (!exit) {
                System.out.println("1. Add a book");
                System.out.println("2. Remove a book");
                System.out.println("3. Search for a book");
                System.out.println("4. List all books");
                System.out.println("5. Exit");
                
                System.out.print("Enter your choice: ");
                int choice = scanner.nextInt();
                
                switch (choice) {
                    case 1 -> addBook();
                    case 2 -> removeBook();
                    case 3 -> searchBook();
                    case 4 -> listBooks();
                    case 5 -> {
                        exit = true;
                        System.out.println("Exiting the program...");
                    }
                    default -> System.out.println("Invalid choice! Please enter a number between 1 and 5.");
                }
                
                System.out.println();
            }
        }
    }

    private static void addBook() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter book name: ");
        String bookName = scanner.nextLine();
        System.out.print("Enter book ID: ");
        int bookId = scanner.nextInt();

        books.add(bookName);
        bookIds.add(bookId);

        System.out.println("Book added successfully!");
    }

    private static void removeBook() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter book name: ");
        String bookName = scanner.nextLine();
        System.out.print("Enter book ID: ");
        int bookId = scanner.nextInt();

        int index = -1;

        for (int i = 0; i < books.size(); i++) {
            if (books.get(i).equals(bookName) && bookIds.get(i) == bookId) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            System.out.println("Book not found!");
        } else {
            books.remove(index);
            bookIds.remove(index);
            System.out.println("Book removed successfully!");
        }
    }

    private static void searchBook() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter book name: ");
        String bookName = scanner.nextLine();
        System.out.print("Enter book ID: ");
        int bookId = scanner.nextInt();

        int index = -1;

        for (int i = 0; i < books.size(); i++) {
            if (books.get(i).equals(bookName) && bookIds.get(i) == bookId) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            System.out.println("Book not found!");
        } else {
            System.out.println("Book founded :  " + bookName);
        }
    }

    private static void listBooks() {
        System.out.println("List of books:");

        for (int i = 0; i < books.size(); i++) {
            System.out.println("Book name: " + books.get(i) + ", Book ID: " + bookIds.get(i));
        }
    }
}



    

