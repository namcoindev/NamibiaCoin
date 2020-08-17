// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 
 "\n     __                _ _     _           ___      _  \n"     
 " /\ \ \__ _ _ __ ___ (_) |__ (_) __ _    / __\___ (_)_ __  \n"
 "/  \/ / _` | '_ ` _ \| | '_ \| |/ _` |  / /  / _ \| | '_ \ \n"
"/ /\  / (_| | | | | | | | |_) | | (_| | / /__| (_) | | | | |\n"
"\_\ \/ \__,_|_| |_| |_|_|_.__/|_|\__,_| \____/\___/|_|_| |_|\n";

const std::string nonWindowsAsciiArt =
 "\n     __                _ _     _           ___      _  \n"     
 " /\ \ \__ _ _ __ ___ (_) |__ (_) __ _    / __\___ (_)_ __  \n"
 "/  \/ / _` | '_ ` _ \| | '_ \| |/ _` |  / /  / _ \| | '_ \ \n"
"/ /\  / (_| | | | | | | | |_) | | (_| | / /__| (_) | | | | |\n"
"\_\ \/ \__,_|_| |_| |_|_|_.__/|_|\__,_| \____/\___/|_|_| |_|\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
