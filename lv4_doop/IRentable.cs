using System;
using System.Collections.Generic;
using System.Text;

namespace lv4_doop
{
    interface IRentable
    {
        String Description { get; }
        double CalculatePrice();
    }
}
