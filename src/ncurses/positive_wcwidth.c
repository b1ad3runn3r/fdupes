#include "../config.h"
#include "positive_wcwidth.h"

int positive_wcwidth(wchar_t ch)
{
  int w;

  w = wcwidth(ch);

  if (w >= 0)
    return w;
  else
    return 1;
}