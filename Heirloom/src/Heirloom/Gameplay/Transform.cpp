#include "hlpch.h"
#include "Transform.h"

namespace Heirloom
{
	Transform::Transform(const Ref<GameObject> gameObject)
		: m_Position(0.0f), m_Scale(0.0f), m_Parent(gameObject)
	{
	}

	Transform::Transform(const glm::vec3 position, const glm::vec3 scale, const Ref<GameObject> gameObject)
		: m_Position(position), m_Scale(scale), m_Parent(gameObject)
	{
	}

	void Transform::SetPosition(const float x, const float y, const float z) { SetPosition({x, y, z}); }

	void Transform::SetPosition(const glm::vec3 position) { m_Position = position; }

	void Transform::SetScale(const float x, const float y, const float z) { SetScale({x, y, z}); }

	void Transform::SetScale(const glm::vec3 scale) { m_Scale = scale; }

	void Transform::Update(Timestep)
	{
	}

	void Transform::Render()
	{
	}
}
