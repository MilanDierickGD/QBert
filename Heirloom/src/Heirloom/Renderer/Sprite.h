// Author: Milan Dierick
// Created: 12/04/2021 6:45 PM
// Solution: HeirloomEngine

#pragma once
#include "Texture.h"
#include "glm/glm.hpp"

namespace Heirloom
{
	struct Sprite
	{
		[[nodiscard]] explicit Sprite(const Ref<Texture2D>& texture = nullptr,
									  const glm::vec3& position     = glm::vec3(0.0f),
									  const glm::vec2& size         = glm::vec2(1.0f),
									  const float rotation          = 0.0f,
									  const float tilingFactor      = 1.0f,
									  const glm::vec4& tintColor    = glm::vec4(1.0f))
			: Position(position),
			  Size(size),
			  Rotation(rotation),
			  Texture(texture),
			  TilingFactor(tilingFactor),
			  TintColor(tintColor)
		{
		}

		glm::vec3 Position;
		glm::vec2 Size;
		float Rotation;
		Ref<Texture2D> Texture;
		float TilingFactor;
		glm::vec4 TintColor;
	};
}
