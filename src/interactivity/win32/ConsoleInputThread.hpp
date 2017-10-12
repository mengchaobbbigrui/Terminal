/*++
Copyright (c) Microsoft Corporation

Module Name:
- ConsoleInputThread.hpp

Abstract:
- Win32 implementation of the IConsoleInputThread interface.

Author(s):
- Hernan Gatta (HeGatta) 29-Mar-2017
--*/

#include "precomp.h"

#include "..\inc\IConsoleInputThread.hpp"

namespace Microsoft
{
    namespace Console
    {
        namespace Interactivity
        {
            namespace Win32
            {
                class ConsoleInputThread sealed : public IConsoleInputThread
                {
                public:
                    HANDLE Start();
                };
            }
        };
    };
};