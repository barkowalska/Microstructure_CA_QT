#pragma once
#include <chrono>
#include<unordered_map>
#include<list>
#include"domain.h"
#include<QtCharts/QBarSet>
#include<QtCharts/QBarSeries>
class TimeMeasurment
{
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
	std::chrono::time_point<std::chrono::high_resolution_clock> stop;

public:
    void startTime() { start = std::chrono::high_resolution_clock::now(); }
    void stopTime() { stop  =  std::chrono::high_resolution_clock::now(); }
    double miliseconds() { return std::chrono::duration<double, std::milli>(stop - start).count();}
};

class GrainSize
{
private:
    void count_grains(Domain&);
    void measure_size(double volume);
    double volume;
    std::unordered_map<int, int> grains;
    std::unordered_map<int, double> grains_size;

public:
    struct Statistics
    {
        double mean;
        double stddev;
    };
    GrainSize() {}
    Statistics measure(Domain&);
    double porosity();
};
