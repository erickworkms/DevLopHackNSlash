#include "DevLopHackNSlash/Personagens/Jogador/Jogador_Base.h"

void AJogador_Base::VerificaAttachArmas()
{
	ColisaoDanoCombo->AttachToComponent(Armas,
					FAttachmentTransformRules::SnapToTargetIncludingScale, "PontaArmaSocket");
	ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 0),
										 FRotator(0, 0, 0), false, false);
	ColisaoDanoCombo->SetWorldScale3D(FVector(1, 1, 3));
}

void AJogador_Base::VerificaAttachMaos()
{
	switch (IndexCombo)
	{
	case 0:
		ColisaoDanoCombo->AttachToComponent(GetMesh(),
						FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoEsquerdaSoquete");
		ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 70),
											 FRotator(0, 0, 0), false, false);
		ColisaoDanoCombo->SetWorldScale3D(FVector(2, 2, 4));
		break;
	case 1:
		ColisaoDanoCombo->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
		ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 70),
											 FRotator(0, 0, 0), false, false);
		ColisaoDanoCombo->SetWorldScale3D(FVector(2, 2, 4));
		break;
	case 2:
		ColisaoDanoCombo->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "MaoDirSoquete");
		ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 70),
											 FRotator(0, 0, 0), false, false);
		ColisaoDanoCombo->SetWorldScale3D(FVector(2, 2, 4));
		break;
	case 3:
		ColisaoDanoCombo->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "PeEsquerdoSoquete");
		ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 0),
											 FRotator(0, 0, 0), false, false);
		ColisaoDanoCombo->SetWorldScale3D(FVector(2, 2, 4));
		break;
	case 4:
		ColisaoDanoCombo->AttachToComponent(GetMesh(),
					FAttachmentTransformRules::SnapToTargetIncludingScale, "PeEsquerdoSoquete");
		ColisaoDanoCombo->SetRelativeLocationAndRotation(FVector(0, 0, 0),
											 FRotator(30, 0, 0), false, false);
		ColisaoDanoCombo->SetWorldScale3D(FVector(2, 2, 4));
		break;
	default:
		break;
	}
}
