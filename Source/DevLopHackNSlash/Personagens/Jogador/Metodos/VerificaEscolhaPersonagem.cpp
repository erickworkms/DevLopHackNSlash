//Este projeto foi criado para fins de divulgar conhecimento e pode ser utilizado a vontade.

//This project was created for the purpose of disseminating knowledge and can be used freely.

#include "DevLopHackNSlash/Personagens/Jogador/Jogador_Base.h"

void AJogador_Base::VerificaEscolhaPersonagem()
{
	if(MeshesPlayer.Num() >= 4 && AnimacaoPlayer.Num() >=4)
	{
		switch (PersonagemNPC)
		{
		case Estagiario:
			VerificaMeshPersonagem(0);
			GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
			GetMesh()->SetAnimInstanceClass(Estagiario_Anim);

			Armas->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
			
			CaminhoArma = TEXT("SkeletalMesh'/Game/Personagens/Arma/EspadaNoCode.EspadaNoCode'");
			Armas->SetSkeletalMesh(
			Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(),NULL, *CaminhoArma)));
			Armas->SetRelativeLocationAndRotation(FVector(0, 35, 0),
												  FRotator(0, 0, -90));
			Armas->SetWorldScale3D(FVector(1, 1, 1));
			VerificaAttachArmas();
			
			break;
		case Pleno:
			VerificaMeshPersonagem(1);
			GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
			GetMesh()->SetAnimInstanceClass(Pleno_Anim);

			Armas->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
			
			CaminhoArma = TEXT("SkeletalMesh'/Game/Personagens/Arma/EspadaCsharp.EspadaCsharp'");
			Armas->SetSkeletalMesh(
			Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(),NULL, *CaminhoArma)));
			Armas->SetRelativeLocationAndRotation(FVector(0, 25, 0),
												  FRotator(0, 0, -90));
			VerificaAttachArmas();
			break;
		case Senior:
			VerificaMeshPersonagem(2);
			GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
			GetMesh()->SetAnimInstanceClass(Senior_Anim);

			CaminhoArma = TEXT("SkeletalMesh'/Game/Personagens/Arma/LuvaJava.LuvaJava'");
			Armas->SetSkeletalMesh(
			Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(),NULL, *CaminhoArma)));
			Armas->SetRelativeLocationAndRotation(FVector(0, 0, 0),
												  FRotator(0, 0, 0));
			
			
			ArmasExtra->SetSkeletalMesh(
			Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(),NULL, *CaminhoArma)));
			
			ArmasExtra->SetRelativeLocationAndRotation(FVector(0, 0, 0),
												  FRotator(0, 0, 0));
			
			
			Armas->AttachToComponent(GetMesh(),
			FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");

			ArmasExtra->AttachToComponent(GetMesh(),
			FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoEsquerdaSoquete");
			
			Armas->SetWorldScale3D(FVector(3, 3, 3));
			ArmasExtra->SetWorldScale3D(FVector(3, 3, 3));
			
			ColisaoDanoCombo->AttachToComponent(GetMesh(),
							FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
			ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 70),
												 FRotator(0, 0, 0), false, false);
			ColisaoDanoCombo->SetWorldScale3D(FVector(1, 1, 2));
			
			break;
		case Chefe:
			VerificaMeshPersonagem(3);
			GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
			GetMesh()->SetAnimInstanceClass(Chefe_Anim);

			Armas->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
			
			CaminhoArma = TEXT("SkeletalMesh'/Game/Personagens/Arma/EspadaC++.EspadaC++'");
			Armas->SetSkeletalMesh(
			Cast<USkeletalMesh>(StaticLoadObject(USkeletalMesh::StaticClass(),NULL, *CaminhoArma)));
			Armas->SetRelativeLocationAndRotation(FVector(0, 0, -25),
										  FRotator(0, 90, 0));
			VerificaAttachArmas();
			break;
		default:
			VerificaMeshPersonagem(0);
			GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
			GetMesh()->SetAnimInstanceClass(Estagiario_Anim);
			break;
		}
	}
}
void AJogador_Base::CarregarAssetsPersonagem()
{
	
}