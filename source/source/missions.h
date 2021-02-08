#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "menucampaing__pf617722698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/menu/menucampaing.menucampaing_C", OverrideNativeName="menucampaing_C"))
class Umenucampaing_C__pf617722698 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_94", Category="menucampaing", OverrideNativeName="Button_94"))
	UButton* bpv__Button_94__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_95", Category="menucampaing", OverrideNativeName="Button_95"))
	UButton* bpv__Button_95__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_96", Category="menucampaing", OverrideNativeName="Button_96"))
	UButton* bpv__Button_96__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_283", Category="menucampaing", OverrideNativeName="Button_283"))
	UButton* bpv__Button_283__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_153", Category="menucampaing", OverrideNativeName="Image_153"))
	UImage* bpv__Image_153__pf;
	Umenucampaing_C__pf617722698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_menucampaing__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_menucampaing__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
