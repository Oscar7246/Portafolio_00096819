#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

float ObtenerUl(Pila *s){
	if(empty(s))
		return -1;
		//Pila vacia
	float a = 0, b = 0;
	pop(s, &a);
	if(empty(s))
		return -1;
		//Un solo elemento
	pop(s, &b);
	push(s, a);
	push(s, b);
	return a;
}

float ObtenerUl2(Pila *s){
	if(empty(s))
		return -1;
		//Pila vacia
	float a = 0, b = 0;
	pop(s, &a);
	if(empty(s))
		return -1;
    //Un solo elemento
	pop(s, &b);
	pop(s, &b);
	pop(s, &b);
	pop(s, &b);
	pop(s, &b);
	return a;
}

//Ultimo y pila intacta
/*int main()
{
	Pila unaPila;
	initialize(&unaPila);
    //Elementos a buscar
	push(&unaPila, 1.2);
	push(&unaPila, 3.4);
	push(&unaPila, 5.6);
	push(&unaPila, 7.8);
	push(&unaPila, 9.2);
	push(&unaPila, 10.4);

	float Ultimo = ObtenerUl(&unaPila);
	cout << "Ultimo Valor: " << Ultimo << endl;
}*/


//Ultimo y pila vacia
int main()
{
	Pila unaPila;
	initialize(&unaPila);

	float y = 0;
	push(&unaPila, 1.2);
	push(&unaPila, 3.4);
	push(&unaPila, 5.6);
	push(&unaPila, 7.8);
	push(&unaPila, 9.2);
	push(&unaPila, 10.4);

    float Ultimo = ObtenerUl2(&unaPila);
	cout << "Ultimo Valor: " << Ultimo << endl;

    if(empty(&unaPila))
		cout << "Esta vacia" << endl;

}

