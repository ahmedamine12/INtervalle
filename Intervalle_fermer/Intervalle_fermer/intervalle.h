#pragma once
namespace INterv {
	class Intervalle
	{
	private:
		double minimum;
		double maximum;
	public:
		Intervalle(double a,double b);
		double min();
		double max();
		bool operator[](double m);
		void consulter();
		Intervalle& operator|(Intervalle &m);
		bool operator=(Intervalle m);
		Intervalle& operator+(Intervalle& m);


	};
}


