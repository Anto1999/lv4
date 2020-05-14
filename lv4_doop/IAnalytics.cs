using System;
using System.Collections.Generic;
using System.Text;

namespace lv4_doop
{
    interface IAnalytics
    {
        
        double[] CalculateAveragePerColumn(Dataset dataset);
        double[] CalculateAveragePerRow(Dataset dataset);
    }
}
