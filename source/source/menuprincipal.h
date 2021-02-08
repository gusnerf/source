#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UButton;
class UImage;
#include "menuhud__pf617722698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/menu/menuhud.menuhud_C", OverrideNativeName="menuhud_C"))
class Umenuhud_C__pf617722698 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="fundo", Category="Animations", OverrideNativeName="fundo"))
	UWidgetAnimation* bpv__fundo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_70", Category="menuhud", OverrideNativeName="Button_70"))
	UButton* bpv__Button_70__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_235", Category="menuhud", OverrideNativeName="Button_235"))
	UButton* bpv__Button_235__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_308", Category="menuhud", OverrideNativeName="Button_308"))
	UButton* bpv__Button_308__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_376", Category="menuhud", OverrideNativeName="Button_376"))
	UButton* bpv__Button_376__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_299", Category="menuhud", OverrideNativeName="Image_299"))
	UImage* bpv__Image_299__pf;
	Umenuhud_C__pf617722698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_menuhud__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_menuhud__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_menuhud__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_235_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_235_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
