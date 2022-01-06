// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PRJ_TEST_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	/** Type of this item, set in native parent class */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FPrimaryAssetType ItemType;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> BPClass;

	/** Overridden to use saved type */
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
