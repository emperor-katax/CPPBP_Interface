#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Activate_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UActivate_Interface : public UInterface{
	GENERATED_BODY()
};

class INTERFACE_SAMPLE_API IActivate_Interface{
	GENERATED_BODY()

	public:

		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Activate Interface")
			const int TypeInteract_returnMode();

		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Activate Interface")
			void TypeInteract_voidMode();

		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Activate Interface")
			void SignatureInteract_byRef(int& ID);

		UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Activate Interface")
			void SignatureInteract_noRef(int ID);
};

// C++ Interface 
// https://www.youtube.com/watch?v=vA9K7kXOi8U
// Note: IF the interface function gets deleted/lost in blueprint, 
// simply right-click on "Activate Interface" in "Functions" tab and 
// override the missing interface to make the function out of it. 
// Indeed yo
