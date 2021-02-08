#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UTextBlock;
class AFirstPersonCharacter_C__pf205484891;
#include "hudfpd__pf617722698.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/menu/hudfpd.hudfpd_C", OverrideNativeName="hudfpd_C"))
class Uhudfpd_C__pf617722698 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="lol", Category="Animations", OverrideNativeName="lol"))
	UWidgetAnimation* bpv__lol__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_98", Category="hudfpd", OverrideNativeName="Image_98"))
	UImage* bpv__Image_98__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_147", Category="hudfpd", OverrideNativeName="Image_147"))
	UImage* bpv__Image_147__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_246", Category="hudfpd", OverrideNativeName="Image_246"))
	UImage* bpv__Image_246__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_298", Category="hudfpd", OverrideNativeName="Image_298"))
	UImage* bpv__Image_298__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_90", OverrideNativeName="TextBlock_90"))
	UTextBlock* bpv__TextBlock_90__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	AFirstPersonCharacter_C__pf205484891* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objetivos", Category="Default", MultiLine="true", OverrideNativeName="objetivos"))
	FString bpv__objetivos__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Missoes", Category="Default", MultiLine="true", OverrideNativeName="Missoes"))
	FText bpv__Missoes__pf;
	Uhudfpd_C__pf617722698(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_hudfpd__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="missions"))
	virtual FText  bpf__missions__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
