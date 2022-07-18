#include <iostream>

class Figure { // ����������� ����� ������
public:

	virtual double square() = 0;
	virtual double perimmetre() = 0;
	virtual double print() = 0;
};





class Point : public Figure {  // �����
public:

	int x = 0;
	int y = 0;

	double square() override {
		throw std::exception("no for point!!!");
	}

	double perimmetre() override {
		throw std::exception("no for point!!!");
	}

	double print() override {
		std::cout << "point" << "\n";
	}
};





class Straight : public Figure { //  ������
public:
	Point start;
	Point finish;

	double square() override {
		throw std::exception("no for point!!!");
	}

	double perimmetre() override {
		return std::sqrt(std::pow(finish.y - start.y, 2) + std::pow(finish.x - start.x, 2));
	}

	double print() override {
		std::cout << "straight" << "\n";
	}
};





class Circle : public  Figure { // ����
public:

	double radius1;
	double pi = 3.14;

	double square() override {
		return pi * radius1 * radius1;
	}

	double perimmetre() override {
		return 2 * pi * radius1;
	}

	double print() override {
		std::cout << "circle" << "\n";
	}
};




class Ellipse : public Circle { // �����
public:

	double radius2;

	double square() override {
		return pi * radius1 * radius2;
	}

	double perimmetre() override {
		return 4 * ((pi * radius1 * radius2 + (radius1 - radius2) * (radius1 - radius2)) / (radius1 + radius2));
	}

	double print() override {
		std::cout << "ellipse" << "\n";
	}
};



class Polygon : public Figure {}; // �������������

class Triangle : public Polygon { // �����������
public:

	double a;
	double b;
	double c;
	double height;

	double square() override {
		return 0.5 * a * height;
	}

	double perimmetre() override {
		return a + b + c;
	}

	double print() override {
		std::cout << "triangle" << "\n";
	}
};




class RegularTriangle : public Triangle { //������������� �����������
public:
	double print() override {
		std::cout << "RegularTriangle" << "\n";
	}
};



class RegularObtuseTriangle : public Triangle { // �������������� �����������
public:
	double print() override {
		std::cout << "RegularObtuseTriangle" << "\n";
	}
};




class IsoscelesObtuseTriangle : public Triangle { // ��������������
public:
	double print() override {
		std::cout << "IsoscelesObtuseTriangle" << "\n";
	}
};



class EquilateralAcuteTriangle : public Triangle { // ������������ �����������
public:
	double print() override {
		std::cout << "EquilateralAcuteTriangle" << "\n";
	}
};




class RegularObtuseTriangleStupid : public Triangle { // �������������� ������������ �����������
public:
	double print() override {
		std::cout << "RegularObtuseTriangleStupid" << "\n";
	}
};




class IsoscelesObtuseTriangleStupid : public Triangle { // ������������� �����������
public:
	double print() override {
		std::cout << "IsoscelesObtuseTriangleStupid" << "\n";
	}
};




class RegularRectangularTriangle : public Triangle { // ��������������  ������������� �����������
public:
	double print() override {
		std::cout << "RegularRectangularTriangle" << "\n";
	}
};




class Quadrilateral : public Polygon { // ���������������
public:
	double a;
	double b;
	double c;
	double d;
	double height1;
	double height2;

	double perimmetre() override {
		return a + b + c + d;
	}

};





class Trapeze : public Quadrilateral { // ��������
public:

	double square() override {
		return 0.5 * (a + b) * height1;
	}

	double print() override {
		std::cout << "Trapeze" << "\n";
	}
};




class Deltoid : public Quadrilateral { // ��������
public:

	double square() override {
		return 0.5 * height1 * height2;
	}

	double print() override {
		std::cout << "Deltoid" << "\n";
	}
};






class Rhombus : public Deltoid { // ����
public:

	double print() override {
		std::cout << "Rhombus" << "\n";
	}
};




class Parallelogram : public Quadrilateral { // �������������
public:

	double square() override {
		return a * height1;
	}

	double print() override {
		std::cout << "Parallelogram" << "\n";
	}
};



class Rectangle : public Parallelogram { // �������������
public:

	double square() override {
		return a * b;
	}

	double print() override {
		std::cout << "Rectangle" << "\n";
	}
};



class Quadrate : public Rectangle { // �������
public:

	double print() override {
		std::cout << "Quadrate" << "\n";
	}
};





int main()
{
	

}

