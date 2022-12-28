#include "CPPItem_01.h"

ACPPItem_01::ACPPItem_01(){
	PrimaryActorTick.bCanEverTick = true;

}

void ACPPItem_01::BeginPlay(){
	Super::BeginPlay();
	
	AnEventFromCPPwithValue(54); // call event from c++
}

void ACPPItem_01::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

}

