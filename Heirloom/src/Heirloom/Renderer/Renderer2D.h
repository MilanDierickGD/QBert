// Author: Milan Dierick
// Created: 04/03/2021 10:58 PM
// Solution: HeirloomEngine

#pragma once
#include "OrthographicCamera.h"
#include "Shader.h"
#include "Sprite.h"
#include "Texture.h"
#include "VertexArray.h"

namespace Heirloom
{
	struct Renderer2DStorage
	{
		Ref<VertexArray> QuadVertexArray;
		Ref<Shader> TextureShader;
		Ref<Texture2D> WhiteTexture;
	};

	static Renderer2DStorage* s_Data;

	class Renderer2D
	{
	public:
		static void Init();
		static void Shutdown();

		static void BeginScene(OrthographicCamera& camera);
		static void EndScene();

		// Primitives
		static void DrawQuad(const glm::vec2& position, const glm::vec2& size, const glm::vec4& color);
		static void DrawQuad(const glm::vec3& position, const glm::vec2& size, const glm::vec4& color);
		static void DrawQuad(const glm::vec2& position,
							 const glm::vec2& size,
							 const Ref<Texture2D>& texture,
							 float tilingFactor         = 1.0f,
							 const glm::vec4& tintColor = glm::vec4(1.0f));
		static void DrawQuad(const glm::vec3& position,
							 const glm::vec2& size,
							 const Ref<Texture2D>& texture,
							 float tilingFactor         = 1.0f,
							 const glm::vec4& tintColor = glm::vec4(1.0f));
		static void DrawQuad(const Ref<Sprite> sprite);

		static void DrawRotatedQuad(const glm::vec2& position,
									const glm::vec2& size,
									float rotation,
									const glm::vec4& color);
		static void DrawRotatedQuad(const glm::vec3& position,
									const glm::vec2& size,
									float rotation,
									const glm::vec4& color);
		static void DrawRotatedQuad(const glm::vec2& position,
									const glm::vec2& size,
									float rotation,
									const Ref<Texture2D>& texture,
									float tilingFactor         = 1.0f,
									const glm::vec4& tintColor = glm::vec4(1.0f));
		static void DrawRotatedQuad(const glm::vec3& position,
									const glm::vec2& size,
									float rotation,
									const Ref<Texture2D>& texture,
									float tilingFactor         = 1.0f,
									const glm::vec4& tintColor = glm::vec4(1.0f));
		static void DrawRotatedQuad(Sprite& sprite);
	};
}