#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNorm;
layout (location = 2) in vec2 aTextureCoord;

out VS_OUT {
   vec2 TextureCoord;
   vec3 Normal;
   vec3 FragPos;
} vs_out;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
   vs_out.TextureCoord = aTextureCoord;
   vs_out.Normal = mat3(transpose(inverse(model))) * aNorm;
   vs_out.FragPos = vec3(model * vec4(aPos, 1.0f));
   gl_Position = projection * view * model * vec4(aPos, 1.0);
}