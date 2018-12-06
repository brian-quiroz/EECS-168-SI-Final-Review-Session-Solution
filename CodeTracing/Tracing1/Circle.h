#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	public:
		Circle(double radius);
		double calculateArea();
		void setRadius(double radius);
		double getRadius() const;
	private:
		double m_radius;
};

#endif
