#include<iostream>
#include<math.h>

class Geometria{
	public:
		virtual float area()=0;
		virtual float perimetro()=0;
};//end of class Geometria

class Triangulo : public Geometria{
	private:
		int lado1;
		int lado2;
		int lado3;
	public:
		//Setter:
		void setLado1(int lado);
		void setLado2(int lado);
		void setLado3(int lado);
		//Getter:
		int getLado1();
		int getLado2();
		int getLado3();
		
		float perimetro();
		float area();
};//end of class Triangulo

class Circulo : public Geometria{
	private:
		int raio;
		const int PI = 3.14;
	public:
		//Setter:
		void setRaio(int raio);
		//Getter:
		int getRaio();
		
		float perimetro();
		float area();
};//end of class Circulo

class Quadrado : public Geometria{
	private:
		int lado;
	public:
		//Setter:
		void setLado(int lado);
		//Getter:
		int getLado();
		
		float perimetro();
		float area();
};//end of class Quadrado

//Setter:
void Triangulo::setLado1(int lado){
	if(lado<0){
		this->lado1=0;
	}//end of if
	else{
		this->lado1=lado;
	}//end of else
}//end of setLado1

void Triangulo::setLado2(int lado){
        if(lado<0){
                this->lado2=0;
        }//end of if
        else{
                this->lado2=lado;
	}//end of else
}//end of setLado2

void Triangulo::setLado3(int lado){
        if(lado<0){
                this->lado3=0;
        }//end of if
        else{
                this->lado3=lado;
	}//end of else
}//end of setLado3

void Circulo::setRaio(int raio){
	if(raio<0){
		this->raio=0;
	}//end of if
	else{
		this->raio=raio;
	}//end of else
}//end of setRaio

void Quadrado::setLado(int lado){
	if(lado<0){
		this->lado=0;
	}//end of if
	else{
		this->lado=lado;
	}//end of else
}//end of setLado

//Getter:
int Triangulo::getLado1(){
	return this->lado1;
}//end of getLado1

int Triangulo::getLado2(){
        return this->lado2;
}//end of getLado2

int Triangulo::getLado3(){
        return this->lado3;
}//end of getLado3

int Circulo::getRaio(){
	return this->raio;
}//end of getRaio

int Quadrado::getLado(){
	return this->lado;
}//end of getLado()

//Perimetros:
float Triangulo::perimetro(){
	int lado1=getLado1();
	int lado2=getLado2();
	int lado3=getLado3();
	float perimetro = lado1 + lado2 + lado3;
	return perimetro;
}//end of Triangulo perimetro

float Circulo::perimetro(){
	int raio=getRaio();
	float perimetro = 2*raio*PI;
	return perimetro;
}//end of Circulo perimetro

float Quadrado::perimetro(){
	int lado=getLado();
	float perimetro = 4*lado;
	return perimetro;
}//end of Quadrado perimetro

//Áreas:
float Triangulo::area(){
	int lado1=getLado1();
	int lado2=getLado2();
	int lado3=getLado3();
	float semiPerimetro = (perimetro())/2;
	//Usando a fórmula de heron : raiz quadrada[semiPerimetro*(semiPerimetro-lado1)*(semiPerimetro-lado2)*(semiPerimetro-lado3)]
	float heron = semiPerimetro*(semiPerimetro-lado1)*(semiPerimetro-lado2)*(semiPerimetro-lado3);
	float area = sqrt(heron);
	return area;
}//end of Triangulo area

float Circulo::area(){
	int raio=getRaio();
	float area=raio*raio*PI;
	return area;
}//end of Circulo area

float Quadrado::area(){
	int lado=getLado();
	float area = lado*lado;
	return area;
}//end of Quadrado::area

int main(){
}//end of main
