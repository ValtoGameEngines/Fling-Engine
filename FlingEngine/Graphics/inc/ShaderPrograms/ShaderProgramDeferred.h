#pragma once

#include "MeshRenderer.h"
#include "Lighting/Lighting.hpp"
#include "Components/Transform.h"
#include "Camera.h"
#include "FlingVulkan.h"
#include "GBuffer.h"

namespace Fling
{
    namespace ShaderProgramDeferred
    {
        void CreateDescriptorSets(
            MeshRenderer& t_MeshRend, 
            Lighting& m_Lighting,
            VkDescriptorSetLayout m_DescriptorLayout);

        void CreateDescriptorPool(MeshRenderer& t_MeshRend);

        void BindCmdBuffer(
            MeshRenderer& t_MeshRend,
            VkCommandBuffer t_CommandBuffer,
            GraphicsPipeline* t_GraphicsPipeline,
            UINT32 t_CommandBufferIndex);

        void UpdateUniformBuffer(
            MeshRenderer& t_MeshRend, 
            Transform& transform,
            UINT32 t_CurrentImage,
            Camera* t_Camera);

        void Release(
            MeshRenderer& t_MeshRend
        );


    }
}