#ifndef VEICULO_H_
#define VEICULO_H_
using namespace std;

class Veiculo{
	private:
		float peso;
		float velmax;
		float preco;
    public:
    	Veiculo();
    	Veiculo(float,float,float);
    	virtual ~Veiculo();
    	void setPeso(float);
    	void setVelmax(float);
    	void setPreco(float);
    	float getPeso();
    	float getVelmax();
    	float getPreco();
    	void print();
};
#endif
