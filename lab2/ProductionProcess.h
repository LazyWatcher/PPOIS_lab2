#pragma once
using namespace std;
#include <string>
#include <vector>
#include "Worker.h"
#include "CarPart.h"
#include "Material.h"



class ProductionProcess {
public:
    string processName;
    vector<CarPart> producedCarPart;
    vector<Worker> workers;
    Material material;

    
    ProductionProcess(string processName, vector<CarPart> producedCarPart, vector<Worker> workers, Material material);


    void addCarPartToProduction(CarPart newCarPart);

   
    void addWorker(Worker newWorker);
    
    void produceCarPart(Material requiredMaterials, int m, int n);



    bool checkIfEnoughMaterials(Material requiredMaterials, int n);

    void consumeMaterials(Material requiredMaterials, int m);

   

};