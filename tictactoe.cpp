#include <iostream>
using namespace std;

bool win(char arr[3][3]){
    for(int i = 0; i<3; i++){
        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == arr[i][2] && (arr[i][0] == 'X' || arr[i][0] == 'O')){
            return true;
        }
        else if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] == arr[2][i] && (arr[0][i] == 'X' || arr[0][i] == 'O')){
            return true;
        }
    }
        if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == arr[2][2] && (arr[0][0] == 'X' || arr[0][0] == 'O')){
            return true;
        }
        else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == arr[2][0] && (arr[0][2] == 'X' || arr[0][2] == 'O')){
            return true;
        }
    return false;
}

bool isFull(char arr[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}

int main(){
    char arr[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    string replay;
    while(true){
        int row;
        int column;

        cout<<"Player 1 (X)"<<endl;
        cout<<"Row (0,1, or 2): ";
        cin>>row;
        cout<<"Column (0,1, or 2): ";
        cin>>column;

        arr[row][column] = 'X';

        for(int i = 0; i<3;i++){
            for(int j = 0; j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<" "<<endl;
            
        }
        if(win(arr)){
            cout<<"Player 1 has won!"<<endl;
            cout<<"play again? ";
            cin>>replay;
            if(replay == "yes" || replay == "Yes"){
                main();
            }
            else{
                exit(0);
            }
        }
        if(isFull(arr)){
            cout<<"draw!"<<endl;
            cout<<"play again? ";
            cin>>replay;
            if(replay == "yes" || replay == "Yes"){
                main();
            }
            else{
                exit(0);
            }
        }

        cout<<"Player 2 (O)"<<endl;
        cout<<"Row (0,1, or 2): ";
        cin>>row;
        cout<<"Column (0,1, or 2): ";
        cin>>column;

        arr[row][column] = 'O';

        for(int i = 0; i<3;i++){
            for(int j = 0; j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<" "<<endl;
            
        }
        if(win(arr)){
            cout<<"Player 2 has won!"<<endl;
            cout<<"play again? ";
            cin>>replay;
            if(replay == "yes" || replay == "Yes"){
                main();
            }
            else{
                exit(0);
            }
        }
        if(isFull(arr)){
            cout<<"draw!"<<endl;
            cout<<"play again? ";
            cin>>replay;
            if(replay == "yes" || replay == "Yes"){
                main();
            }
            else{
                exit(0);
            }
        }
}
    return 0;
}