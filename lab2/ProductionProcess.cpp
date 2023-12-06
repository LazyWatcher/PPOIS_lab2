
#include "ProductionProcess.h"
#include "CarPart.h"
#include <string>
using namespace std;

ProductionProcess::ProductionProcess(string processName, vector<CarPart> producedCarPart, vector<Worker> workers, Material material) : processName(processName), producedCarPart(producedCarPart),
workers(workers), material(material) {}


void ProductionProcess::addCarPartToProduction(CarPart newCarPart) {
    producedCarPart.push_back(newCarPart);
}


void ProductionProcess::addWorker(Worker newWorker) {
    workers.push_back(newWorker);
}


void ProductionProcess::produceCarPart( Material requiredMaterials, int m , int n) {
    if (checkIfEnoughMaterials(requiredMaterials, n)) {
        consumeMaterials(requiredMaterials, m);
        
    }
}


    bool ProductionProcess::checkIfEnoughMaterials(Material requiredMaterials, int n) {

        return requiredMaterials.getQuantity() >= n;
    }

    void ProductionProcess::consumeMaterials(Material requiredMaterials, int m) {
        requiredMaterials.consume(m);
    }

    
