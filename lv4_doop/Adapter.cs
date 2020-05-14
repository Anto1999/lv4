using System;
using System.Collections.Generic;
using System.Text;

namespace lv4_doop
{
    class Adapter : IAnalytics
    {
        private Analyzer3rdParty analyticsService;
        public Adapter(Analyzer3rdParty service)
        {
            this.analyticsService = service;
        }
        private double[][] ConvertData(Dataset dataset)
        {

            if (dataset.GetData().Count < 1)
            {
                return null;
            }

            int rowCount = dataset.GetData().Count;
            int colCount = dataset.GetData()[0].Count;
            double[][] results = new double[rowCount][];
            for (int i = 0; i < rowCount; i++)
            {
                results[i] = new double[colCount];
                for (int j = 0; j < colCount; j++)
                {
                    results[i][j] = dataset.GetData()[i][j];
                }


            }
            return results;

        }
        public double[] CalculateAveragePerColumn(Dataset dataset)
        {
            double[][] data = this.ConvertData(dataset);
            return this.analyticsService.PerColumnAverage(data);
        }
        public double[] CalculateAveragePerRow(Dataset dataset)
        {
            double[][] data = this.ConvertData(dataset);
            return this.analyticsService.PerRowAverage(data);
        }
    }
}
