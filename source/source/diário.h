#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class AFirstPersonCharacter_C__pf205484891;
#include "diario__pf1016314526.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/diario/diario.diario_C", OverrideNativeName="diario_C"))
class Udiario_C__pf1016314526 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="1", Category="diario", OverrideNativeName="1"))
	UImage* bpv__1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="11", Category="diario", OverrideNativeName="11"))
	UImage* bpv__11__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="2", Category="diario", OverrideNativeName="2"))
	UImage* bpv__2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="22", Category="diario", OverrideNativeName="22"))
	UImage* bpv__22__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="3", Category="diario", OverrideNativeName="3"))
	UImage* bpv__3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="33", Category="diario", OverrideNativeName="33"))
	UImage* bpv__33__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="diario", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_1", Category="diario", OverrideNativeName="Button_1"))
	UButton* bpv__Button_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Index", Category="Default", MultiLine="true", OverrideNativeName="index"))
	int32 bpv__index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	ESlateVisibility bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As First Person Character", Category="Default", MultiLine="true", OverrideNativeName="As First Person Character"))
	AFirstPersonCharacter_C__pf205484891* bpv__AsxFirstxPersonxCharacter__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="2e", Category="Default", MultiLine="true", OverrideNativeName="2e"))
	bool bpv__2e__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As First Person Character 0", Category="Default", MultiLine="true", OverrideNativeName="As First Person Character_0"))
	AFirstPersonCharacter_C__pf205484891* bpv__AsxFirstxPersonxCharacter_0__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="22e", Category="Default", MultiLine="true", OverrideNativeName="22e"))
	bool bpv__22e__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="33e", Category="Default", MultiLine="true", OverrideNativeName="33e"))
	bool bpv__33e__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="3e", Category="Default", MultiLine="true", OverrideNativeName="3e"))
	bool bpv__3e__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Character"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	Udiario_C__pf1016314526(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_diario__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_diario__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_2_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_2_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_2_Visibility_1"))
	virtual ESlateVisibility  bpf__Get_2_Visibility_1__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
