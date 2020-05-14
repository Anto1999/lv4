using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace lv4_doop
{
    class Analyzer3rdParty
    {

        public double[] PerRowAverage(double[][] data)
        {
            int rowCount = data.Length;
            double[] results = new double[rowCount];
            for (int i = 0; i < rowCount; i++)
            {
                results[i] = data[i].Average();
            }
            return results;
        }
       
        public double[] PerColumnAverage(double[][] data)
        {
            if (data.Length < 1)
            {
                return null;
            }

            int rowCount = data.Length;
            int colCount = data[0].Length;
            double[] results = new double[colCount];
            for (int i = 0; i < colCount; i++)
            {
                double[] ColumnArray = new double[rowCount];
                for(int j = 0; j < rowCount; j++)
                {
                    ColumnArray[j] = data[j][i];
                }
                results[i] = ColumnArray.Average();

            }
            return results;
        }       

    }
}
