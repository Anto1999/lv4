using System;
using System.Collections.Generic;
using System.Text;

namespace DOOPLV2
{
    class Die
    {
        private int numberOfSides;
        private Random randomGenerator;

        public Die(int numberOfSides, Random randomGenerator)
        {
            this.numberOfSides = numberOfSides;
            this.randomGenerator = randomGenerator;
        }

        public int Roll()
        {
            int rolledNumber = randomGenerator.Next(1, numberOfSides + 1);
            return rolledNumber;
        }
    }
}
