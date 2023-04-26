Shader "Custom/VHS_CRT_Animado"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _ScanlineSpeed ("Scanline Speed", Range(-50,50)) = 10
        _ScanlineStrength ("Scanline Strength", Range(0,1)) = 0.5
        _VHSEffect ("VHS Effect", Range(0,1)) = 0.5
    }
 
    SubShader
    {
        Tags {"Queue"="Transparent" "RenderType"="Opaque"}
        LOD 100
 
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
 
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };
 
            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };
 
            sampler2D _MainTex;
            float _ScanlineSpeed;
            float _ScanlineStrength;
            float _VHSEffect;
 
            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }
 
            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv);
 
                // Add Scanlines
                col.rgb *= 1.0 - (_ScanlineStrength + _ScanlineSpeed * sin((i.uv.y + _Time.y * 0.05) * 100));
 
                // Add VHS Effect
                col.r += (0.005 * _VHSEffect) * sin(col.r * 1.0 * col.g * 1.0 * col.b * 1.0 * 400.0 + _Time.y * 6.0);
                col.g += (0.005 * _VHSEffect) * sin(col.r * 1.0 * col.g * 1.0 * col.b * 1.0 * 400.0 + _Time.y * 6.0 + 1.33);
                col.b += (0.005 * _VHSEffect) * sin(col.r * 1.0 * col.g * 1.0 * col.b * 1.0 * 400.0 + _Time.y * 6.0 + 2.66);
 
                return col;
            }
            ENDCG
        }
    }
 
    FallBack "Diffuse"
}