#include "Stats.h"
#include<algorithm>
GrainSize::Statistics GrainSize::measure(Domain&d)
{
    volume = d.getDimX()*d.getDimY()*d.getDimZ();
    count_grains(d);
    measure_size(d.getDimX()*d.getDimY()*d.getDimZ());

    Statistics stat;
    stat.mean = 0.0;
    for(auto& grain: grains_size)
    {
         stat.mean += grain.second;
    }
    stat.mean /= double(grains_size.size());
    stat.stddev = 0.0;
    for(auto& grain: grains_size)
    {
         stat.stddev += pow(grain.second- stat.mean, 2);
    }
    stat.stddev /= double(grains_size.size()-1);
    stat.stddev = sqrt(stat.stddev);
    return stat;
}
void GrainSize::count_grains(Domain& domain)
{
    int value=0;
    for(int z=0; z< domain.getDimZ(); z++)
    {
        for(int y=0; y< domain.getDimY(); y++)
        {
            for(int x=0; x<domain.getDimX(); x++)
            {
                value=domain(x,y,z);
                if(value == 0) continue;
                auto itr=grains.find(value);
                if(itr != grains.end())
                {
                    itr->second++;
                }
                else
                {
                    grains.emplace(value,1);
                }
            }
        }
    }
}
void GrainSize::measure_size(double volume)
{
    for(auto & grain: grains)
    {
        grains_size.emplace(grain.first, double(grain.second));
    }
}

double GrainSize::porosity()
{
    double sum = 0.0;
    for(auto & grain: grains_size)
    {
        sum += grain.second;
    }

    return 1.0 - sum/volume;
}




