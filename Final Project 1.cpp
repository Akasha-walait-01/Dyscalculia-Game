#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip> // for setting decimal precision
#include <cmath>   // for fabs function
using namespace std;

// Function to set text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Custom function to convert integer to string (replacing to_string)
string intToString(int num) {
    string result = "";
    if (num == 0) {
        result = "0";
    } else {
        while (num > 0) {
            result = char(num % 10 + '0') + result;
            num /= 10;
        }
    }
    return result;
}

// Function to display welcome message
void displayWelcomeMessage() {
    system("cls");
    setColor(14); // Yellow text for border
    cout << "          ==========================================================" << endl;
    setColor(10); // Light green text for title
    cout << "              W   W   EEEE   L       CCCC   OOO   M   M   EEEE" << endl;
    cout << "              W   W   E      L      C      O   O  MM MM   E   " << endl;
    cout << "              W W W   EEEE   L      C      O   O  M M M   EEEE" << endl;
    cout << "              WW WW   E      L      C      O   O  M   M   E   " << endl;
    cout << "              W   W   EEEE   LLLLL   CCCC   OOO   M   M   EEEE" << endl;
    setColor(14); // Yellow text for border
    cout << "          ==========================================================" << endl;

    setColor(11); // Cyan text for welcome message
    cout << "         ********** Welcome to Dyscalculia Game! **********" << endl;
    setColor(13); // Purple text for tagline
    cout << "         The fun way to improve your math skills!" << endl;
    setColor(15); // White text for instructions
    cout << "         Choose your level to start!" << endl;
    cout << endl;
}

// Function to display level menu
void displayLevelMenu() {
    setColor(14); // Yellow text for menu heading
    cout << "        ==================== Level Menu ====================" << endl;

    setColor(10); // Light green for menu options
    cout << "        1. Easy" << endl;
    setColor(11); // Light cyan
    cout << "        2. Medium" << endl;
    setColor(12); // Light red
    cout << "        3. Hard" << endl;
    setColor(14); // Yellow
    cout << "        4. View Progress" << endl;
    setColor(9); // Blue
    cout << "        5. View History" << endl;
    setColor(13); // Purple
    cout << "        6. Guide Line" << endl;
    setColor(6); // Brown
    cout << "        7. View Solutions" << endl;
    setColor(8); // Gray
    cout << "        8. Exit" << endl;

    setColor(15); // White
    cout << "        ====================================================" << endl;
}
// Function to display solutions for all levels
void viewSolutions() {
    setColor(15); // White text
    cout << "****** Easy Level Solutions ******" << endl;
    
    struct Question {
        string questionText;
        int correctAnswer;
    };
    
    Question easyQuestions[10] = {
        {"What is 5 + 3?", 8},
        {"What is 9 - 4?", 5},
        {"What is 6 * 2?", 12},
        {"What is 8 / 2?", 4},
        {"What is 7 + 1?", 8},
        {"What is 5 - 2?", 3},
        {"What is 3 * 3?", 9},
        {"What is 12 / 4?", 3},
        {"What is 15 - 6?", 9},
        {"What is 2 * 4?", 8}
    };
    
    for (int i = 0; i < 10; i++) {
        setColor(11); // Light cyan for questions
        cout << easyQuestions[i].questionText << " ";
        setColor(10); // Light green for answers
        cout << "Answer: " << easyQuestions[i].correctAnswer << endl;
    }

    cout << endl;

    setColor(15); // White text
    cout << "****** Medium Level Solutions ******" << endl;
    
    Question mediumQuestions[10] = {
        {"What is 5.5 + 3.3?", 8.8},
        {"What is 9.7 - 4.2?", 5.5},
        {"What is 6.4 * 2.5?", 16.0},
        {"What is 8.0 / 2.0?", 4.0},
        {"What is 7.5 + 1.5?", 9.0},
        {"What is 5.2 - 2.1?", 3.1},
        {"What is 3.3 * 3.1?", 10.23},
        {"What is 12.5 / 4.0?", 3.125},
        {"What is 15.6 - 6.3?", 9.3},
        {"What is 2.4 * 4.0?", 9.6}
    };
    
    for (int i = 0; i < 10; i++) {
        setColor(14); // Yellow for questions
        cout << mediumQuestions[i].questionText << " ";
        setColor(12); // Light red for answers
        cout << "Answer: " << mediumQuestions[i].correctAnswer << endl;
    }

    cout << endl;

    setColor(15); // White text
    cout << "****** Hard Level Solutions ******" << endl;
    
    Question hardQuestions[10] = {
        {"What is (5 + 3) * 2?", 16},
        {"What is (9 - 4) * (2 + 3)?", 25},
        {"What is (6 + 2) * (5 - 3)?", 16},
        {"What is (8 / 4) + 3?", 5},
        {"What is (7 * 2) - 4?", 10},
        {"What is (12 + 6) / 3?", 6},
        {"What is (15 - 3) * 2?", 24},
        {"What is (6 * 3) + 4?", 22},
        {"What is (8 / 2) * (4 + 2)?", 24},
        {"What is (2 + 6) * 4?", 32}
    };
    
    for (int i = 0; i < 10; i++) {
        setColor(13); // Purple for questions
        cout << hardQuestions[i].questionText << " ";
        setColor(9); // Blue for answers
        cout << "Answer: " << hardQuestions[i].correctAnswer << endl;
    }

    cout << endl;
    setColor(15); // White text
    cout << "Press any key to return to the main menu...";
    cin.ignore();
    cin.get();
}


// Function to display guide line
void displayGuideLine() {
    setColor(15); // White text
    cout << "****** Dyscalculia Game Guide Line ******" << endl;
    setColor(9);  // Blue text
    cout << "1. Choose a level (Easy, Medium, Hard)." << endl;
    setColor(11); // Light cyan text
    cout << "2. Answer the math problems to the best of your ability." << endl;
    setColor(13); // Light purple text
    cout << "3. Get feedback after each question." << endl;
    setColor(10); // Light green text
    cout << "4. View your progress after playing a level." << endl;
    setColor(6);  // Orange text
    cout << "5. Review your history to see the answers you've given." << endl;
    setColor(5);  // Purple text
    cout << "6. Have fun while learning math!" << endl;
    cout << endl;
    setColor(15); // White text
    cout << "Press any key to return to the main menu...";
    cin.ignore();
    cin.get();
}

// Function to display progress
void viewProgress(int easyStars, int mediumStars, int hardStars) {
    setColor(15); // White text
    cout << "****** Your Progress ******" << endl;
    setColor(10); // Light green text
    cout << "Easy Level: " << easyStars << " Stars" << endl;
    setColor(9);  // Blue text
    cout << "Medium Level: " << mediumStars << " Stars" << endl;
    setColor(12); // Red text
    cout << "Hard Level: " << hardStars << " Stars" << endl;
    cout << endl;
    setColor(15); // White text
    cout << "Press any key to return to the main menu...";
    cin.ignore();
    cin.get();
}

// Function to display history (Updated to show all questions, their answers, and whether correct or incorrect)
void viewHistory(const string history[], int historyCount) {
    setColor(15); // White text
    cout << "****** Your History ******" << endl;
    if (historyCount == 0) {
        cout << "No history available." << endl;
    } else {
        for (int i = 0; i < historyCount; i++) {
            setColor(11); // Light cyan text
            cout << history[i] << endl;
        }
    }
    cout << endl;
    setColor(15); // White text
    cout << "Press any key to return to the main menu...";
    cin.ignore();
    cin.get();
}

// Function to play the easy level
void easyLevel(int &easyStars, string history[], int &historyCount, int numQuestions) {
    setColor(9);  // Blue text for easy level
    cout << "You are playing the EASY level!" << endl;

    // Array of 10 questions for easy level with basic operations
    struct Question {
        string questionText;
        int correctAnswer;
    };

    Question questions[10] = {
        {"What is 5 + 3?", 8},
        {"What is 9 - 4?", 5},
        {"What is 6 * 2?", 12},
        {"What is 8 / 2?", 4},
        {"What is 7 + 1?", 8},
        {"What is 5 - 2?", 3},
        {"What is 3 * 3?", 9},
        {"What is 12 / 4?", 3},
        {"What is 15 - 6?", 9},
        {"What is 2 * 4?", 8}
    };

    int correctAnswers = 0;

    // Loop through and ask questions based on user input for number of questions
    for (int i = 0; i < numQuestions; i++) {
        setColor(14); // Yellow text for question
        cout << questions[i].questionText << " ";
        int userAnswer;
        cin >> userAnswer;

        // Log the question and answer in history
        if (userAnswer == questions[i].correctAnswer) {
            easyStars += 2;  // Earn 2 stars for correct answer
            correctAnswers++;
            history[historyCount++] = "Easy level - Correct: " + questions[i].questionText + " = " + intToString(questions[i].correctAnswer) + " Your answer: " + intToString(userAnswer);
            setColor(10); // Green text for correct
            cout << "Your answer is correct!" << endl;
        } else {
            history[historyCount++] = "Easy level - Incorrect: " + questions[i].questionText + " = " + intToString(questions[i].correctAnswer) + " Your answer: " + intToString(userAnswer);
            setColor(12); // Red text for incorrect
            cout << "Oops! That's incorrect. The correct answer is: " << questions[i].correctAnswer << endl;
        }

        // Show the result for each question immediately after answering
        setColor(15); // White text
        cout << "Question: " << questions[i].questionText << endl;
        cout << "Your answer: " << userAnswer << endl;
        cout << "Correct answer: " << questions[i].correctAnswer << endl;
        cout << endl;
    }

    // Show the result after completing the level
    setColor(15); // White text
    cout << "****** Easy Level Results ******" << endl;
    setColor(10); // Light green text
    cout << "Total questions: " << numQuestions << endl;
    cout << "Correct answers: " << correctAnswers << endl;
    cout << "Stars earned: " << easyStars << " Stars" << endl;
    cout << endl;
}

// Function to play the medium level
void mediumLevel(int &mediumStars, string history[], int &historyCount, int numQuestions) {
    setColor(14); // Yellow text for medium level
    cout << "You are playing the MEDIUM level!" << endl;

    // Array of 10 questions for medium level with decimal operations
    struct Question {
        string questionText;
        double correctAnswer;
    };

    Question questions[10] = {
        {"What is 5.5 + 3.3?", 8.8},
        {"What is 9.7 - 4.2?", 5.5},
        {"What is 6.4 * 2.5?", 16.0},
        {"What is 8.0 / 2.0?", 4.0},
        {"What is 7.5 + 1.5?", 9.0},
        {"What is 5.2 - 2.1?", 3.1},
        {"What is 3.3 * 3.1?", 10.23},
        {"What is 12.5 / 4.0?", 3.125},
        {"What is 15.6 - 6.3?", 9.3},
        {"What is 2.4 * 4.0?", 9.6}
    };

    int correctAnswers = 0;

    // Loop through and ask questions based on user input for number of questions
    for (int i = 0; i < numQuestions; i++) {
        setColor(11); // Light cyan text for question
        cout << questions[i].questionText << " ";
        double userAnswer;
        cin >> userAnswer;

        // Check the answer within a tolerance for decimals (rounding to 2 decimal places)
        if (fabs(userAnswer - questions[i].correctAnswer) < 0.01) {
            mediumStars += 2;  // Earn 2 stars for correct answer
            correctAnswers++;
            history[historyCount++] = "Medium level - Correct: " + questions[i].questionText + " = " + intToString((int)questions[i].correctAnswer) + " Your answer: " + intToString((int)userAnswer);
            setColor(10); // Green text for correct
            cout << "Your answer is correct!" << endl;
        } else {
            history[historyCount++] = "Medium level - Incorrect: " + questions[i].questionText + " = " + intToString((int)questions[i].correctAnswer) + " Your answer: " + intToString((int)userAnswer);
            setColor(12); // Red text for incorrect
            cout << "Oops! That's incorrect. The correct answer is: " << questions[i].correctAnswer << endl;
        }

        // Show the result for each question immediately after answering
        setColor(15); // White text
        cout << "Question: " << questions[i].questionText << endl;
        cout << "Your answer: " << userAnswer << endl;
        cout << "Correct answer: " << questions[i].correctAnswer << endl;
        cout << endl;
    }

    // Show the result after completing the level
    setColor(15); // White text
    cout << "****** Medium Level Results ******" << endl;
    setColor(10); // Light green text
    cout << "Total questions: " << numQuestions << endl;
    cout << "Correct answers: " << correctAnswers << endl;
    cout << "Stars earned: " << mediumStars << " Stars" << endl;
    cout << endl;
}

// Function to play the hard level
void hardLevel(int &hardStars, string history[], int &historyCount, int numQuestions) {
    setColor(12); // Red text for hard level
    cout << "You are playing the HARD level!" << endl;

    // Array of 10 hard level questions with brackets
    struct Question {
        string questionText;
        int correctAnswer;
    };

    Question questions[10] = {
        {"What is (5 + 3) * 2?", 16},
        {"What is (9 - 4) * (2 + 3)?", 25},
        {"What is (6 + 2) * (5 - 3)?", 16},
        {"What is (8 / 4) + 3?", 5},
        {"What is (7 * 2) - 4?", 10},
        {"What is (12 + 6) / 3?", 6},
        {"What is (15 - 3) * 2?", 24},
        {"What is (6 * 3) + 4?", 22},
        {"What is (8 / 2) * (4 + 2)?", 24},
        {"What is (2 + 6) * 4?", 32}
    };

    int correctAnswers = 0;

    // Loop through and ask questions based on user input for number of questions
    for (int i = 0; i < numQuestions; i++) {
        setColor(15); // White text for question
        cout << questions[i].questionText << " ";
        int userAnswer;
        cin >> userAnswer;

        // Log the question and answer in history
        if (userAnswer == questions[i].correctAnswer) {
            hardStars += 2;  // Earn 2 stars for correct answer
            correctAnswers++;
            history[historyCount++] = "Hard level - Correct: " + questions[i].questionText + " = " + intToString(questions[i].correctAnswer) + " Your answer: " + intToString(userAnswer);
            setColor(10); // Green text for correct
            cout << "Your answer is correct!" << endl;
        } else {
            history[historyCount++] = "Hard level - Incorrect: " + questions[i].questionText + " = " + intToString(questions[i].correctAnswer) + " Your answer: " + intToString(userAnswer);
            setColor(12); // Red text for incorrect
            cout << "Oops! That's incorrect. The correct answer is: " << questions[i].correctAnswer << endl;
        }

        // Show the result for each question immediately after answering
        setColor(15); // White text
        cout << "Question: " << questions[i].questionText << endl;
        cout << "Your answer: " << userAnswer << endl;
        cout << "Correct answer: " << questions[i].correctAnswer << endl;
        cout << endl;
    }

    // Show the result after completing the level
    setColor(15); // White text
    cout << "****** Hard Level Results ******" << endl;
    cout << "Total questions: " << numQuestions << endl;
    cout << "Correct answers: " << correctAnswers << endl;
    cout << "Stars earned: " << hardStars << " Stars" << endl;
    cout << endl;
}

// Main function
int main() {
    int easyStars = 0, mediumStars = 0, hardStars = 0;
    string history[100];
    int historyCount = 0;

    int choice;
    displayWelcomeMessage();

    while (true) {
        displayLevelMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        int numQuestions;
        if (choice == 1) {
            cout << "Enter the number of questions for Easy level (1-10): ";
            cin >> numQuestions;
            if (numQuestions > 10) numQuestions = 10; // Cap the number of questions to 10
            easyLevel(easyStars, history, historyCount, numQuestions);
        } else if (choice == 2) {
            cout << "Enter the number of questions for Medium level (1-10): ";
            cin >> numQuestions;
            if (numQuestions > 10) numQuestions = 10; // Cap the number of questions to 10
            mediumLevel(mediumStars, history, historyCount, numQuestions);
        } else if (choice == 3) {
            cout << "Enter the number of questions for Hard level (1-10): ";
            cin >> numQuestions;
            if (numQuestions > 10) numQuestions = 10; // Cap the number of questions to 10
            hardLevel(hardStars, history, historyCount, numQuestions);
        } else if (choice == 4) {
            viewProgress(easyStars, mediumStars, hardStars);
        } else if (choice == 5) {
            viewHistory(history, historyCount);
        } else if (choice == 6) {
            displayGuideLine();
        } else if (choice == 7) {
             viewSolutions();
        } else if (choice == 8) {
            cout << "Thank you for playing! Exiting..." << endl;
            break;
        } else {
            setColor(12);
            cout << "Invalid choice! Please try again." << endl;
            setColor(15);
        }
    }

    return 0;
}
