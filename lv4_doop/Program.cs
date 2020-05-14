using System;
using System.Collections;
using System.Collections.Generic;

namespace lv4_doop
{
    class Program
    {
        static void Main(string[] args)
        {
            Dataset d = new Dataset("C:\\Users\\Nune\\Documents\\doop.csv");
            IAnalytics anal = new Adapter(new Analyzer3rdParty());
            double [] a = anal.CalculateAveragePerColumn(d);
            double [] b = anal.CalculateAveragePerRow(d);
            List<IRentable> RentableList = new List<IRentable>();
            RentableList.Add(new Book("EJEJ"));
            RentableList.Add(new Video("HEEH"));
            RentingConsolePrinter printer = new RentingConsolePrinter();
            printer.DisplayItems(RentableList);


        }
    }
}
