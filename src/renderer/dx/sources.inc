!include ..\..\..\project.inc

# -------------------------------------
# Windows Console
# - Console Renderer for DirectX
# -------------------------------------

# This module provides a rendering engine implementation that
# draws to a DirectX surface.

# -------------------------------------
# CRT Configuration
# -------------------------------------

BUILD_FOR_CORESYSTEM    = 1

# -------------------------------------
# Sources, Headers, and Libraries
# -------------------------------------

PRECOMPILED_CXX         = 1
PRECOMPILED_INCLUDE     = ..\precomp.h

INCLUDES = \
    $(INCLUDES); \
    ..; \
    ..\..\inc; \
    ..\..\..\inc; \
    ..\..\..\host; \
    $(MINCORE_PRIV_SDK_INC_PATH); \
    $(MINWIN_PRIV_SDK_INC_PATH); \

SOURCES = \
    $(SOURCES) \
    ..\DxRenderer.cpp \