*/created by tasbih seid /*
#include <iostream>

using namespace std;

class LinkedList {
    class Node {
    public:
        int data;
        Node *next = nullptr;

        Node(int item) {
            data = item;
            next = nullptr;
        }
    };

public:
    Node *head = nullptr;
    Node *last = nullptr;
    int size = 0;


    int pop() {
        int item = head->data;
        head = head->next;
        return item;
    }

    void add(int item) { // Addition function
        if (head == nullptr) {
            head = new Node(item);
            last = head;
        } else {
            Node *newNode = new Node(item);
            last->next = newNode;
            last = newNode;
        }
        size++;
    }

    bool isEmpty() const {
        if (head == nullptr) return true;
        return false;
    }

    void removeHead() {
        Node *nextOfTheHead = head->next;
        delete head;
        head = nextOfTheHead;
        size--;

    }

    void removeLast() {
        Node *current = head;
        int i = 0;
        while (i < size - 2) {
            current = current->next;
            i++;
        }
        Node *lastOfTheLast = current;
        delete last;
        last = lastOfTheLast;
        last->next = nullptr;
        size--;
    }

    int search(int item) const {
        Node *current = head;
        int counter = 0;
        while (current != last) {
            if (current->data == item) return counter;
            current = current->next;
            counter++;
        }
        return counter;
    }

    void removeAt(int index) {  // the wiz function
        Node *lastOfCurrent = head;
        for (int i = 0; i < index - 1; ++i)
            lastOfCurrent = lastOfCurrent->next;

        Node *current = lastOfCurrent->next;
        lastOfCurrent->next = current->next;
        delete current;
        size--;


    }

    friend ostream &operator<<(ostream &os, const LinkedList &list) {
        if (list.isEmpty()) {
            os << "[ ]";
            return os;
        }
        Node *lastNode = list.head;
        os << "[";
        while (lastNode->next != nullptr) {
            os << lastNode->data << ", ";
            lastNode = lastNode->next;
        }
        os << lastNode->data << "]";
        return os;
    }
};

int main() {
    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.add(6);
    list.add(7);
   list.add(8);
   list.add(9);
   list.add(10);
  
 


int add;
int index;
int number;
int seconed;
int item;
cout<<"enter add :";
cin>>add;
if(1==1)
cout<<"Name:hail Ail Amed Amin"<<"\t";
cout<<"\t";
cout<<"Given Name:lala"<<"\t"<<"\t";
cout<<"famiy Name :Amin"<<"\t";
cout<<"yomi Name:haillllllllllllo"<<"\n";
cout<<"family Name yoim:muroooo"<<"\n";
cout<<"additional Name:mip"<<"\n";

cout<<"Email in fromal:lala@gmail.hot 123"<<"\n";
cout<<"Email fromal:hail@gmail.hotqw;"<<"\n";
cout<<"mobile Home:090181237"<<"\n";
cout<<"mobile work :01269338"<<"\n";
cout<<"mobile:09956712"<<"\n";
cout<<"moile ather :01263358"<<"\n";
cout<<"organiztion tite:constrution company"<<"\t";
cout<<" organztion Department:financial department"<<"\n";
cout<< "organztionlocation:Buildings 55th street"<<"\n";
cout<<"organztion jobDesciption:calcuting revenues and expenditures"<<"\n";

list .removeAt(1);

cout<<"enter Remove of index 1"<<"adlat of recuert"<<"\n";

cout<<"***********************************************"<<"\n";
 if  (2==2)

cout<<"Name:Ail seid Amed"<<"\t";
cout<<"Given Name : Abo Ail"<<"/n";
cout<<"famiy Name :Amed"<<"\n";
cout<<"yomi Name :ailortt"<<"\n";
cout<<"given Name yomi" ;
cout<<"additional name:hasssn"<<"\n";
cout<<"family Name yomi:malge"<<"\n";
cout<<"Email in fromal:Abo Ailgmail@hot123"<<"\n";
cout<<"organiztion tite:Acompany bio heil"<<"\n";
cout<<"organztion Department:lab laboratories"<<"\n";
cout<<"organztionlocatio:Arquette square 13"<<"\n";
cout<<"organztion jobDesciption:Make an test oils"<<"\n";
list .removeAt(2);

cout<<"enter Remove of index 2"<<"clear log"<<"\n";
cout<<"****************************"<<"\n";

if(3==3)
cout<<"Name:mzin Aill Amed"<<"\n";
cout<<"GveinName: mzine"<<"\n";
cout<<"famiy Name:Amed"<<"\n";
cout<<"yomi name:masssssizn"<<"\n";

cout<<"Additional Name:Abo kaled"<<"\n";

cout<<"Email  fromal: mzine gmail@hot mail uo"<<"\n"; 
cout<<"Email in fromal:mzin gmail@hot maill  56"<<"\n";
cout<<"mobile Home:09025689"<<"\n";
cout<<"mobile work:01267890"<<"\n";
cout<<"mobile099457812"<<"\n";
cout<<"ather:09985612789"<<"\n";
cout<<"organiztion tite:construction company "<<"\n";
cout<<"organztion Departmen:Enginers"<<"\n";
cout<<"organztionlocatio:Riyadh 55 th street"<<"\n";
cout<<"organztion jobDescipti:Building construction"<<"\n";
list .removeAt(3);
cout<<"enter Remove of index 3"<<"clear log"<<"\n";
cout<<"******************************"<<"\n";
if(4==4)
cout<<"Name:Nose mubark Ail"<<"\n";
cout<<"Gvein Name:Nofisa"<<"\n";
cout<<"famiy Name:Ail"<<"\n";
cout<<"yomi Name:nonse"<<"\n";
cout<<"family Name yomi:ailoooo"<<"\n";

cout<<"Email in fromal: Nofise gmail@hot mailyy"<<"\n";
cout<<"Email  fromal :Nose Mubark gmail@ hot mil"<<"\n";
cout<<"organiztion tit:Electronic games company"<<"\n";
cout<<"organztion Departmen:manufacturing"<<"\n";
cout<<"organztion locatio:Halfaya"<<"\n";
cout<<"organztion jobDescip:colltect rams"<<"\n";
list.removeAt(4);
cout<<"enter Remove of index 4"<<"clear log"<<"\n";
cout<<"*****************************"<<"\n";
if(5==5);
cout<<"Name:Hgit Amed Al flafth"<<"\n";
cout<<"Gvein Name:huoooot"<<"\n";
cout<<"Email in fromal:huooootgmail@.com"<<"\n";
cout<<"yomi Name :hgiiiiit"<<"\n";
cout<<"given Name yomi:yyota"<<"\n";
cout<<"additional Name:ssoso"<<"\n";
cout<<"Email fromal:Hgitgmail@ hotmail"<<"\n";
cout<<"mobuile home :90237890"<< "\n";
cout<<"mobuile work:012678290"<<"\n";
cout<<"mobuile :012236790"<<"\n";
cout<<"ather:099958902"<<"\n";
cout<<"organiztion tit:Advertisting and annoncing company"<<"\n";
cout<<"organztion Departmen:Advertising section"<<"\n";
cout<<"organztion locatio:Arab market"<<"\n";
cout<<"organztion jobDescip:sell the companys products"<<"\n";
list.removeAt(5);
cout<<"enter Remove of index 5"<<"clear log "<<"\n";
cout<<"************************"<<"\n";
  

if(6==6)
cout<<"Name:nbil Ail"<<"\n";
cout<<"Gvein Name:Blu"<<"\n";
cout<<"yomi Name:nuboo"<<"\n";
cout<<"family Name yomim:the king"<<"\n";
cout<<"addition Name: maizn"<<"\n";
cout<<"Email in fromal:Blu gmail@hot maill"<<"\n";
cout<<"Email fromal:nbil gmail@hoit09"<<"\n";
cout<<"mobile home:09045679"<<"/n";
cout<<"mobile work:01257968"<<"\n";
cout<<"mobile:09012579"<<"\n";
cout<<"ather:099913579"<<"\n";
cout<<"organiztion tit:iron Asaad"<<"\n";
cout<<"organztion Departmen:iron prodction"<<"\n";
cout<<"organztion locatio:soba thermal station"<<"\n";
cout<<"organztion jobDescip:iron smelting ang formation " <<"\n";
list.removeAt(6);
cout<<"enter Remove of index 6"<<"clear log"<<"\n";
cout<<"****************************************************"<<"\n";
if(7==7)
cout<<"Name Eba  momed"<<"\n";
cout<<"Gvein Name  Eaba"<<"\n";
cout<<"Email in fromal : Eaba  gmail@hot mail36"<<"\n";
cout<<"Email fromal:Eba gamil@ hot mail23"<<"\n";
cout<<"mobile home:09023678"<<"\n";
cout<<"mobile work:012689034"<<"\n";
cout<<"mobile:0999123678"<<"\n";
cout<<"athe : 012789035"<<"\n";
cout<<"organiztion tit:sunrise chamel"<<"\n";
cout<<"organztion Departmen:submission section"<<"\n";
cout<<"organztion locatio:omdurman"<<"\n";
cout<<"organztion jobDescip:prenting Tv programs"<<"\n" ;
list.removeAt(7);
cout<<"enter Remove of index 7"<<"clear log"<<"\n";
cout<<"*******************************************"<<"\n";
if(8==8)
cout<<"Name :Amin Aill"<<"\n";
cout<<"Gvein Name: muro "<<"\n";

cout<<"Email in fromal: Muro  gmail@ 9012"<<"\n";
cout<<"yomi Name:amiieen"<<"\n";
cout<<"Given Name yomi:Ailou"<<"\n";
cout<<"addition Name:akato"<<"\n";
cout<<"Email fromal:Amin gmail@235"<<"\n";
cout <<"mobile home:09044178903"<<"\n";
cout<<"mobile work:01236789"<<"\n";
cout<<"mobile:099956779"<<"\n";
cout<<"ather:01256890"<<"\n";
cout<<"organiztion tit:sheih Hospital"<<"\n";
cout<<"organztion Departmen:Accounts"<<"\n";
cout<<"organztion locatio:Arquette"<<"\n";
cout<<"organztion jobDescip:Take money from the sick in exchange form meeting the doctor"<<"\n";
list.removeAt(8);
cout<<"enter Remove of index 8"<<"clear log"<<"\n";
cout<<"**********************************************";
if(9==9)
cout<<"Name:mubark momed"<<"\n";
cout<<"Gvein Name:mr girector"<<"\n";
cout<<"Email in fromal mubark gmai@134;"<<"\n";
cout<<"Email fromal:mubark gamil@hot yuo.com"<<"\n";
cout<<"mobile home:091301389"<<"\n";
cout<<"moile:090123568"<<"\n";
cout<<"ather:01245679"<<"\n";
cout<<"organiztion tit:Amjad company"<<"\n";
cout<<"organztion Departmen:composite tire installation"<<"\n";
cout<<"organztion locatio:the Almab"<<"\n";
cout<<"organztion jobDescip:Repair of car tires "<<"\n";
list.removeAt(9);
cout<<"enter Remove of index 9"<<"clear log"<<"\n";
cout<<"**************************"<<"\n";
if(10==10)
cout<<"Name:Samia fars kamal";
cout<<"Gvein Name: smia "<<"\n";
cout<<"yomi Name susm"<<"\n";
cout<<"youmi Family name:frosa";

cout<<"family yoim name:slwo";

cout<<"Email in fromal :samigmail@hoit89"<<"\n";
cout<<"Email fromal:Sami fars gmail@hot 091"<<"\n";
cout<<"mobile home::09056782"<<"\n";
cout<<"mobile work:012356789"<<"\n";
cout<<"mobile:099956782"<<"\n";
cout<<"ather:0123578"<<"\n";
cout<<"organiztion tit:Doctors Hospital"<<"\n";
cout<<"organztion Departmen:Accident Department"<<"\n";
cout<<"organztion locatio:buildings street 37"<<"\n";
cout<<"organztion jobDescip:sickness treatment"<<"\n";
list.removeAt(10);
cout<<"enter Remove of index 10"<<"clear log"<<"\n";
cout<<"*************************************"<<"\n";
return 0;}
