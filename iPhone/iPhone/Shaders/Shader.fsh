//
//  Shader.fsh
//  iPhone
//
//  Created by Chinmay Garde on 1/12/12.
//  Copyright (c) 2012 Carnegie Mellon University. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
