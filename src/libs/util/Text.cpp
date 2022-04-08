#include "Text.h"

namespace yx
{
/**
 * @brief Appends s to current text with underline
 */
void Text::append(const QString &s)
{
    _text += "_" + s;
}

void Text::clear()
{
    _text.clear();
}
} // namespace yx
