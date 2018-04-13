/********************************************************
 *                                                       *
 *   Copyright (C) Microsoft. All rights reserved.       *
 *                                                       *
 ********************************************************/

#include "precomp.h"
#include "TextAttributeRun.hpp"

size_t TextAttributeRun::GetLength() const
{
    return _cchLength;
}

void TextAttributeRun::SetLength(const size_t cchLength)
{
    _cchLength = cchLength;
}

const TextAttribute TextAttributeRun::GetAttributes() const
{
    return _attributes;
}

void TextAttributeRun::SetAttributes(const TextAttribute textAttribute)
{
    _attributes.SetFrom(textAttribute);
}