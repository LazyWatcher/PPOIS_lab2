#include "pch.h"
#include "CppUnitTest.h"
#include "../PPOIS_Lab2/Boss.h"
#include "../PPOIS_Lab2/CarPart.h"
#include "../PPOIS_Lab2/Client.h"
#include "../PPOIS_Lab2/Factory.h"
#include "../PPOIS_Lab2/Material.h"
#include "../PPOIS_Lab2/Order.h"
#include "../PPOIS_Lab2/Person.h"
#include "../PPOIS_Lab2/ProductionProcess.h"
#include "../PPOIS_Lab2/Schedule.h"
#include "../PPOIS_Lab2/Staff.h"
#include "../PPOIS_Lab2/Worker.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		

		TEST_METHOD(TestMethod1)
		{
			Boss boss("John Snow", "CEO");
			boss.displayBossInfo();
		}

		TEST_METHOD(TestMethod2)
		{
			CarPart carpart("engine",  "aluminum", 100.0, 2);
			carpart.setNameCarPart("suspension");
			carpart.setPriceCarPart(150);
			carpart.setType("iron");
			carpart.setPriceCarPart(3);
			carpart.displayCarPart();

		}

		TEST_METHOD(TestMethod3)
		{
			Client client("Oleg", "cosmonautov 56/3", "oleg@mail.com", 88005553535 );
			client.displayClientInfo();
			client.updateClientInfo("noOleg@gmail.com", 80197177744);
			
		}

		TEST_METHOD(TestMethod4)
		{
			Person person("Sasha", "Skorobogaty", "01.01.2005");
			person.setDate("02.01.1984");
			person.setName("Oleg");
			person.setSurname("Skorobog");


		}

		TEST_METHOD(TestMethod5)
		{
			Worker worker("Ryan", "Gosling", "xx.xx.xxxx", "legend", 3275325923, 1000);
			worker.displayWorkerInfo();


		}

		TEST_METHOD(TestMethod6)
		{
			Boss boss("John Snow", "CEO");
			Worker worker("Ryan", "Gosling", "xx.xx.xxxx", "legend", 3275325923, 1000);
			vector<Worker> workers;
			Staff staff(boss, workers);
			staff.addWorker(worker);
			staff.displayStaffInfo();


		}

		TEST_METHOD(TestMethod7)
		{
			vector<string> tasks;
			Schedule schedule("05.12.2023", "evening", tasks);
			schedule.addTask("lol");
			schedule.displaySchedule();

		}

		TEST_METHOD(TestMethod8)
		{
			Material material("iron", 20);
			material.consume(2);
			int n = material.getQuantity();
			Assert::AreEqual(18, n);

		}

		TEST_METHOD(TestMethod9)
		{
			Client client("Oleg", "cosmonautov 56/3", "oleg@mail.com", 88005553535);
			Boss boss("John Snow", "CEO");
			Worker worker("Ryan", "Gosling", "xx.xx.xxxx", "legend", 3275325923, 1000);
			vector<Worker> workers;
			Staff staff(boss, workers);
			staff.addWorker(worker);
			Order order(client, staff, 6435, 200, "DU HAST");
			order.displayOrderInfo(client, staff);
			order.setClient(client);
			order.setDetails("lol");
			order.setOrderNumber(2315);
			order.setStaff(staff);
			order.setValue(300);

		}

		TEST_METHOD(TestMethod10)
		{
			vector<CarPart> producedCarPart;
			vector<Worker> workers;
			Material material("iron", 20);
			CarPart carpart("engine", "iron", 100.0, 2);
			Worker worker("Ryan", "Gosling", "xx.xx.xxxx", "legend", 3275325923, 1000);
			ProductionProcess process("work", producedCarPart, workers, material);
			process.addCarPartToProduction(carpart);
			process.addWorker(worker);
			process.consumeMaterials(material, 3);
		    Assert::IsTrue(process.checkIfEnoughMaterials(material, 15));
		}

		


		TEST_METHOD(TestMethod11)
		{
			Client client("Oleg", "cosmonautov 3/1", "oleg@mail.com", 88005553535);
			CarPart carpart("engine", "iron", 100.0, 2);
			Boss boss("John Snow", "CEO");
			Worker worker("Ryan", "Gosling", "xx.xx.xxxx", "legend", 3275325923, 1000);
			vector<Worker> workers;
			client.displayClientInfo();
			Staff staff(boss, workers);
			staff.addWorker(worker);
			Order order(client, staff, 6435, 200, "DU HAST");
			vector<Order> orders;
			vector<ProductionProcess> processes;
			vector<string> tasks;
			vector<CarPart> producedCarPart;
			Material material("iron", 20);
			Schedule schedule("05.12.2023", "evening", tasks);
			schedule.addTask("lol");
			ProductionProcess process("work", producedCarPart, workers, material);
			process.addCarPartToProduction(carpart);
			process.addWorker(worker);

			Factory factory("zavod", orders, processes, schedule, staff);
			factory.addOrder(order);
			factory.addProductionProcess(process);
		
		}


	};
}
