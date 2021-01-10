forward OnBlueEclipseDetected(playerid);

BlueEclipseCheck(playerid) 
{
	SetTimerEx("be_HackCheck", 1000, false, "i", playerid);
	
	return 1;
}

forward be_HackCheck(playerid);
public be_HackCheck(playerid)
{
	if( GetPlayerCameraMode(playerid) == 7 )
	{
		CallLocalFunction("OnBlueEclipseDetected", "i", playerid);
	}
	
	TogglePlayerControllable(playerid, true);
}