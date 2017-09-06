#include <iostream>
using namespace std;

int main() { 
    int score = 0; 
    int level = 0; 

    cout << "輸入分數："; 
    cin >> score; 

    switch(score) {
	  case 100:
			cout<<"Your score is Perfect"<<endl;
		break;
		case 90 ... 99:
			cout<<"You got A"<<endl;
		break;
		case 80 ... 89:
			cout<<"You got B"<<endl;
			break;
		case 70 ... 79:
			cout<<"You got C"<<endl;
			break;
		case 60 ... 69:
			cout<<"You got D"<<endl;
			break;
		case 50 ... 59:
			cout<<"You got E"<<endl;
			break;
		default:
			cout<<"You got F"<<endl; 
    } 
 
    return 0;
}
