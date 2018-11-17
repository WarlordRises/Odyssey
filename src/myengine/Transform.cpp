#include "Transform.h"

void Transform::Translate(glm::vec3 _amount)
{

}

void Transform::Rotate(glm::vec3 _amount)
{

}

void Transform::Scale(glm::vec3 _amount)
{

}

void Transform::SetLocalPosition(glm::vec3 _position)
{
	m_localPosition = _position;
}

void Transform::SetLocalRotation(glm::vec3 _rotation)
{
	m_localRotation = _rotation;
}

void Transform::SetLocalScale(glm::vec3 _scale)
{
	m_localScale = _scale;
}