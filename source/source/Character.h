#include "moh.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "DmgTypeBP_Environmental__pf1001828891.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "mamadata__pf4076497257.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "FirstPerson_AnimBP__pf2002337985.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "diario__pf1016314526.h"
#include "balita__pf98894775.h"
#include "hudfpd__pf617722698.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AFirstPersonCharacter_C__pf205484891::AFirstPersonCharacter_C__pf205484891(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if (__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight())));
		__Local__3 = 96.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius())));
		__Local__4 = 55.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		auto& __Local__5 = (*(AccessPrivateProperty<float >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__MassInKgOverride())));
		__Local__5 = 238.150284f;
		static TWeakFieldPtr<FProperty> __Local__7{};
		const FProperty* __Local__6 = __Local__7.Get();
		if (nullptr == __Local__6)
		{
			__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__6);
			__Local__7 = __Local__6;
		}
		(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if (__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->NavAgentProps.AgentRadius = 48.000000f;
		__Local__1->NavAgentProps.AgentHeight = 192.000000f;
		static TWeakFieldPtr<FProperty> __Local__9{};
		const FProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if (__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__12 = (*(AccessPrivateProperty<float >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__MassInKgOverride())));
		__Local__12 = 0.000000f;
		auto& __Local__13 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent())));
		__Local__13 = __Local__0;
		auto& __Local__14 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation())));
		__Local__14 = FVector(81.068008, -1.414236, 56.062737);
		auto& __Local__15 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation())));
		__Local__15 = FRotator(0.000000, 359.999146, -0.000000);
		static TWeakFieldPtr<FProperty> __Local__17{};
		const FProperty* __Local__16 = __Local__17.Get();
		if (nullptr == __Local__16)
		{
			__Local__16 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__16);
			__Local__17 = __Local__16;
		}
		(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__FirstPersonCamera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	bpv__Rigged_Hand__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Rigged_Hand"));
	bpv__M1Garand_Garand001__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("M1Garand_Garand001"));
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	bpv__VR_Marker__pf = CreateDefaultSubobject<USphereComponent>(TEXT("VR_Marker"));
	bpv__M1Garand_Charging_Handle__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("M1Garand_Charging_Handle"));
	bpv__M1Garand_Bullet__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("M1Garand_Bullet"));
	bpv__Sphere1__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
	bpv__L_MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	bpv__R_MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	bpv__P_Explosion__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_Explosion"));
	bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FirstPersonCamera__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__FirstPersonCamera__pf->bUsePawnControlRotation = true;
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__FirstPersonCamera__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__18 = FVector(-39.484440, 1.752810, 68.376595);
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__FirstPersonCamera__pf), false, 0));
	bpv__Rigged_Hand__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Rigged_Hand__pf->AttachToComponent(bpv__FirstPersonCamera__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__Rigged_Hand__pf->AnimClass = Umamadata_C__pf4076497257::StaticClass();
	bpv__Rigged_Hand__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Rigged_Hand__pf->AnimationData.SavedPosition = 0.041667f;
	bpv__Rigged_Hand__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Rigged_Hand__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Rigged_Hand__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__Rigged_Hand__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__21 = FVector(-0.895163, 39.210705, -189.253632);
	auto& __Local__22 = (*(AccessPrivateProperty<FRotator >((bpv__Rigged_Hand__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__22 = FRotator(3.702024, 86.368835, -5.050447);
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__Rigged_Hand__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__23 = FVector(0.037887, 0.037887, 0.037887);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Rigged_Hand__pf), false, 0));
	bpv__M1Garand_Garand001__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__M1Garand_Garand001__pf->AttachToComponent(bpv__Rigged_Hand__pf, FAttachmentTransformRules::KeepRelativeTransform, TEXT("hand_L"));
	bpv__M1Garand_Garand001__pf->AnimClass = UFirstPerson_AnimBP_C__pf2002337985::StaticClass();
	bpv__M1Garand_Garand001__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__M1Garand_Garand001__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__M1Garand_Garand001__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__M1Garand_Garand001__pf->OverrideMaterials = TArray<UMaterialInterface*>();
	bpv__M1Garand_Garand001__pf->OverrideMaterials.Reserve(1);
	bpv__M1Garand_Garand001__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__M1Garand_Garand001__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__24 = FVector(0.095316, -0.033028, -0.006304);
	auto& __Local__25 = (*(AccessPrivateProperty<FRotator >((bpv__M1Garand_Garand001__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__25 = FRotator(-66.122780, -280.433472, 112.500671);
	auto& __Local__26 = (*(AccessPrivateProperty<FVector >((bpv__M1Garand_Garand001__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__26 = FVector(0.020624, 0.020624, 0.020624);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__M1Garand_Garand001__pf), false, 0));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__M1Garand_Garand001__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__Sphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<float >(&(bpv__Sphere__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride())));
	__Local__27 = 0.307177f;
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__28 = FVector(0.310497, 24.371363, 8.134016);
	auto& __Local__29 = (*(AccessPrivateProperty<FRotator >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__29 = FRotator(0.804897, 79.581749, -0.291875);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__30 = FVector(0.585073, 0.047392, 0.008747);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__VR_Marker__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VR_Marker__pf->AttachToComponent(bpv__M1Garand_Garand001__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__VR_Marker__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__31 = (*(AccessPrivateProperty<float >(&(bpv__VR_Marker__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride())));
	__Local__31 = 0.307177f;
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__32 = FVector(-20.367729, 3.182627, -15.799363);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__33 = FRotator(2.189144, 175.140869, 2.544883);
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__34 = FVector(0.059744, 0.059744, 0.058260);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__VR_Marker__pf), true, 0));
	bpv__M1Garand_Charging_Handle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__M1Garand_Charging_Handle__pf->AttachToComponent(bpv__M1Garand_Garand001__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__M1Garand_Charging_Handle__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__M1Garand_Charging_Handle__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__M1Garand_Charging_Handle__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__M1Garand_Charging_Handle__pf->OverrideMaterials = TArray<UMaterialInterface*>();
	bpv__M1Garand_Charging_Handle__pf->OverrideMaterials.Reserve(1);
	bpv__M1Garand_Charging_Handle__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	auto& __Local__35 = (*(AccessPrivateProperty<FVector >((bpv__M1Garand_Charging_Handle__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__35 = FVector(0.000000, -4.731635, -0.000005);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__M1Garand_Charging_Handle__pf), false, 0));
	bpv__M1Garand_Bullet__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__M1Garand_Bullet__pf->AttachToComponent(bpv__M1Garand_Garand001__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__M1Garand_Bullet__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__M1Garand_Bullet__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__M1Garand_Bullet__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__M1Garand_Bullet__pf->OverrideMaterials = TArray<UMaterialInterface*>();
	bpv__M1Garand_Bullet__pf->OverrideMaterials.Reserve(1);
	bpv__M1Garand_Bullet__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__M1Garand_Bullet__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__36 = FVector(14.269177, 1.488905, 5.197912);
	auto& __Local__37 = (*(AccessPrivateProperty<FRotator >((bpv__M1Garand_Bullet__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__37 = FRotator(97.083206, 5.505005, 4.961365);
	auto& __Local__38 = (*(AccessPrivateProperty<FVector >((bpv__M1Garand_Bullet__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__38 = FVector(1.204255, 1.204255, 1.204255);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__M1Garand_Bullet__pf), false, 0));
	bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere1__pf->AttachToComponent(bpv__M1Garand_Garand001__pf, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__Sphere1__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__39 = (*(AccessPrivateProperty<float >(&(bpv__Sphere1__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride())));
	__Local__39 = 0.307177f;
	auto& __Local__40 = (*(AccessPrivateProperty<FVector >((bpv__Sphere1__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__40 = FVector(3.900979, -7.353997, 7.612884);
	auto& __Local__41 = (*(AccessPrivateProperty<FRotator >((bpv__Sphere1__pf), USceneComponent::__PPO__RelativeRotation())));
	__Local__41 = FRotator(34.187420, 177.039673, 2.485050);
	auto& __Local__42 = (*(AccessPrivateProperty<FVector >((bpv__Sphere1__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__42 = FVector(0.297109, 0.024066, 0.004442);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Sphere1__pf), true, 0));
	bpv__L_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__L_MotionController__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__L_MotionController__pf), false, 0));
	bpv__R_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__R_MotionController__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__R_MotionController__pf->MotionSource = FName(TEXT("Right"));
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__R_MotionController__pf), false, 0));
	bpv__P_Explosion__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__P_Explosion__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform);
	bpv__P_Explosion__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	auto& __Local__43 = (*(AccessPrivateProperty<FVector >((bpv__P_Explosion__pf), USceneComponent::__PPO__RelativeLocation())));
	__Local__43 = FVector(44.011967, 19.031717, 56.630753);
	auto& __Local__44 = (*(AccessPrivateProperty<FVector >((bpv__P_Explosion__pf), USceneComponent::__PPO__RelativeScale3D())));
	__Local__44 = FVector(0.038107, 0.038107, 0.038107);
	bpv__P_Explosion__pf->PrimaryComponentTick.bStartWithTickEnabled = false;
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__P_Explosion__pf), false, 0));
	bpv__GunOffset__pf = FVector(100.000000, 0.000000, -10.000000);
	bpv__BaseTurnRate__pf = 45.000000f;
	bpv__BaseLookUpRate__pf = 45.000000f;
	bpv__UsingMotionControllersx__pfzy = false;
	bpv__bglh__pf = 0.000000f;
	bpv__enabled__pf = true;
	bpv__pente__pf = 10;
	bpv__missoes__pf = FText::GetEmpty();
	bpv__diariowidget__pf = nullptr;
	bpv__2px__pfzy = false;
	bpv__22px__pfzy = false;
	bpv__3px__pfzy = false;
	bpv__33px__pfzy = false;
	bpv__index__pf = 0;
	bpv__diario__pf = nullptr;
	bpv__diary__pf = nullptr;
	auto& __Local__45 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh())));
	__Local__45 = __Local__2;
	auto& __Local__46 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement())));
	__Local__46 = __Local__1;
	auto& __Local__47 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent())));
	__Local__47 = __Local__0;
	UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__48 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming())));
	__Local__48 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if (bpv__FirstPersonCamera__pf)
	{
		bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__Rigged_Hand__pf)
	{
		bpv__Rigged_Hand__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__M1Garand_Garand001__pf)
	{
		bpv__M1Garand_Garand001__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__VR_Marker__pf)
	{
		bpv__VR_Marker__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__M1Garand_Charging_Handle__pf)
	{
		bpv__M1Garand_Charging_Handle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__M1Garand_Bullet__pf)
	{
		bpv__M1Garand_Bullet__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__Sphere1__pf)
	{
		bpv__Sphere1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__L_MotionController__pf)
	{
		bpv__L_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__R_MotionController__pf)
	{
		bpv__R_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if (bpv__P_Explosion__pf)
	{
		bpv__P_Explosion__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(Umamadata_C__pf4076497257::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UFirstPerson_AnimBP_C__pf2002337985::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Udiario_C__pf1016314526::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Abalita_C__pf98894775::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Uhudfpd_C__pf617722698::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__49 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__49);
	auto __Local__50 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__50);
	auto __Local__51 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__51);
	auto __Local__52 = NewObject<UInputTouchDelegateBinding>(InDynamicClass, UInputTouchDelegateBinding::StaticClass(), TEXT("InputTouchDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__52);
	static TWeakFieldPtr<FProperty> __Local__54{};
	const FProperty* __Local__53 = __Local__54.Get();
	if (nullptr == __Local__53)
	{
		__Local__53 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__53);
		__Local__54 = __Local__53;
	}
	(((FBoolProperty*)__Local__53)->SetPropertyValue_InContainer((__Local__49), false, 0));
	__Local__50->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding>();
	__Local__50->InputActionDelegateBindings.AddUninitialized(5);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__50->InputActionDelegateBindings.GetData(), 5);
	auto& __Local__55 = __Local__50->InputActionDelegateBindings[0];
	__Local__55.InputActionName = FName(TEXT("Jump"));
	__Local__55.InputKeyEvent = EInputEvent::IE_Released;
	__Local__55.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_4"));
	__Local__55.bOverrideParentBinding = false;
	auto& __Local__56 = __Local__50->InputActionDelegateBindings[1];
	__Local__56.InputActionName = FName(TEXT("Fire"));
	__Local__56.FunctionNameToBind = FName(TEXT("InpActEvt_Fire_K2Node_InputActionEvent_2"));
	auto& __Local__57 = __Local__50->InputActionDelegateBindings[2];
	__Local__57.InputActionName = FName(TEXT("Jump"));
	__Local__57.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_3"));
	__Local__57.bOverrideParentBinding = false;
	auto& __Local__58 = __Local__50->InputActionDelegateBindings[3];
	__Local__58.InputActionName = FName(TEXT("ResetVR"));
	__Local__58.FunctionNameToBind = FName(TEXT("InpActEvt_ResetVR_K2Node_InputActionEvent_1"));
	auto& __Local__59 = __Local__50->InputActionDelegateBindings[4];
	__Local__59.InputActionName = FName(TEXT("diario"));
	__Local__59.FunctionNameToBind = FName(TEXT("InpActEvt_diario_K2Node_InputActionEvent_0"));
	__Local__59.bExecuteWhenPaused = true;
	__Local__51->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding>();
	__Local__51->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__51->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__60 = __Local__51->InputAxisDelegateBindings[0];
	__Local__60.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__60.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62"));
	auto& __Local__61 = __Local__51->InputAxisDelegateBindings[1];
	__Local__61.InputAxisName = FName(TEXT("TurnRate"));
	__Local__61.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34"));
	auto& __Local__62 = __Local__51->InputAxisDelegateBindings[2];
	__Local__62.InputAxisName = FName(TEXT("MoveRight"));
	__Local__62.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192"));
	__Local__62.bConsumeInput = false;
	__Local__62.bOverrideParentBinding = false;
	auto& __Local__63 = __Local__51->InputAxisDelegateBindings[3];
	__Local__63.InputAxisName = FName(TEXT("MoveForward"));
	__Local__63.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"));
	__Local__63.bConsumeInput = false;
	__Local__63.bOverrideParentBinding = false;
	auto& __Local__64 = __Local__51->InputAxisDelegateBindings[4];
	__Local__64.InputAxisName = FName(TEXT("LookUp"));
	__Local__64.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_172"));
	__Local__64.bOverrideParentBinding = false;
	auto& __Local__65 = __Local__51->InputAxisDelegateBindings[5];
	__Local__65.InputAxisName = FName(TEXT("Turn"));
	__Local__65.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_157"));
	__Local__65.bOverrideParentBinding = false;
	__Local__52->InputTouchDelegateBindings = TArray<FBlueprintInputTouchDelegateBinding>();
	__Local__52->InputTouchDelegateBindings.AddUninitialized(1);
	FBlueprintInputTouchDelegateBinding::StaticStruct()->InitializeStruct(__Local__52->InputTouchDelegateBindings.GetData(), 1);
	auto& __Local__66 = __Local__52->InputTouchDelegateBindings[0];
	__Local__66.FunctionNameToBind = FName(TEXT("InpTchEvt_K2Node_InputTouchEvent_0"));
	__Local__66.bConsumeInput = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetSocketRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	Abalita_C__pf98894775* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch (__CurrentState)
		{
		case 1:
		{
		}
		case 2:
		{
			bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__pente__pf, 1);
			b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
		}
		case 3:
		{
			bpv__pente__pf = b0l__Temp_int_Variable__pf;
		}
		case 4:
		{
		}
		case 5:
		{
			__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
			break;
		}
		case 6:
		{
		}
		case 7:
		{
			bpv__enabled__pf = true;
		}
		case 8:
		{
			UKismetSystemLibrary::Delay(this, 0.010000, FLatentActionInfo(9, 53997316, TEXT("ExecuteUbergraph_FirstPersonCharacter_0"), this));
			__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
			break;
		}
		case 9:
		{
		}
		case 10:
		{
			if (::IsValid(bpv__Rigged_Hand__pf))
			{
				bpv__Rigged_Hand__pf->USkeletalMeshComponent::SetAnimationMode(EAnimationMode::AnimationBlueprint);
			}
		}
		case 11:
		{
			UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(12, 803730653, TEXT("ExecuteUbergraph_FirstPersonCharacter_0"), this));
			__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
			break;
		}
		case 12:
		{
		}
		case 13:
		{
			if (::IsValid(b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf))
			{
				b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf->UActorComponent::K2_DestroyComponent(this);
			}
			__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
			break;
		}
		case 38:
		{
			bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
			UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000, 0.000000, 0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), ((AActor*)nullptr));
		}
		case 39:
		{
			if (::IsValid(bpv__Sphere__pf))
			{
				bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__Sphere__pf->GetSocketLocation(FName(TEXT("None")));
			}
			if (::IsValid(bpv__Sphere__pf))
			{
				bpfv__CallFunc_GetSocketRotation_ReturnValue__pf = bpv__Sphere__pf->GetSocketRotation(FName(TEXT("None")));
			}
			b0l__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, bpfv__CallFunc_GetSocketRotation_ReturnValue__pf, FVector(0.600000, 0.600000, 0.600000), true, EPSCPoolMethod::None, true);
		}
		case 40:
		{
			UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(6, 1532013321, TEXT("ExecuteUbergraph_FirstPersonCharacter_0"), this));
			__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
			break;
		}
		case 48:
		{
		}
		case 49:
		{
			if (!bpv__enabled__pf)
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		}
		case 50:
		{
			bpv__enabled__pf = false;
		}
		case 51:
		{
			if (::IsValid(bpv__Rigged_Hand__pf))
			{
				bpv__Rigged_Hand__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed), false);
			}
		}
		case 52:
		{
			if (::IsValid(bpv__VR_Marker__pf))
			{
				bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__VR_Marker__pf->USceneComponent::K2_GetComponentToWorld();
			}
			UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
			bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakTransform_Location__pf, b0l__CallFunc_BreakTransform_Rotation__pf, FVector(1.000000, 1.000000, 1.000000));
			b0l__Temp_bool_Variable_1__pf = bpv__UsingMotionControllersx__pfzy;
			if (::IsValid(bpv__Sphere1__pf))
			{
				bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere1__pf->USceneComponent::K2_GetComponentLocation();
			}
			if (::IsValid(bpv__Sphere1__pf))
			{
				bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Sphere1__pf->USceneComponent::K2_GetComponentRotation();
			}
			bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000, 1.000000, 1.000000));
			b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Abalita_C__pf98894775::StaticClass(), TSwitchValue<bool, FTransform >(b0l__Temp_bool_Variable_1__pf, b0l__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool, FTransform >(false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), TSwitchPair<bool, FTransform >(true, bpfv__CallFunc_MakeTransform_ReturnValue__pf)), ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding, ((AActor*)nullptr));
		}
		case 53:
		{
			if (::IsValid(bpv__VR_Marker__pf))
			{
				bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__VR_Marker__pf->USceneComponent::K2_GetComponentToWorld();
			}
			UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
			bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakTransform_Location__pf, b0l__CallFunc_BreakTransform_Rotation__pf, FVector(1.000000, 1.000000, 1.000000));
			b0l__Temp_bool_Variable_1__pf = bpv__UsingMotionControllersx__pfzy;
			if (::IsValid(bpv__Sphere1__pf))
			{
				bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Sphere1__pf->USceneComponent::K2_GetComponentLocation();
			}
			if (::IsValid(bpv__Sphere1__pf))
			{
				bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Sphere1__pf->USceneComponent::K2_GetComponentRotation();
			}
			bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000, 1.000000, 1.000000));
			bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<Abalita_C__pf98894775>(UGameplayStatics::FinishSpawningActor(b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, TSwitchValue<bool, FTransform >(b0l__Temp_bool_Variable_1__pf, b0l__K2Node_Select_Default_2__pf, 2, TSwitchPair<bool, FTransform >(false, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), TSwitchPair<bool, FTransform >(true, bpfv__CallFunc_MakeTransform_ReturnValue__pf))), ECastCheckedType::NullAllowed);
			__CurrentState = 38;
			break;
		}
		case 71:
		{
			bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpv__pente__pf, 1);
			if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
			{
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		}
		case 72:
		{
			__StateStack.Push(73);
			__CurrentState = 49;
			break;
		}
		case 73:
		{
		}
		case 74:
		{
		}
		case 75:
		{
		}
		case 76:
		{
			__CurrentState = 1;
			break;
		}
		case 77:
		{
			__CurrentState = 71;
			break;
		}
		default:
			check(false); // Invalid state
			break;
		}
	} while (__CurrentState != -1);
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	Udiario_C__pf1016314526* bpfv__CallFunc_Create_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch (__CurrentState)
		{
		case 14:
		{
			bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<Udiario_C__pf1016314526>(UWidgetBlueprintLibrary::Create(this, Udiario_C__pf1016314526::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
		}
		case 15:
		{
			bpv__diary__pf = bpfv__CallFunc_Create_ReturnValue__pf;
		}
		case 16:
		{
			if (::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
			{
				bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
			}
		}
		case 17:
		{
			if (::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
			{
				bpfv__CallFunc_Create_ReturnValue__pf->SetVisibility(ESlateVisibility::Visible);
			}
		}
		case 18:
		{
			if (!bpv__2px__pfzy)
			{
				__CurrentState = 21;
				break;
			}
		}
		case 19:
		{
			int32  __Local__70 = 0;
			bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(bpv__diary__pf)) ? (bpv__diary__pf->bpv__index__pf) : (__Local__70)), 1);
			if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
			{
				__CurrentState = 21;
				break;
			}
		}
		case 20:
		{
			if (::IsValid(bpv__diary__pf) && ::IsValid(bpv__diary__pf->bpv__2__pf))
			{
				bpv__diary__pf->bpv__2__pf->SetVisibility(ESlateVisibility::Visible);
			}
		}
		case 21:
		{
			bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
		}
		case 22:
		{
			bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed), FVector(0.000000, 0.000000, 0.000000), FRotator(0.000000, 0.000000, 0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
		}
		case 23:
		{
			if (::IsValid(bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf))
			{
				bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf->UAudioComponent::SetUISound(true);
			}
		}
		case 24:
		{
			bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
			if (::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->bShowMouseCursor = true;
			}
			__CurrentState = -1;
			break;
		}
		case 25:
		{
			if (::IsValid(bpv__diary__pf))
			{
				bpv__diary__pf->SetVisibility(ESlateVisibility::Hidden);
			}
		}
		case 26:
		{
			UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000, 0.660000, 1.000000, 1.000000), 2.000000);
		}
		case 27:
		{
			bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf = UGameplayStatics::SetGamePaused(this, false);
		}
		case 28:
		{
			bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf = UGameplayStatics::GetPlayerController(this, 0);
			if (::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf))
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue_1__pf->bShowMouseCursor = false;
			}
			__CurrentState = -1;
			break;
		}
		case 41:
		{
		}
		case 42:
		{
		}
		case 43:
		{
		}
		case 44:
		{
			bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
			b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
		}
		case 45:
		{
			if (!b0l__Temp_bool_Variable__pf)
			{
				__CurrentState = 47;
				break;
			}
		}
		case 46:
		{
			__CurrentState = 14;
			break;
		}
		case 47:
		{
			__CurrentState = 25;
			break;
		}
		default:
			break;
		}
	} while (__CurrentState != -1);
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 78);
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_4__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	Uhudfpd_C__pf617722698* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	bool bpfv__CallFunc_AddToPlayerScreen_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 59);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<Uhudfpd_C__pf617722698>(UWidgetBlueprintLibrary::Create(this, Uhudfpd_C__pf617722698::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if (::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
	{
		bpfv__CallFunc_AddToPlayerScreen_ReturnValue__pf = bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToPlayerScreen(0);
	}
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	if (!bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bUseControllerRotationYaw = false;
	if (!bpv__UsingMotionControllersx__pfzy)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if (::IsValid(bpv__Rigged_Hand__pf))
	{
		bpv__Rigged_Hand__pf->USceneComponent::SetHiddenInGame(true, true);
	}
	if (::IsValid(bpv__Rigged_Hand__pf))
	{
		bpv__Rigged_Hand__pf->USceneComponent::SetHiddenInGame(false, false);
	}
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 69);
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 34);
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	if (::IsValid(bpv__FirstPersonCamera__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__FirstPersonCamera__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	b0l__Temp_bool_Variable_3__pf = bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf;
	AddMovementInput(TSwitchValue<bool, FVector >(b0l__Temp_bool_Variable_3__pf, b0l__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool, FVector >(false, bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf), TSwitchPair<bool, FVector >(true, bpfv__CallFunc_GetForwardVector_ReturnValue__pf)), b0l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 36);
	bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
	if (::IsValid(bpv__FirstPersonCamera__pf))
	{
		bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FirstPersonCamera__pf->USceneComponent::GetRightVector();
	}
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	b0l__Temp_bool_Variable_2__pf = bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf;
	AddMovementInput(TSwitchValue<bool, FVector >(b0l__Temp_bool_Variable_2__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool, FVector >(false, bpfv__CallFunc_GetActorRightVector_ReturnValue__pf), TSwitchPair<bool, FVector >(true, bpfv__CallFunc_GetRightVector_ReturnValue__pf)), b0l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 56);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, bpv__BaseLookUpRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf);
	AddControllerPitchInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 54);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_1__pf, bpv__BaseTurnRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	AddControllerYawInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue_4__pf);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue_5__pf);
	return; //KCST_EndOfThread
}
void AFirstPersonCharacter_C__pf205484891::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(59);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(56);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(54);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(36);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(34);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(32);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(30);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_diario_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(41);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(68);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_Fire_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(77);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpTchEvt_K2Node_InputTouchEvent_0__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf)
{
	b0l__K2Node_InputTouchEvent_FingerIndex__pf = bpp__FingerIndex__pf;
	b0l__K2Node_InputTouchEvent_Location__pf = bpp__Location__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(48);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_Jump_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(69);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(78);
}
void AFirstPersonCharacter_C__pf205484891::bpf__UserConstructionScript__pf()
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	if (::IsValid(bpv__Rigged_Hand__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__Rigged_Hand__pf->USceneComponent::K2_AttachToComponent(bpv__M1Garand_Garand001__pf, FName(TEXT("GripPoint")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/mão22/sdads/basepose.basepose 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/mão22/sdads/Rigged_Hand.Rigged_Hand 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/m1/source/M1Garand.M1Garand_Garand001 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/m1/textures/omg.omg 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/m1/source/M1Garand.M1Garand_Charging_Handle 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/m1/source/M1Garand.M1Garand_Bullet 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/StarterContent/Particles/P_Explosion.P_Explosion 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/m1/source/tirofodakkk.tirofodakkk 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/mão22/sdads/tiro.tiro 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/folha/_ONTIVA_COM_-Page_Flip__Sound_Effect_-HQ._ONTIVA_COM_-Page_Flip__Sound_Effect_-HQ 
	};
	for (const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{19, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/menu/ammo-clip-bullet-5.ammo-clip-bullet-5 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/DroidSansMono.DroidSansMono 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoTiny.RobotoTiny 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/menu/CIRCLEVIDA.CIRCLEVIDA 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/menu/CIRCLEVIDA1.CIRCLEVIDA1 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/menu/1-13195_tumblr-static-vector-compass-in-gray-vintage-compass.1-13195_tumblr-static-vector-compass-in-gray-vintage-compass 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/folha/12312123123.12312123123 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{57, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/m1/source/bullet/M1Garand_Bullet.M1Garand_Bullet 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/lindor.lindor 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/m2g.m2g 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/4.4 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/3.3 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/2.2 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/diario/waffen_ss___nederlanders_by_purifying1.waffen_ss___nederlanders_by_purifying1 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton.SK_Mannequin_Arms_Skeleton 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/mão22/sdads/Rigged_Hand_Skeleton.Rigged_Hand_Skeleton 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/mão22/sdads/mamadata.mamadata_C 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/diario/diario.diario_C 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/m1/source/bullet/balita.balita_C 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/menu/hudfpd.hudfpd_C 
	};
	for (const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AFirstPersonCharacter_C__pf205484891
{
	FRegisterHelper__AFirstPersonCharacter_C__pf205484891()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"), &AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFirstPersonCharacter_C__pf205484891 Instance;
};
FRegisterHelper__AFirstPersonCharacter_C__pf205484891 FRegisterHelper__AFirstPersonCharacter_C__pf205484891::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
