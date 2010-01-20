
#include "config.h"

#include <string.h>

#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif

#include <glib.h>

#include "src/tube-dbus.h"

int
main (int argc, char **argv)
{
  guint i;
  const gchar *nicknames[] =
    {
      "short",
      "FirstWitch",
      "Second witch",

      "012345678901234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "01234567890123456789012345", /* 186  */

      "012345678901234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "012345678901234567890123456", /* 187  */

      "012345678901234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "01234567890123456789012345678901234567890123456789"
        "0123456789012345678901234567890123456789", /* 200 */

      NULL
    };

  const gchar *results[] =
    {
      ":2.c2hvcnQA",
      ":2.Rmlyc3RXaXRjaAAA",
      ":2.U2Vjb25kIHdpdGNo",

      ":2.MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkw"
        "MTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxM"
        "jM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMz"
        "Q1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1",

      ":2.MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkw"
        "MTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxM"
        "jM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMz"
        "Q1Njc4OTAxMjM0NTY3OEVd9C5NgmmRD6jp1ftG6XUEc11x",

      ":2.MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkw"
        "MTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxM"
        "jM0NTY3ODkwMTIzNDU2Nzg5MDEyMzQ1Njc4OTAxMjM0NTY3ODkwMTIzNDU2Nzg5MDEyMz"
        "Q1Njc4OTAxMjM0NTY3OO-utwRnwcoUFhnJVMKg5pm9Hxal",

      NULL
    };

  for (i = 0; nicknames[i] != NULL; i++)
    {
      gchar *name;

      name = _gabble_generate_dbus_unique_name (nicknames[i]);

      g_assert (strcmp (name, results[i]) == 0);

      g_free (name);
    }

  return 0;
}
