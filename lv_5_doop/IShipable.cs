using System;
using System.Collections.Generic;
using System.Text;

namespace lv_5_doop
{
    interface IShipable
    {
        double Price { get; }
        double Weight { get; }
        string Description(int depth = 0);
    }
}
