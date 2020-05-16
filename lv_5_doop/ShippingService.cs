using System;
using System.Collections.Generic;
using System.Text;

namespace lv_5_doop
{
    class ShippingService
    {
        private double value = 2;

        public double PacketPrice(IShipable item)
        {
            double price;

            price = value * item.Weight;

            return price;
        }
    }
}
