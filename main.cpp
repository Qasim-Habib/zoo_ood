
#include "zoo.h"
#include "myException.h"
#include "lion.h"
#include "dogs.h"
#include <gtest/gtest.h>
TEST(ZooTests, FunctionsZooProj)
{

    ASSERT_THROW(Lion mamal(""),MyException);
    ASSERT_THROW(Dog mamall(""),MyException);
   // ASSERT_THROW(Mammals mamalk("cc", "ddd", 0, cont, food, 80, 100, 4),negativeException);
    //ASSERT_THROW(Mammals mamald("cc", "ddd", 0, cont, food, 80, 0, 4),negativeException);
    Lion L("bigLion");
    Lion L1("bigLionk");
    Lion L2("bigLion");
    Lion& l = L;
    Lion& l1 = L1;
    Lion& l2 = L2;
    ASSERT_EQ(L.getName(),"bigLion");
    ASSERT_EQ(l.getSpecies(),"Lion");
     ASSERT_EQ(l1 == l,0);
     ASSERT_EQ(l2 == l,1);
     //////////////////////////////////////////////
 	Zoo zoo1;
    Lion* mamal1 = new Lion("Simba");
    zoo1.add_animal(mamal1);

    Lion* mamal2 = new Lion("Mufasa");
    zoo1.add_animal(mamal2);

    Monkey* mamal3 = new Monkey("Rafiki");
    zoo1.add_animal(mamal3);

    Goose* bird1 = new Goose("Akka");
    zoo1.add_animal(bird1);

    Goose* bird2 = new Goose("Morten");
    zoo1.add_animal(bird2);

    SnowyOwl* bird3 = new SnowyOwl("Hedwig");
    zoo1.add_animal(bird3);

    Dog* mamal4 = new Dog("Toto");
    zoo1.add_animal(mamal4);

    Shark* sea1 = new Shark("Jaws");
    zoo1.add_animal(sea1);

    ClownFish* sea2 = new ClownFish("Nemo");
    zoo1.add_animal(sea2);

    Whale* whale1 = new Whale("Woho");
    zoo1.add_animal(whale1);

    Whale* whale2 = new Whale("Wohot");
    zoo1.add_animal(whale2);

    zoo1.printAnimals();
    delete mamal1;
    delete mamal2;
    delete mamal3;
    delete mamal4;
    delete bird1;
    delete bird2;
    delete bird3;
    delete whale1;
    delete whale2;
    delete sea1;
    delete sea2;
    
    
}
int main(int argc, char* argv[])

{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
