/*
#include <bits/stdc++.h>

using namespace std;

int ID =0;

class Board{

public :
    void displayBoard(){
        cout << "\t\t\t\t\t -----------------\n";
        cout << "\t\t\t\t\t|Snake Ladder Game|\n";
        cout << "\t\t\t\t\t -----------------\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t47\t|\t46\t|\t45(S,9) |\t44\t|\t43\t|\t42\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t36\t|\t37\t|\t38\t|\t39\t|\t40\t|\t41\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t35(L,38)|\t34(S,22)|\t33\t|\t32(S,13)|\t31\t|\t30\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t24\t|\t25(S,14)|\t26(L,41)|\t27\t|\t28(S,16)|\t29\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t23\t|\t22\t|\t21(S,7) |\t20\t|\t19\t|\t18(L,24)|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t12(S,5)|\t13(L,27)|\t14\t|\t15(S,7)|\t16\t|\t17\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\t11\t|\t10(L,23)|\t 9\t|\t 8\t|\t 7\t|\t 6(L,20)|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
        cout << "|\tStart\t|\t 1\t|\t 2\t|\t 3\t|\t 4(L,17)|\t 5\t|\n";
        cout << " ----------------------------------------------------------------------------------------------- \n";
    }
};

class Player{

public :
    string name;
    bool fastValid;
    int currentPosition, matchPlayedByHim, numberOfWinningMacthes, totalNumberOfMoves;
    Player(){
        currentPosition = numberOfWinningMacthes = totalNumberOfMoves =0;
        fastValid = false;
        matchPlayedByHim = 1;
    }
};

class Square : public Player {

public :
    int position_number(Player p){
        return p.currentPosition;
    }
    int special_move(int value,int currentposition){
        if(value == 1){
            int data = currentposition;
            switch (data){
                case 15:
                    return 7;
                case 21:
                    return 7;
                case 25:
                    return 14;
                case 28:
                    return 16;
                case 12:
                    return 5;
                case 45:
                    return 9;
                case 34:
                    return 22;
                case 32:
                    return 13;
            }
            return 0;
        }
        else if(value == 2){
            int data = currentposition;
            switch (data){
                case 4:
                    return 17;
                case 6:
                    return 20;
                case 10:
                    return 23;
                case 13:
                    return 27;
                case 18:
                    return 24;
                case 26:
                    return 41;
                case 35:
                    return 38;
            }
            return 0;
        }
        else
            return 0;
    }
    int move_to_position(Player p,int dicevalue){
        return p.currentPosition += dicevalue;
    }
};

class GamePlay : public Player{

public :
    int isThereALader(Player p){
        if( p.currentPosition == 4 || p.currentPosition == 6 || p.currentPosition == 10 || p.currentPosition == 13
            || p.currentPosition == 18 || p.currentPosition == 26 || p.currentPosition == 35 )
            return 2;
        return 0;
    }
    int isThereASnake(Player p){
        if( p.currentPosition == 12 || p.currentPosition == 15 || p.currentPosition == 21 || p.currentPosition == 25
            || p.currentPosition == 28 || p.currentPosition == 32 || p.currentPosition == 34 || p.currentPosition ==45 )
            return 1;
        return 0;
    }
    bool lastValidation(int data){
        return data > 47;
    }
    bool fastValidation(int data){
        return data == 1;
    }
    bool winer(int index,int data){
        if(index == 0 && data == 47){
            cout << "Player 1 win the game !!!\n";
            return true;
        }
        else if(index == 1 && data == 47){
            cout << "Player 2 win the game !!!\n";
            return true;
        }
        return false;
    }
};



class ScoreBoard {
public :
    int id;
    string name;
    int matches;
    int wins;
};

void addStudent() {
    ScoreBoard student;
    cout << "\n\tEnter player name : ";
    cin.get();
    getline(cin, student.name);
    cout << "\n\tEnter No. of matches : ";
    cin >> student.matches;
    cout << "\n\tEnter No. of wins : ";
    cin >> student.wins;
    ID++;

    ofstream write;
    write.open("GameScore.txt", ios::app);
    write << "\n" << ID;
    write << "\n" << student.name ;
    write << "\n" << student.matches ;

    write << "\n" << student.wins ;
    write.close();
    write.open("id.txt");
    write << ID;
    write.close();
    cout << "\n\tData save to file";
}

void print(ScoreBoard s) {
    cout << "\n\t---Score Data---";
    cout << "\n\tID is : " << s.id;
    cout << "\n\tName is : " << s.name;
    cout << "\n\tMatches is : " << s.matches;
    cout << "\n\tWins is : " << s.wins;

}

void readData() {
    ScoreBoard student;
    ifstream read;
    read.open("GameScore.txt");

    while (!read.eof()) {

        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.matches;
        read >> student.wins;
        print(student);
    }
    read.close();
}

int searchData() {
    int id;
    cout << "\n\tEnter student id want to search : ";
    cin >> id;
    ScoreBoard student;
    ifstream read;
    read.open("GameScore.txt");
    while (!read.eof()) {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.matches;
        read >> student.wins;
        if (student.id == id) {
            print(student);
            return id;
        }
    }
}

void updateData() {
    int id = searchData();
    cout << "\n\tYou want to update record (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
        ScoreBoard newData;
        cout << "\n\tEnter student name : ";
        cin.get();
        getline(cin, newData.name);
        cout << "\n\tEnter student matches : ";
        cin >> newData.matches;
        cout << "\n\tEnter student wins : ";
        cin >> newData.wins;
        ScoreBoard student;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("GameScore.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.name);
            read >> student.matches;
            read >> student.wins;
            if (student.id != id) {
                tempFile << "\n" << student.id;
                tempFile << "\n" << student.name;
                tempFile << "\n" << student.matches;
                tempFile << "\n" << student.wins;
            }
            else {
                tempFile << "\n"<< student.id;
                tempFile << "\n"<< newData.name;
                tempFile << "\n"<< newData.matches;
                tempFile << "\n" << newData.wins;
            }
        }
        read.close();
        tempFile.close();
        remove("GameScore.txt");
        rename("temp.txt", "GameScore.txt");
        cout << "\n\tData updated successfuly";
    }
    else {
        cout << "\n\tRecord not deleted";
    }
}

int main(){

    Board board;
    Player p[2];

    p[0].name = "Playerone";
    p[1].name = "Playertwo";

    GamePlay game;
    Square square;

    char ch;
    int index = 0,diceValue,temp = 0,winindex =0;
    bool winerFound = false;

    while(!winerFound){

        board.displayBoard();
        cout << "\nPress R to Roll a dice...\n";
        cin >> ch;
        system("CLS");
        if(index == 0){
            diceValue  = (rand()%10)/3;
            if(diceValue == 0)
                diceValue = 3;
            cout << "Player 1: " << diceValue << endl;

            p [index].totalNumberOfMoves++;

            temp = p[index].currentPosition;
            p[index].currentPosition += diceValue;

            if(!p[index].fastValid){
                p[index].fastValid = game.fastValidation(p[index].currentPosition);
                if(!p[index].fastValid){
                    p[index].currentPosition = 0;
                    cout << "Current Position - \nplayer 1: " << p[index].currentPosition << " player 2: " << p[index+1].currentPosition << endl;
                    index++;
                    continue;
                }
            }

            if(game.lastValidation(p[index].currentPosition))
                p[index].currentPosition = temp;

            if(game.isThereALader(p[index]) == 2){
                cout << "Lader !!!\n";
                diceValue = square.special_move(game.isThereALader(p[index]),p[index].currentPosition);
                if(diceValue != 0)
                    p[index].currentPosition = diceValue;
            }
            else if(game.isThereASnake(p[index]) == 1){
                cout << "Snake !!!\n";
                diceValue = square.special_move(game.isThereASnake(p[index]),p[index].currentPosition);
                if(diceValue != 0)
                    p[index].currentPosition = diceValue;
            }
            winerFound = game.winer(index,p[index].currentPosition);
            winindex = index;
            index++;
        }
        else{
            diceValue  = (rand()%10)/3;
            if(diceValue == 0)
                diceValue = 3;
            cout << "Player 2: " << diceValue << endl;

            p[index].totalNumberOfMoves++;

            temp = p[index].currentPosition;
            p[index].currentPosition += diceValue;

            if(!p[index].fastValid){
                p[index].fastValid = game.fastValidation(p[index].currentPosition);
                if(!p[index].fastValid){
                    p[index].currentPosition = 0;
                    cout << "Current Position - \nplayer 1: " << p[index-1].currentPosition << " player 2: " << p[index].currentPosition << endl;
                    index--;
                    continue;
                }
            }

            if(game.lastValidation(p[index].currentPosition))
                p[index].currentPosition = temp;

            if(game.isThereALader(p[index]) == 2){
                cout << "Lader !!!\n";
                diceValue = square.special_move(game.isThereALader(p[index]),p[index].currentPosition);
                if(diceValue != 0)
                    p[index].currentPosition = diceValue;
            }
            else if(game.isThereASnake(p[index]) == 1){
                cout << "Snake !!!\n";
                diceValue = square.special_move(game.isThereASnake(p[index]),p[index].currentPosition);
                if(diceValue != 0)
                    p[index].currentPosition = diceValue;
            }
            winerFound = game.winer(index,p[index].currentPosition);
            winindex = index;
            index--;
        }

        cout << "Current Position - \nplayer 1: " << p[0].currentPosition << " player 2: " << p[1].currentPosition << endl;

    }
    ifstream read;
    read.open("id.txt");
    if (!read.fail()) {
        read >> ID;
    }
    else {
        ID = 0;
    }
    read.close();
    int num = 1;
    while (num<=2) {
        cout << "\n\t1.Add player " << num << " data" ;
        cout << "\n\t2.Update player " << num << " data";

        int choice;
        cout << "\n\tEnter choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                num++;
                break;
            case 2:
                updateData();
                num++;
                break;
        }

    }
    readData();
}*/
#include <bits/stdc++.h>

using namespace std;

class Train {
public:
    int trainNumber;
    string trainName;
    string startingStation;
    string arrivalStation;
    string departureTime;
    string arrivalTime;
    string offDay;

    void initialize(int trainNumber, string trainName, string offDay, string startingStation, string departureTime,
                    string arrivalStation, string arrivalTime) {
        this->trainNumber = trainNumber;
        this->trainName = trainName;
        this->startingStation = startingStation;
        this->arrivalStation = arrivalStation;
        this->departureTime = departureTime;
        this->arrivalTime = arrivalTime;
        this->offDay = offDay;
    }

    void print() {

        cout << endl << trainNumber << "\t" << trainName << "\t" << offDay << "\t" << startingStation << "\t"
             << departureTime << "\t" << arrivalStation << "\t" << arrivalTime << endl;
    }

    void input() {
        int trainNumber;
        string trainName;
        string startingStation;
        string arrivalStation;
        string departureTime;
        string arrivalTime;
        string offDay;

        cout << "TrainNumber :";
        cin >> trainNumber;
        cout << "trainName :";
        cin >> trainName;
        cout << "startingStation :";
        cin >> startingStation;
        cout << "arrivalStation :";
        cin >> arrivalStation;
        cout << "DepartureTime :";
        cin >> departureTime;
        cout << "arrivalTime :";
        cin >> arrivalTime;
        cout << "offDay";
        cin >> offDay;
        initialize(trainNumber, trainName, startingStation, arrivalStation, departureTime, arrivalTime, offDay);
        cout << "Train number \t" << "trainName \t" << "offDay \t" << "startingStation \t" << "startingStation \t"<<"departureTime \t"<<"arrivalStation \t"<<"departureTime\t";

        print();

    }
};


void give_preferences() {
    int options, temp;
    string train;
    cout << "What do you want?" << endl << "Press 1 To input Train details" << endl
         << " Press 2 to Stop the Project" << endl;
    Train trainIndividual;
    cin >> options;
    getchar();

    switch (options) {
        case 1:
            trainIndividual.input();


            give_preferences();
            break;

        case 2:
            exit(0);
    }

}

void output() {
    Train train;
    cout << "Train number \t" << "trainName \t" << "offDay \t" << "startingStation \t" << "startingStation \t"<<"departureTime \t"<<"arrivalStation \t"<<"departureTime\t";

    train.initialize(123,"Subarna","Friday","1","2","mym","12");
    train.print();
    train.initialize(234,"Teesta","saturday","1","2","mym","2");
    train.print();
}

int main() {
    string trains[100];
    fflush(stdout);
    int options;
    output();

    give_preferences();
    return 0;
}
