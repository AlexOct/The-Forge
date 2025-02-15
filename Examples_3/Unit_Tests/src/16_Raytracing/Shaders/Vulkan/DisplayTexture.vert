#version 450 core

/*
 * Copyright (c) 2017-2022 The Forge Interactive Inc.
 * 
 * This file is part of The-Forge
 * (see https://github.com/ConfettiFX/The-Forge).
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
*/


out gl_PerVertex
{
  vec4 gl_Position;
};

layout(location = 0) out vec2 texcoord;

void main(void)
{
  vec4 p;
  uint id = gl_VertexIndex;
  p.x = (id == 2) ? 3.0 : -1.0;
  p.y = (id == 0) ? 3.0 : -1.0;
  p.z = 1.0;
  p.w = 1.0;

  gl_Position = p.xyzw;
  texcoord = p.xy * vec2(0.5, -0.5) + 0.5;
}