#include "Circle.h"

Circle::Circle(double radius) {
  m_radius = radius;
}

double Circle::calculateArea() {
  return 3.1416 * m_radius * m_radius;
}

void Circle::setRadius(double radius) {
  if (radius >= 0) {
    m_radius = radius;
  }
}

double Circle::getRadius() const {
  return m_radius;
}
