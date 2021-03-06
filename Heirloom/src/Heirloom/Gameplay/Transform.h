// Author: Milan Dierick
// Created: 02/03/2021 7:24 PM
// Solution: HeirloomEngine

#pragma once

#include "Components/Component.h"
#include "glm/vec3.hpp"

namespace Heirloom
{
	class Transform final : public Component
	{
	public:
		explicit Transform(Ref<GameObject> gameObject);
		Transform(glm::vec3 position, glm::vec3 scale, Ref<GameObject> gameObject);

		[[nodiscard]] const glm::vec3& GetPosition() const { return m_Position; }
		void SetPosition(float x, float y, float z);
		void SetPosition(glm::vec3 position);
		[[nodiscard]] const glm::vec3& GetScale() const { return m_Scale; }
		void SetScale(float x, float y, float z);
		void SetScale(glm::vec3 scale);
		WeakRef<GameObject> GetParent() const override { return m_Parent; }
		void SetParent(const Ref<GameObject> gameObject) override { m_Parent = gameObject; }

		void Update(Timestep ts) override;
		void Render() override;

	private:
		glm::vec3 m_Position;
		glm::vec3 m_Scale;
		WeakRef<GameObject> m_Parent;
	};
}
