#include "vk-util.h"

#include "core/common.h"

#include <stdio.h>
#include <stdlib.h>

namespace rhi::vk {

VkFormat VulkanUtil::getVkFormat(Format format)
{
    switch (format)
    {
    case Format::R8Uint:
        return VK_FORMAT_R8_UINT;
    case Format::R8Sint:
        return VK_FORMAT_R8_SINT;
    case Format::R8Unorm:
        return VK_FORMAT_R8_UNORM;
    case Format::R8Snorm:
        return VK_FORMAT_R8_SNORM;

    case Format::RG8Uint:
        return VK_FORMAT_R8G8_UINT;
    case Format::RG8Sint:
        return VK_FORMAT_R8G8_SINT;
    case Format::RG8Unorm:
        return VK_FORMAT_R8G8_UNORM;
    case Format::RG8Snorm:
        return VK_FORMAT_R8G8_SNORM;

    case Format::RGBA8Uint:
        return VK_FORMAT_R8G8B8A8_UINT;
    case Format::RGBA8Sint:
        return VK_FORMAT_R8G8B8A8_SINT;
    case Format::RGBA8Unorm:
        return VK_FORMAT_R8G8B8A8_UNORM;
    case Format::RGBA8UnormSrgb:
        return VK_FORMAT_R8G8B8A8_SRGB;
    case Format::RGBA8Snorm:
        return VK_FORMAT_R8G8B8A8_SNORM;

    case Format::BGRA8Unorm:
        return VK_FORMAT_B8G8R8A8_UNORM;
    case Format::BGRA8UnormSrgb:
        return VK_FORMAT_B8G8R8A8_SRGB;
    case Format::BGRX8Unorm:
        return VK_FORMAT_B8G8R8A8_UNORM;
    case Format::BGRX8UnormSrgb:
        return VK_FORMAT_B8G8R8A8_SRGB;

    case Format::R16Uint:
        return VK_FORMAT_R16_UINT;
    case Format::R16Sint:
        return VK_FORMAT_R16_SINT;
    case Format::R16Unorm:
        return VK_FORMAT_R16_UNORM;
    case Format::R16Snorm:
        return VK_FORMAT_R16_SNORM;
    case Format::R16Float:
        return VK_FORMAT_R16_SFLOAT;

    case Format::RG16Uint:
        return VK_FORMAT_R16G16_UINT;
    case Format::RG16Sint:
        return VK_FORMAT_R16G16_SINT;
    case Format::RG16Unorm:
        return VK_FORMAT_R16G16_UNORM;
    case Format::RG16Snorm:
        return VK_FORMAT_R16G16_SNORM;
    case Format::RG16Float:
        return VK_FORMAT_R16G16_SFLOAT;

    case Format::RGBA16Uint:
        return VK_FORMAT_R16G16B16A16_UINT;
    case Format::RGBA16Sint:
        return VK_FORMAT_R16G16B16A16_SINT;
    case Format::RGBA16Unorm:
        return VK_FORMAT_R16G16B16A16_UNORM;
    case Format::RGBA16Snorm:
        return VK_FORMAT_R16G16B16A16_SNORM;
    case Format::RGBA16Float:
        return VK_FORMAT_R16G16B16A16_SFLOAT;

    case Format::R32Uint:
        return VK_FORMAT_R32_UINT;
    case Format::R32Sint:
        return VK_FORMAT_R32_SINT;
    case Format::R32Float:
        return VK_FORMAT_R32_SFLOAT;

    case Format::RG32Uint:
        return VK_FORMAT_R32G32_UINT;
    case Format::RG32Sint:
        return VK_FORMAT_R32G32_SINT;
    case Format::RG32Float:
        return VK_FORMAT_R32G32_SFLOAT;

    case Format::RGB32Uint:
        return VK_FORMAT_R32G32B32_UINT;
    case Format::RGB32Sint:
        return VK_FORMAT_R32G32B32_SINT;
    case Format::RGB32Float:
        return VK_FORMAT_R32G32B32_SFLOAT;

    case Format::RGBA32Uint:
        return VK_FORMAT_R32G32B32A32_UINT;
    case Format::RGBA32Sint:
        return VK_FORMAT_R32G32B32A32_SINT;
    case Format::RGBA32Float:
        return VK_FORMAT_R32G32B32A32_SFLOAT;

    case Format::R64Uint:
        return VK_FORMAT_R64_UINT;
    case Format::R64Sint:
        return VK_FORMAT_R64_SINT;

    case Format::BGRA4Unorm:
        return VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT;
    case Format::B5G6R5Unorm:
        return VK_FORMAT_R5G6B5_UNORM_PACK16;
    case Format::BGR5A1Unorm:
        return VK_FORMAT_A1R5G5B5_UNORM_PACK16;

    case Format::RGB9E5Ufloat:
        return VK_FORMAT_E5B9G9R9_UFLOAT_PACK32;
    case Format::RGB10A2Uint:
        return VK_FORMAT_A2B10G10R10_UINT_PACK32;
    case Format::RGB10A2Unorm:
        return VK_FORMAT_A2B10G10R10_UNORM_PACK32;
    case Format::R11G11B10Float:
        return VK_FORMAT_B10G11R11_UFLOAT_PACK32;

    case Format::D32Float:
        return VK_FORMAT_D32_SFLOAT;
    case Format::D16Unorm:
        return VK_FORMAT_D16_UNORM;
    case Format::D32FloatS8Uint:
        return VK_FORMAT_D32_SFLOAT_S8_UINT;

    case Format::BC1Unorm:
        return VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
    case Format::BC1UnormSrgb:
        return VK_FORMAT_BC1_RGBA_SRGB_BLOCK;
    case Format::BC2Unorm:
        return VK_FORMAT_BC2_UNORM_BLOCK;
    case Format::BC2UnormSrgb:
        return VK_FORMAT_BC2_SRGB_BLOCK;
    case Format::BC3Unorm:
        return VK_FORMAT_BC3_UNORM_BLOCK;
    case Format::BC3UnormSrgb:
        return VK_FORMAT_BC3_SRGB_BLOCK;
    case Format::BC4Unorm:
        return VK_FORMAT_BC4_UNORM_BLOCK;
    case Format::BC4Snorm:
        return VK_FORMAT_BC4_SNORM_BLOCK;
    case Format::BC5Unorm:
        return VK_FORMAT_BC5_UNORM_BLOCK;
    case Format::BC5Snorm:
        return VK_FORMAT_BC5_SNORM_BLOCK;
    case Format::BC6HUfloat:
        return VK_FORMAT_BC6H_UFLOAT_BLOCK;
    case Format::BC6HSfloat:
        return VK_FORMAT_BC6H_SFLOAT_BLOCK;
    case Format::BC7Unorm:
        return VK_FORMAT_BC7_UNORM_BLOCK;
    case Format::BC7UnormSrgb:
        return VK_FORMAT_BC7_SRGB_BLOCK;

    default:
        return VK_FORMAT_UNDEFINED;
    }
}

VkImageAspectFlags VulkanUtil::getAspectMask(TextureAspect aspect, VkFormat format)
{
    switch (aspect)
    {
    case TextureAspect::All:
        switch (format)
        {
        case VK_FORMAT_D16_UNORM_S8_UINT:
        case VK_FORMAT_D24_UNORM_S8_UINT:
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            return VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT;
        case VK_FORMAT_D16_UNORM:
        case VK_FORMAT_D32_SFLOAT:
        case VK_FORMAT_X8_D24_UNORM_PACK32:
            return VK_IMAGE_ASPECT_DEPTH_BIT;
        case VK_FORMAT_S8_UINT:
            return VK_IMAGE_ASPECT_STENCIL_BIT;
        default:
            return VK_IMAGE_ASPECT_COLOR_BIT;
        }
    case TextureAspect::DepthOnly:
        return VK_IMAGE_ASPECT_DEPTH_BIT;
    case TextureAspect::StencilOnly:
        return VK_IMAGE_ASPECT_STENCIL_BIT;
    default:
        SLANG_RHI_UNREACHABLE("getAspectMask");
        return 0;
    }
}

Result VulkanUtil::toResult(VkResult res)
{
    return (res == VK_SUCCESS) ? SLANG_OK : SLANG_FAIL;
}

VkShaderStageFlags VulkanUtil::getShaderStage(SlangStage stage)
{
    switch (stage)
    {
    case SLANG_STAGE_ANY_HIT:
        return VK_SHADER_STAGE_ANY_HIT_BIT_KHR;
    case SLANG_STAGE_CALLABLE:
        return VK_SHADER_STAGE_CALLABLE_BIT_KHR;
    case SLANG_STAGE_CLOSEST_HIT:
        return VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR;
    case SLANG_STAGE_COMPUTE:
        return VK_SHADER_STAGE_COMPUTE_BIT;
    case SLANG_STAGE_DOMAIN:
        return VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT;
    case SLANG_STAGE_FRAGMENT:
        return VK_SHADER_STAGE_FRAGMENT_BIT;
    case SLANG_STAGE_GEOMETRY:
        return VK_SHADER_STAGE_GEOMETRY_BIT;
    case SLANG_STAGE_HULL:
        return VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT;
    case SLANG_STAGE_INTERSECTION:
        return VK_SHADER_STAGE_INTERSECTION_BIT_KHR;
    case SLANG_STAGE_MISS:
        return VK_SHADER_STAGE_MISS_BIT_KHR;
    case SLANG_STAGE_RAY_GENERATION:
        return VK_SHADER_STAGE_RAYGEN_BIT_KHR;
    case SLANG_STAGE_VERTEX:
        return VK_SHADER_STAGE_VERTEX_BIT;
    case SLANG_STAGE_MESH:
        return VK_SHADER_STAGE_MESH_BIT_EXT;
    case SLANG_STAGE_AMPLIFICATION:
        return VK_SHADER_STAGE_TASK_BIT_EXT;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported stage.");
        return VkShaderStageFlags(-1);
    }
}

VkImageLayout VulkanUtil::getImageLayoutFromState(ResourceState state)
{
    switch (state)
    {
    case ResourceState::ShaderResource:
        return VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    case ResourceState::UnorderedAccess:
    case ResourceState::General:
        return VK_IMAGE_LAYOUT_GENERAL;
    case ResourceState::Present:
        return VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    case ResourceState::CopySource:
        return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    case ResourceState::CopyDestination:
        return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    case ResourceState::RenderTarget:
        return VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    case ResourceState::DepthWrite:
        return VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    case ResourceState::DepthRead:
        return VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
    case ResourceState::ResolveSource:
        return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    case ResourceState::ResolveDestination:
        return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    default:
        return VK_IMAGE_LAYOUT_UNDEFINED;
    }
    return VkImageLayout();
}

VkSampleCountFlagBits VulkanUtil::translateSampleCount(uint32_t sampleCount)
{
    switch (sampleCount)
    {
    case 1:
        return VK_SAMPLE_COUNT_1_BIT;
    case 2:
        return VK_SAMPLE_COUNT_2_BIT;
    case 4:
        return VK_SAMPLE_COUNT_4_BIT;
    case 8:
        return VK_SAMPLE_COUNT_8_BIT;
    case 16:
        return VK_SAMPLE_COUNT_16_BIT;
    case 32:
        return VK_SAMPLE_COUNT_32_BIT;
    case 64:
        return VK_SAMPLE_COUNT_64_BIT;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported sample count");
        return VK_SAMPLE_COUNT_1_BIT;
    }
}

VkCullModeFlags VulkanUtil::translateCullMode(CullMode cullMode)
{
    switch (cullMode)
    {
    case CullMode::None:
        return VK_CULL_MODE_NONE;
    case CullMode::Front:
        return VK_CULL_MODE_FRONT_BIT;
    case CullMode::Back:
        return VK_CULL_MODE_BACK_BIT;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported cull mode");
        return VK_CULL_MODE_NONE;
    }
}

VkFrontFace VulkanUtil::translateFrontFaceMode(FrontFaceMode frontFaceMode)
{
    switch (frontFaceMode)
    {
    case FrontFaceMode::CounterClockwise:
        return VK_FRONT_FACE_COUNTER_CLOCKWISE;
    case FrontFaceMode::Clockwise:
        return VK_FRONT_FACE_CLOCKWISE;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported front face mode");
        return VK_FRONT_FACE_CLOCKWISE;
    }
}

VkPolygonMode VulkanUtil::translateFillMode(FillMode fillMode)
{
    switch (fillMode)
    {
    case FillMode::Solid:
        return VK_POLYGON_MODE_FILL;
    case FillMode::Wireframe:
        return VK_POLYGON_MODE_LINE;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported fill mode");
        return VK_POLYGON_MODE_FILL;
    }
}

VkBlendFactor VulkanUtil::translateBlendFactor(BlendFactor blendFactor)
{
    switch (blendFactor)
    {
    case BlendFactor::Zero:
        return VK_BLEND_FACTOR_ZERO;
    case BlendFactor::One:
        return VK_BLEND_FACTOR_ONE;
    case BlendFactor::SrcColor:
        return VK_BLEND_FACTOR_SRC_COLOR;
    case BlendFactor::InvSrcColor:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    case BlendFactor::SrcAlpha:
        return VK_BLEND_FACTOR_SRC_ALPHA;
    case BlendFactor::InvSrcAlpha:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case BlendFactor::DestAlpha:
        return VK_BLEND_FACTOR_DST_ALPHA;
    case BlendFactor::InvDestAlpha:
        return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    case BlendFactor::DestColor:
        return VK_BLEND_FACTOR_DST_COLOR;
    case BlendFactor::InvDestColor:
        return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    case BlendFactor::SrcAlphaSaturate:
        return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
    case BlendFactor::BlendColor:
        return VK_BLEND_FACTOR_CONSTANT_COLOR;
    case BlendFactor::InvBlendColor:
        return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
    case BlendFactor::SecondarySrcColor:
        return VK_BLEND_FACTOR_SRC1_COLOR;
    case BlendFactor::InvSecondarySrcColor:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
    case BlendFactor::SecondarySrcAlpha:
        return VK_BLEND_FACTOR_SRC1_ALPHA;
    case BlendFactor::InvSecondarySrcAlpha:
        return VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;

    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported blend factor");
        return VK_BLEND_FACTOR_ONE;
    }
}

VkBlendOp VulkanUtil::translateBlendOp(BlendOp op)
{
    switch (op)
    {
    case BlendOp::Add:
        return VK_BLEND_OP_ADD;
    case BlendOp::Subtract:
        return VK_BLEND_OP_SUBTRACT;
    case BlendOp::ReverseSubtract:
        return VK_BLEND_OP_REVERSE_SUBTRACT;
    case BlendOp::Min:
        return VK_BLEND_OP_MIN;
    case BlendOp::Max:
        return VK_BLEND_OP_MAX;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unsupported blend op");
        return VK_BLEND_OP_ADD;
    }
}

VkPrimitiveTopology VulkanUtil::translatePrimitiveListTopology(PrimitiveTopology topology)
{
    switch (topology)
    {
    case PrimitiveTopology::PointList:
        return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
    case PrimitiveTopology::LineList:
        return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
    case PrimitiveTopology::LineStrip:
        return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
    case PrimitiveTopology::TriangleList:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    case PrimitiveTopology::TriangleStrip:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
    case PrimitiveTopology::PatchList:
        return VK_PRIMITIVE_TOPOLOGY_PATCH_LIST;
    default:
        SLANG_RHI_ASSERT_FAILURE("Unknown topology type.");
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
}

VkStencilOp VulkanUtil::translateStencilOp(StencilOp op)
{
    switch (op)
    {
    case StencilOp::DecrementSaturate:
        return VK_STENCIL_OP_DECREMENT_AND_CLAMP;
    case StencilOp::DecrementWrap:
        return VK_STENCIL_OP_DECREMENT_AND_WRAP;
    case StencilOp::IncrementSaturate:
        return VK_STENCIL_OP_INCREMENT_AND_CLAMP;
    case StencilOp::IncrementWrap:
        return VK_STENCIL_OP_INCREMENT_AND_WRAP;
    case StencilOp::Invert:
        return VK_STENCIL_OP_INVERT;
    case StencilOp::Keep:
        return VK_STENCIL_OP_KEEP;
    case StencilOp::Replace:
        return VK_STENCIL_OP_REPLACE;
    case StencilOp::Zero:
        return VK_STENCIL_OP_ZERO;
    default:
        return VK_STENCIL_OP_KEEP;
    }
}

VkFilter VulkanUtil::translateFilterMode(TextureFilteringMode mode)
{
    switch (mode)
    {
    default:
        return VkFilter(0);

#define CASE(SRC, DST)                                                                                                 \
    case TextureFilteringMode::SRC:                                                                                    \
        return VK_FILTER_##DST

        CASE(Point, NEAREST);
        CASE(Linear, LINEAR);

#undef CASE
    }
}

VkSamplerMipmapMode VulkanUtil::translateMipFilterMode(TextureFilteringMode mode)
{
    switch (mode)
    {
    default:
        return VkSamplerMipmapMode(0);

#define CASE(SRC, DST)                                                                                                 \
    case TextureFilteringMode::SRC:                                                                                    \
        return VK_SAMPLER_MIPMAP_MODE_##DST

        CASE(Point, NEAREST);
        CASE(Linear, LINEAR);

#undef CASE
    }
}

VkSamplerAddressMode VulkanUtil::translateAddressingMode(TextureAddressingMode mode)
{
    switch (mode)
    {
    default:
        return VkSamplerAddressMode(0);

#define CASE(SRC, DST)                                                                                                 \
    case TextureAddressingMode::SRC:                                                                                   \
        return VK_SAMPLER_ADDRESS_MODE_##DST

        CASE(Wrap, REPEAT);
        CASE(ClampToEdge, CLAMP_TO_EDGE);
        CASE(ClampToBorder, CLAMP_TO_BORDER);
        CASE(MirrorRepeat, MIRRORED_REPEAT);
        CASE(MirrorOnce, MIRROR_CLAMP_TO_EDGE);

#undef CASE
    }
}

VkCompareOp VulkanUtil::translateComparisonFunc(ComparisonFunc func)
{
    switch (func)
    {
    default:
        // TODO: need to report failures
        return VK_COMPARE_OP_ALWAYS;

#define CASE(FROM, TO)                                                                                                 \
    case ComparisonFunc::FROM:                                                                                         \
        return VK_COMPARE_OP_##TO

        CASE(Never, NEVER);
        CASE(Less, LESS);
        CASE(Equal, EQUAL);
        CASE(LessEqual, LESS_OR_EQUAL);
        CASE(Greater, GREATER);
        CASE(NotEqual, NOT_EQUAL);
        CASE(GreaterEqual, GREATER_OR_EQUAL);
        CASE(Always, ALWAYS);
#undef CASE
    }
}

VkStencilOpState VulkanUtil::translateStencilState(DepthStencilOpDesc desc)
{
    VkStencilOpState rs;
    rs.compareMask = 0xFF;
    rs.compareOp = translateComparisonFunc(desc.stencilFunc);
    rs.depthFailOp = translateStencilOp(desc.stencilDepthFailOp);
    rs.failOp = translateStencilOp(desc.stencilFailOp);
    rs.passOp = translateStencilOp(desc.stencilPassOp);
    rs.reference = 0;
    rs.writeMask = 0xFF;
    return rs;
}

VkSamplerReductionMode VulkanUtil::translateReductionOp(TextureReductionOp op)
{
    switch (op)
    {
    case TextureReductionOp::Minimum:
        return VK_SAMPLER_REDUCTION_MODE_MIN;
    case TextureReductionOp::Maximum:
        return VK_SAMPLER_REDUCTION_MODE_MAX;
    default:
        return VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE;
    }
}

VkComponentTypeKHR VulkanUtil::translateCooperativeVectorComponentType(CooperativeVectorComponentType type)
{
    switch (type)
    {
    case CooperativeVectorComponentType::Float16:
        return VK_COMPONENT_TYPE_FLOAT16_KHR;
    case CooperativeVectorComponentType::Float32:
        return VK_COMPONENT_TYPE_FLOAT32_KHR;
    case CooperativeVectorComponentType::Float64:
        return VK_COMPONENT_TYPE_FLOAT64_KHR;
    case CooperativeVectorComponentType::Sint8:
        return VK_COMPONENT_TYPE_SINT8_KHR;
    case CooperativeVectorComponentType::Sint16:
        return VK_COMPONENT_TYPE_SINT16_KHR;
    case CooperativeVectorComponentType::Sint32:
        return VK_COMPONENT_TYPE_SINT32_KHR;
    case CooperativeVectorComponentType::Sint64:
        return VK_COMPONENT_TYPE_SINT64_KHR;
    case CooperativeVectorComponentType::Uint8:
        return VK_COMPONENT_TYPE_UINT8_KHR;
    case CooperativeVectorComponentType::Uint16:
        return VK_COMPONENT_TYPE_UINT16_KHR;
    case CooperativeVectorComponentType::Uint32:
        return VK_COMPONENT_TYPE_UINT32_KHR;
    case CooperativeVectorComponentType::Uint64:
        return VK_COMPONENT_TYPE_UINT64_KHR;
    case CooperativeVectorComponentType::Sint8Packed:
        return VK_COMPONENT_TYPE_SINT8_PACKED_NV;
    case CooperativeVectorComponentType::Uint8Packed:
        return VK_COMPONENT_TYPE_UINT8_PACKED_NV;
    case CooperativeVectorComponentType::FloatE4M3:
        return VK_COMPONENT_TYPE_FLOAT_E4M3_NV;
    case CooperativeVectorComponentType::FloatE5M2:
        return VK_COMPONENT_TYPE_FLOAT_E5M2_NV;
    default:
        return VkComponentTypeKHR(0);
    }
}

CooperativeVectorComponentType VulkanUtil::translateCooperativeVectorComponentType(VkComponentTypeKHR type)
{
    switch (type)
    {
    case VK_COMPONENT_TYPE_FLOAT16_KHR:
        return CooperativeVectorComponentType::Float16;
    case VK_COMPONENT_TYPE_FLOAT32_KHR:
        return CooperativeVectorComponentType::Float32;
    case VK_COMPONENT_TYPE_FLOAT64_KHR:
        return CooperativeVectorComponentType::Float64;
    case VK_COMPONENT_TYPE_SINT8_KHR:
        return CooperativeVectorComponentType::Sint8;
    case VK_COMPONENT_TYPE_SINT16_KHR:
        return CooperativeVectorComponentType::Sint16;
    case VK_COMPONENT_TYPE_SINT32_KHR:
        return CooperativeVectorComponentType::Sint32;
    case VK_COMPONENT_TYPE_SINT64_KHR:
        return CooperativeVectorComponentType::Sint64;
    case VK_COMPONENT_TYPE_UINT8_KHR:
        return CooperativeVectorComponentType::Uint8;
    case VK_COMPONENT_TYPE_UINT16_KHR:
        return CooperativeVectorComponentType::Uint16;
    case VK_COMPONENT_TYPE_UINT32_KHR:
        return CooperativeVectorComponentType::Uint32;
    case VK_COMPONENT_TYPE_UINT64_KHR:
        return CooperativeVectorComponentType::Uint64;
    case VK_COMPONENT_TYPE_SINT8_PACKED_NV:
        return CooperativeVectorComponentType::Sint8Packed;
    case VK_COMPONENT_TYPE_UINT8_PACKED_NV:
        return CooperativeVectorComponentType::Uint8Packed;
    case VK_COMPONENT_TYPE_FLOAT_E4M3_NV:
        return CooperativeVectorComponentType::FloatE4M3;
    case VK_COMPONENT_TYPE_FLOAT_E5M2_NV:
        return CooperativeVectorComponentType::FloatE5M2;
    default:
        return CooperativeVectorComponentType(0);
    }
}

VkCooperativeVectorMatrixLayoutNV VulkanUtil::translateCooperativeVectorMatrixLayout(
    CooperativeVectorMatrixLayout layout
)
{
    switch (layout)
    {
    case CooperativeVectorMatrixLayout::RowMajor:
        return VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_ROW_MAJOR_NV;
    case CooperativeVectorMatrixLayout::ColumnMajor:
        return VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_COLUMN_MAJOR_NV;
    case CooperativeVectorMatrixLayout::InferencingOptimal:
        return VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_INFERENCING_OPTIMAL_NV;
    case CooperativeVectorMatrixLayout::TrainingOptimal:
        return VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_TRAINING_OPTIMAL_NV;
    default:
        return VkCooperativeVectorMatrixLayoutNV(0);
    }
}

CooperativeVectorMatrixLayout VulkanUtil::translateCooperativeVectorMatrixLayout(
    VkCooperativeVectorMatrixLayoutNV layout
)
{
    switch (layout)
    {
    case VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_ROW_MAJOR_NV:
        return CooperativeVectorMatrixLayout::RowMajor;
    case VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_COLUMN_MAJOR_NV:
        return CooperativeVectorMatrixLayout::ColumnMajor;
    case VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_INFERENCING_OPTIMAL_NV:
        return CooperativeVectorMatrixLayout::InferencingOptimal;
    case VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_TRAINING_OPTIMAL_NV:
        return CooperativeVectorMatrixLayout::TrainingOptimal;
    default:
        return CooperativeVectorMatrixLayout(0);
    }
}

VkConvertCooperativeVectorMatrixInfoNV VulkanUtil::translateConvertCooperativeVectorMatrixDesc(
    const ConvertCooperativeVectorMatrixDesc& desc
)
{
    VkConvertCooperativeVectorMatrixInfoNV info = {VK_STRUCTURE_TYPE_CONVERT_COOPERATIVE_VECTOR_MATRIX_INFO_NV};
    info.srcSize = desc.srcSize;
    info.srcData.deviceAddress = desc.srcData.deviceAddress;
    info.pDstSize = desc.dstSize;
    info.dstData.deviceAddress = desc.dstData.deviceAddress;
    info.srcComponentType = VulkanUtil::translateCooperativeVectorComponentType(desc.srcComponentType);
    info.dstComponentType = VulkanUtil::translateCooperativeVectorComponentType(desc.dstComponentType);
    info.numRows = desc.rowCount;
    info.numColumns = desc.colCount;
    info.srcLayout = VulkanUtil::translateCooperativeVectorMatrixLayout(desc.srcLayout);
    info.srcStride = desc.srcStride;
    info.dstLayout = VulkanUtil::translateCooperativeVectorMatrixLayout(desc.dstLayout);
    info.dstStride = desc.dstStride;
    return info;
}

Result VulkanUtil::handleFail(VkResult res)
{
    if (res != VK_SUCCESS)
    {
        SLANG_RHI_ASSERT_FAILURE("Vulkan returned a failure");
    }
    return toResult(res);
}

void VulkanUtil::checkFail(VkResult res)
{
    SLANG_RHI_ASSERT(res != VK_SUCCESS);
    SLANG_RHI_ASSERT_FAILURE("Vulkan check failed");
}

VkPrimitiveTopology VulkanUtil::getVkPrimitiveTopology(PrimitiveTopology topology)
{
    switch (topology)
    {
    case PrimitiveTopology::LineList:
        return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
    case PrimitiveTopology::LineStrip:
        return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
    case PrimitiveTopology::TriangleList:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    case PrimitiveTopology::TriangleStrip:
        return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
    case PrimitiveTopology::PointList:
        return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
    default:
        break;
    }
    SLANG_RHI_ASSERT_FAILURE("Unknown topology");
    return VK_PRIMITIVE_TOPOLOGY_MAX_ENUM;
}

VkImageLayout VulkanUtil::mapResourceStateToLayout(ResourceState state)
{
    switch (state)
    {
    case ResourceState::Undefined:
        return VK_IMAGE_LAYOUT_UNDEFINED;
    case ResourceState::ShaderResource:
        return VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    case ResourceState::UnorderedAccess:
        return VK_IMAGE_LAYOUT_GENERAL;
    case ResourceState::RenderTarget:
        return VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    case ResourceState::DepthRead:
        return VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
    case ResourceState::DepthWrite:
        return VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    case ResourceState::Present:
        return VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    case ResourceState::CopySource:
        return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    case ResourceState::CopyDestination:
        return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    case ResourceState::ResolveSource:
        return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    case ResourceState::ResolveDestination:
        return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    default:
        return VK_IMAGE_LAYOUT_UNDEFINED;
    }
}

} // namespace rhi::vk
