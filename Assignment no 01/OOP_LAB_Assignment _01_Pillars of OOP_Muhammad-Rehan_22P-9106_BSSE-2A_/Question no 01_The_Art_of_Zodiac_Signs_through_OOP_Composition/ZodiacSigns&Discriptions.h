//
// Created by _rayhan on 4/26/23.
//

#ifndef TASK_NO_1_ZODIACSIGNS_DISCRIPTIONS_H
#define TASK_NO_1_ZODIACSIGNS_DISCRIPTIONS_H

#include <string>

/*
 * This library stores all the texting data which should be hidden in the main code files
 * as it makes the code look crowded and causes code-smell
 *
 * */



namespace zodiacSigns {

    const std::string signs[] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio",
                                 "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

}
namespace zodiacDescriptions {

    const std::string discriptions[] = {"   .-.   .-.\n  (_  \\ /  _)    Aries-  The Ram\n       |\n       |",
                                        "    .     .\n    '.___.'      Taurus-  The Bull\n    .'   `.\n" "   :       :\n" "   :       :\n" "    `.___.'",
                                        "    ._____.\n" "      | |        Gemini-  The Twins\n" "      | |\n" "     _|_|_\n" "    '     '",
                                        "      .--.\n" "     /   _`.     Cancer-  The Crab\n" "    (_) ( )\n" "   '.    /\n" "     `--'",
                                        "      .--.\n" "     (    )       Leo-  The Lion\n" "    (_)  /\n" "        (_,",
                                        "   _\n" "  ' `:--.--.\n" "     |  |  |_     Virgo-  The Virgin\n" "     |  |  | )\n" "     |  |  |/\n" "          (",
                                        "        __\n" "   ___.'  '.___   Libra-  The Balance\n" "   ____________",
                                        "   _\n" "  ' `:--.--.\n" "     |  |  |      Scorpius-  The Scorpion\n" "     |  |  |\n" "     |  |  |  ..,\n" "           `---':",
                                        "          ...\n" "          .':     Sagittarius-  The Archer\n" "        .'\n" "    `..'\n" "    .'`.",
                                        "            _\n" "    \\      /_)    Capricorn-  The Goat\n" "     \\    /`.\n" "      \\  /   ;\n" "       \\/ __.'",
                                        "\n .-\"-._.-\"-._.-   Aquarius-  The Water Bearer\n" "\n .-\"-._.-\"-._.-",
                                        "\n     `-.    .-'   Pisces-  The Fishes\n" "        :  :\n" "      --:--:--\n" "        :  :\n" "     .-'    `-."};
}


#endif //TASK_NO_1_ZODIACSIGNS_DISCRIPTIONS_H
