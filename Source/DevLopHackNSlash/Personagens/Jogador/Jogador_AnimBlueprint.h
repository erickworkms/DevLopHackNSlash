//Este projeto foi criado para fins de divulgar conhecimento e pode ser utilizado a vontade.

//This project was created for the purpose of disseminating knowledge and can be used freely.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DevLopHackNSlash/Personagens/Enums/Lista_Enums.h"
#include "Jogador_AnimBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class DEVLOPHACKNSLASH_API UJogador_AnimBlueprint : public UAnimInstance
{
	GENERATED_BODY()

public:
	UJogador_AnimBlueprint();
	
	FVector LocalArma;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float Vida;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float Velocidade;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float AnguloCorpo = 0.f;;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float AnguloCameraX = 0.f;;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float AnguloCameraY = 0.f;;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float Direcao = 0.f;;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	float VelTempAnimacao = 0.f;;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	bool ComboAtivo = false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	int IndexCombo = 0;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	TEnumAsByte<TipoEstado> Estado = NoChaoAndando;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animacao")
	TEnumAsByte<TipoAcao> Acao = Nada;
	
	//Lista de funções
	UFUNCTION(CallInEditor, BlueprintCallable, Category=Animacao)
	void CalculaDirecao(APawn* PersonagemBase);
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds);

private:
	UPROPERTY()
	APawn* Personagem = NULL;
};
