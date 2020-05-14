using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace DOOPLV2
{
    class Program
    {
        static void Main(string[] args)
        {
            DiceRoller roller = new DiceRoller();
            Die dice;
            Random random = new Random();
            for (int i = 0; i < 20; i++)
            {
                dice = new Die(6, random);
                roller.InsertDie(dice);
            }
            roller.RollAllDice();
            IList<int> RollingResults = roller.GetRollingResults();

            for (int i = 0; i < roller.DiceCount; i++)
            {
                Console.WriteLine(RollingResults[i]);
            }
            Console.WriteLine(roller.DiceCount);
        }
    }
}
