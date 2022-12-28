#pragma once

#include "CoreMinimal.h"
#include "Activate_Interface.h"
#include "GameFramework/Actor.h"
#include "CPPItem_01.generated.h"

UCLASS()
class INTERFACE_SAMPLE_API ACPPItem_01 : public AActor, public IActivate_Interface {
	GENERATED_BODY()

public:	
	ACPPItem_01();

	// simple example of call blueprint event from c++
	UFUNCTION(BlueprintImplementableEvent)
		void AnEventFromCPPwithValue(int ID);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Activate Interface")
		int mainID = 0;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};


// UPROPERTY guide 
// https://benui.ca/unreal/uproperty/ 
// https://romeroblueprints.blogspot.com/2020/10/the-uproperty-macro.html