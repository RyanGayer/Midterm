#include <iostream>
using namespace std;


class Stack{

private:
	int *arr;
	int stacksize;
	int top;


public:

	Stack(int size){
		

		arr = new int[size];
		top = -1;
		stacksize = size;


	}
	
	bool isFull();
	bool isEmpty();
	void push(int val);
	void pop(int & variable);

	


};

bool Stack::isFull(){
	return (top == stacksize - 1);

}

bool Stack::isEmpty(){
	return (top == -1);

}

void Stack::push(int val){

	if(isFull())
		return;
	top++;
	arr[top] = val;


}

void Stack::pop(int & variable){

	if(isEmpty())
		return;
	top--;
	variable = arr[top+1];


}

class dynStack{

private:

	struct Node{
		
		double data;
		Node *next;

	};

	Node *tos;



public:
	
	void push(double);
	void pop(double &);
	bool isEmpty(){

		return(tos == NULL);

	}


	dynStack(){

		tos = NULL;

	}

	~dynStack(){

	Node *temp;
	temp = tos;
	
	while(!isEmpty()){
	
	tos = tos->next;
	delete temp;
	temp = tos;
		}
	}



};

void dynStack::push(double v){

	Node *current = new Node;

	current->data = v;
	current->next = tos;
	tos = current;


}

void dynStack::pop(double & val){

	
	
	if(isEmpty()){

		cout<<"Stack Empty ";
		return;
	}
	
	Node *temp;
	
	temp = tos;
	val = tos->data;
	tos = tos->next;
	delete temp;
	


}

class dynQueue{

private:

	struct Node
	{
		char data;
		Node *next;

	};

	Node *front;
	Node *rear;



public:

	dynQueue(){

		front = NULL;
		rear = NULL;
	}

	~dynQueue(){

		Node *temp;
		temp = front;
	
		while(!isEmpty()){
	
			front = front->next;
			delete temp;
			temp = front;
		
		}
	}



	
	void enqueue(char val);
	void dequeue(char & );
	bool isEmpty(){

		return(front == NULL);

	}


};

void dynQueue::enqueue(char val){

	Node *newNode = new Node;
	newNode->data = val;
	newNode->next = NULL;
	

	if(isEmpty()){

		front = newNode;
		rear = newNode;
		return;
	}

	
	rear->next = newNode;
	rear = newNode;


}

void Stack::reverse(){
	dynQueue temp;



}

void dynQueue::dequeue(char & val){
	
	if(isEmpty()){

		return;

	}

	Node *temp;
	temp = front;

	val = front->data;
	front = front->next;

	delete temp; 



	

}





int main(){

	/*
	
	Stack *s1 = new Stack(10);

	s1->push(10);
	s1->push(20);




	int x;

	s1->pop(x);

	cout<<x<<endl;
	*/

	/*
	dynStack *test = new dynStack();

	double j = 0;

	
	test->push(10);
	test->push(20);
	test->push(30);
	test->push(40);
	

	test->pop(j);

	cout<<j<<endl;

	test->pop(j);

	cout<<j<<endl;
	*/

	dynQueue test;

	test.enqueue('a');
	test.enqueue('b');
	test.enqueue('c');

	char ran;

	test.dequeue(ran);

	cout<<ran<<endl;

	test.dequeue(ran);

	cout<<ran<<endl;

	system("pause");



}
