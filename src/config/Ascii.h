// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 
 "\n
"  ooooo      ooo                               .oooooo.              o8o                                                \n"
"  `888b.     `8'                              d8P'  `Y8b             `"'                                                \n"
"   8 `88b.    8   .oooo.   ooo. .oo.  .oo.   888           .ooooo.  oooo  ooo. .oo.        .ooooo.  oooo d8b  .oooooooo \n"
"   8   `88b.  8  `P  )88b  `888P"Y88bP"Y88b  888          d88' `88b `888  `888P"Y88b      d88' `88b `888""8P 888' `88b  \n"
"   8     `88b.8   .oP"888   888   888   888  888          888   888  888   888   888      888   888  888     888   888  \n"
"  8       `888  d8(  888   888   888   888  `88b    ooo  888   888  888   888   888  .o. 888   888  888     `88bod8P'  \n"
" o8o        `8  `Y888""8o o888o o888o o888o  `Y8bood8P'  `Y8bod8P' o888o o888o o888o Y8P `Y8bod8P' d888b    `8oooooo.  \n"
"                                                                                                            d"     YD  \n"
"                                                                                                             "Y88888P'  \n";
                                                                                                                     

const std::string nonWindowsAsciiArt =
 "\n
"  ooooo      ooo                               .oooooo.              o8o                                                \n"
"  `888b.     `8'                              d8P'  `Y8b             `"'                                                \n"
"   8 `88b.    8   .oooo.   ooo. .oo.  .oo.   888           .ooooo.  oooo  ooo. .oo.        .ooooo.  oooo d8b  .oooooooo \n"
"   8   `88b.  8  `P  )88b  `888P"Y88bP"Y88b  888          d88' `88b `888  `888P"Y88b      d88' `88b `888""8P 888' `88b  \n"
"   8     `88b.8   .oP"888   888   888   888  888          888   888  888   888   888      888   888  888     888   888  \n"
"   8       `888  d8(  888   888   888   888  `88b    ooo  888   888  888   888   888  .o. 888   888  888     `88bod8P'  \n"
"  o8o        `8  `Y888""8o o888o o888o o888o  `Y8bood8P'  `Y8bod8P' o888o o888o o888o Y8P `Y8bod8P' d888b    `8oooooo.  \n"
"                                                                                                             d"     YD  \n"
"                                                                                                            "Y88888P'  \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
