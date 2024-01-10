//Este projeto foi criado para fins de divulgar conhecimento e pode ser utilizado a vontade.

//This project was created for the purpose of disseminating knowledge and can be used freely.


#include "ADevLopSideScrollGameStateBase.h"

float ADevLopHackNSlashGameStateBase::GetTempoJogo()
{
	return TempoJogo;
}

void ADevLopHackNSlashGameStateBase::SetTempoJogo(float TempoJogoSet)
{
	TempoJogo = TempoJogoSet;
}

void ADevLopHackNSlashGameStateBase::DescontaTempoJogo()
{
	TempoJogo--;
}
