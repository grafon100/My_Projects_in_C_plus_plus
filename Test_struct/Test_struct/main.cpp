//
//  main.cpp
//  Home_Work_3
//
//  Created by grafon100 on 07/12/2021.
//


#include <iostream>
#include <string>



using namespace std;

struct MyDay{
    string date;
    string discrDate;
    int prior;
};


void inputTask(MyDay *&arr,int &count){
    MyDay taskOnDay;
    
    cout<<"Input a Date: ";
    cin>> taskOnDay.date;
    
    //Input line with spaces ---- Super WORK!!! Thanks Indian Man
    cin.ignore();
    cout<<"Input discription your days: ";
    getline(cin,taskOnDay.discrDate);
    //----This is Link: https://youtu.be/AgS9JSzbvtU ------------
    
    cout<<"Input priority this task: ";
    cin>> taskOnDay.prior;
    
    arr[count] = taskOnDay;
    count++;
    
    cout<<"--------------------------------\n";
    cout<<"Task was add successfull!\n";
    cout<<"--------------------------------\n";
}


void addTask(MyDay *&arr, int &count){
    MyDay *newTask = new MyDay[count+1];
    
    for(int i = 0; i<count; i++){
        newTask[i] = arr[i];
    }
    
    delete [] arr;
    
    inputTask(newTask, count);
    
    arr = newTask;
}


void showAllYourTask(MyDay *arr, const int count){
    cout<<"\tYour days:\n======================\n";
    for(int i = 0; i<count; i++){
        cout<<"Task ID: "<<i+1<<"\n-  -  -  -  -  -  -  -  -\n";
        cout<<"Data:     "<<arr[i].date<<endl;
        cout<<"Discribe: "<<arr[i].discrDate<<endl;
        cout<<"Priority: "<<arr[i].prior<<endl;
        cout<<"-----------------------\n";
    }
    cout<<"End List Task\n=========================\n";
}

void deleteAllTask(MyDay *&arr, int &count){
    count = 0;
    MyDay *emptyArr = new MyDay[count+1];
    delete [] arr;
    
    arr = emptyArr;
    
    cout<<"You Task List is EMPTY!"<<endl;
    cout<<"-=o=- -=o=- -=o=- -=o=-"<<endl;
}


void deleteOneTask(MyDay *&arr, int &count, const int numTask){
    if(count != 1){
        count--;
        MyDay *newArr = new MyDay[count];
        for(int i = 0; i<count; i++){
            if(numTask-1 > i){
                newArr[i] = arr[i];
            } else {
                newArr[i] = arr[i+1];
            }
        }

        delete [] arr;

        arr = newArr;
    } else {
        deleteAllTask(arr, count);
    }

}


void deleteAllTaskOnDay(MyDay *&arr, int &count, string delData){
    
    int size = count;
    for(int i = 0; i<count; i++) if(arr[i].date == delData) size--;
    
    int repData = 0;
    if(size >= 1){
        MyDay *newArr = new MyDay[size];
        for(int i = 0; i<count; i++){
            if(delData == arr[i].date){
                repData++;
            } else {
                newArr[i-repData] = arr[i];
            }
        }
        
        count = size;
        

        delete [] arr;

        arr = newArr;
    } else {
        deleteAllTask(arr, count);
    }

}




//------------------TEST!---------------------

void addSizeTestArr(string *&arr, int &size, string dataTask){
    string *newArr = new string[size+1];
    for(int i = 0; i<size;i++){
        newArr[i] = arr[i];
    }
    newArr[size] = dataTask;
    size++;
    delete [] arr;
    arr = newArr;
    
}



void outPutAddres(MyDay *arr, int count, string *&testA, int &testS){
    for (int i = 0; i<count; i++) {
        bool notSameData = true;
        string dayData = arr[i].date;
        
        for(int j = 0; j<testS; j++){
            if(dayData == testA[j]) notSameData = false;
        }
        
        if(notSameData){
            addSizeTestArr(testA, testS, dayData);
        }
    }
}

void showArraDataTask(string *arr, int size){
    cout<<"===================================\n";
    cout<<"Below you can see dates your Tasks:\n";
    cout<<"===================================\n";
    for(int i = 0; i<size; i++){
        cout<<"Item: "<<i+1<<"  ---   "<<arr[i]<<endl;
        cout<<"-------------------------------------"<<endl;
    }
}

void outputTaskOnThisData(MyDay *arrAll, int countAll, string dataStr){
    cout<<"=====================================\n";
    cout<<"\t\t"<<dataStr<<endl;
    cout<<"=====================================\n";
    for(int i = 0; i<countAll; i++){
        if(arrAll[i].date == dataStr){
            cout<<"Task ID: "<<i+1<<endl;
            cout<<"-  -  -  -  -  -  -  -  -\n";
            cout<<"\tTask:\t"<<arrAll[i].discrDate<<endl;
            cout<<"\tPrior:\t"<<arrAll[i].prior<<endl;
            cout<<"----------------------------\n";
        }
    }
    
}







//--END--------------TEST!-----------END-----

int main(int argc, const char * argv[]) {
    
    
    int numDeleteTask;
    int countTask = 0;
    MyDay *arrayTask = new MyDay[countTask+1];
    
    cout<<"=====================================================\n";
    cout<<"\t\tWelcome to program \"MyTask\"\n";
    cout<<"=====================================================\n";
    cout<<"=====================================================\n";
    
    bool repMenu = true;
    while(repMenu){
        if (countTask == 0){
            cout<<"You didn't have any Tasks, please add your first Task!\n";
            cout<<"-----------------------------------------------------\n";
            inputTask(arrayTask, countTask);
        } else {
            int item;
            cout<<"===================================\n";
            cout<<"\t\tMain menu:\n";
            cout<<"===================================\n";
            cout<<"1 -Add task on Day.\n";
            cout<<"2 -Show on Day.\n";
            cout<<"3 -Show All Task.\n";
            cout<<"4 -Delete task on Day.\n";
            cout<<"5 -Delete task on All Day.\n";
            cout<<"6 -Delete All Task.\n";
            cout<<"7 -Quit from app.\n";
            cout<<"-----\n\tSelect menu item: ";
            cin>>item;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            
            switch (item) {
                case 1:
                    addTask(arrayTask, countTask);
                    break;
                case 2:{
                    int valueData = 0;
                    string *arrTest = new string[1];
                    int testSize = 0;
                    outPutAddres(arrayTask, countTask, arrTest, testSize);
                    showArraDataTask(arrTest, testSize);
                    
//TODO CHEACK INPUT VALUE (ОШИБКА когда значение больше списка задач и отричательное число)
                    
                    cout<<"Input value your data: ";
                    cin>>valueData;
                    string choiseData = arrTest[valueData-1];
                    outputTaskOnThisData(arrayTask, countTask, choiseData);
                    
                    
                    delete [] arrTest;
                
                    break;
                }
                case 3:{
                    showAllYourTask(arrayTask, countTask);
                    break;
                }
                case 4:{
                    
                    int valueData = 0;
                    string *arrTest = new string[1];
                    int testSize = 0;
                    outPutAddres(arrayTask, countTask, arrTest, testSize);
                    showArraDataTask(arrTest, testSize);
                    cout<<"Input item your data: ";
                    cin>>valueData;
                    string choiseData = arrTest[valueData-1];
                    outputTaskOnThisData(arrayTask, countTask, choiseData);
                    
                    
                    cout<<"Which task did you want delete input ID Task?: ";
                    cin>>numDeleteTask;
                    
                    char answ;
                    cout<<"--------------------------------\n";
                    cout<<"!!!!!      ATTENTION      !!!!!!\n";
                    cout<<"--------------------------------\n";
                    cout<<"Do you want delete Task with ID "<<numDeleteTask<<"? (y/n)? ";
                    cin>>answ;
                    if(answ == 'Y' || answ == 'y'){
                        deleteOneTask(arrayTask, countTask, numDeleteTask);
                        cout<<"--------------------------------\n";
                        cout<<"Task was deleted successfull!\n";
                        cout<<"--------------------------------\n";
                    }
                    break;
                }
                    
                case 5:{
                    int valueData = 0;
                    string *arrTest = new string[1];
                    int testSize = 0;
                    outPutAddres(arrayTask, countTask, arrTest, testSize);
                    showArraDataTask(arrTest, testSize);
                    cout<<"Which task did you want delete input item this data: ";
                    cin>>valueData;
                    char answ;
                    cout<<"--------------------------------\n";
                    cout<<"!!!!!      ATTENTION      !!!!!!\n";
                    cout<<"--------------------------------\n";
                    cout<<"Do you want delete All task on "<<valueData<<"? (y/n)? ";
                    cin>>answ;
                    if(answ == 'Y' || answ == 'y'){
                        deleteAllTaskOnDay(arrayTask, countTask, arrTest[valueData-1]);
                        cout<<"--------------------------------\n";
                        cout<<"Task was deleted successfull!\n";
                        cout<<"--------------------------------\n";
                    }
                    
                    
                    
                    
                    break;
                }
                    
                    
                case 6:{
                    char answ;
                    cout<<"--------------------------------\n";
                    cout<<"!!!!!      ATTENTION      !!!!!!\n";
                    cout<<"--------------------------------\n";
                    cout<<"Do you want delete ALL your TASK? (y/n)? ";
                    cin>>answ;
                    if(answ == 'Y' || answ == 'y'){
                        deleteAllTask(arrayTask, countTask);
                        cout<<"--------------------------------\n";
                        cout<<"Task was deleted successfull!\n";
                        cout<<"--------------------------------\n";
                    }
                    
                    
                    break;
                }
                case 7:{
                    repMenu = false;
                    break;
                }
                default:
                
                    cout<<"ERROR!-----------\n";
                    cout<<"Selected your menu item is wrong!\n";
                    cout<<"Try again!!!\n"<<endl;
                    
                    break;
            }
            
            
        }
        
    }
    
    
   
    delete [] arrayTask;
    
    return 0;
}
