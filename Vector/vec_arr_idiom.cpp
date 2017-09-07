#include <iostream> 
#include <vector>
using namespace std; 

int main() { 
    vector<int> ivector(10);
    //using "Subscript []"  operator to get element
    for(int i = 0; i < ivector.size(); i++) {
        ivector[i] = i;
    }
     
    for(int i = 0; i < ivector.size(); i++) {
        cout << ivector[i] << " ";
    }
    cout << endl;


    //construct vector<int> with int array
    int iarr[] = {11, 12, 13, 14, 15};
    //(given the array start, array end pointer)
    vector<int> ivector_2(iarr, iarr + 5);

    cout<<"construct from given int pointer start,end" <<endl;
    for(int i = 0; i < ivector_2.size(); i++) {
        cout << ivector_2[i] << " ";
    }
    cout << endl;

    //vector<int> ivector(10, 5);
    //construct vector len =10 with all value =5

    //also you can construct vector from another vec
    cout<<"construct from another vector" <<endl;
    vector<int> ivector_3(ivector_2);
    for(int i = 0; i < ivector_3.size(); i++) {
        ivector_3[i] = ivector_3[i]+1;
    }
    for(int i = 0; i < ivector_2.size(); i++) {
        cout << ivector_2[i] << " ";
    }
    cout<<endl;
    for(int i = 0; i < ivector_3.size(); i++) {
        cout << ivector_3[i] << " ";
    }
    cout<<endl;
    cout<<"construct from another vector will not share element address"<<endl;
    cout<<"notice , using assiginment will also copy a new one"<<endl;
    return 0; 
}

