#include <a_players>
#include <foreach>

#define CREDITS SendClientMessage(playerid,BELA, "AntiCheat by: Nazil Mubarok A.K.A JamesGanz");
#define slurd "[AntiCheat]:"

stock Anticheat_SetPlayerVirtualWorld(playerid, vw)
{
	SetPVarFloat(playerid,"AntiTp",1);
	SetPlayerVirtualWorld(playerid,vw);
	SetPVarInt(playerid, "AmanVW", vw);
	return 1;
}
stock Anticheat_ResetPlayerMoney(playerid)
{
	ResetPlayerMoney(playerid);
	SetPVarInt(playerid, "UangAman", 1);
	return 1;
}
stock Anticheat_SetPlayerPos(playerid, Float:xx, Float:yy, Float:zz)
{
	SetPVarFloat(playerid,"AntiTp",1);
	SetPlayerPos(playerid, xx,yy,zz);
	SetPVarInt(playerid, "TpAman", 1);
	return 1;
}
stock Anticheat_GivePlayerMoney(playerid, novac)
{
	GivePlayerMoney(playerid, novac);
	SetPVarInt(playerid, "UangAman", 1);
	return 1;
}
stock Anticheat_PutPlayerInVehicle(playerid, vozilo, sediste)
{
	SetPVarFloat(playerid,"AntiTp",1);
	PutPlayerInVehicle(playerid, vozilo, sediste);
	SetPVarInt(playerid, "TpAman", 1);
}
stock Anticheat_SetPlayerInterior(playerid, intid)
{
	SetPVarFloat(playerid,"AntiTp",1);
	SetPlayerInterior(playerid, intid);
	SetPVarInt(playerid, "IntAman", intid);
	return 1;
}
stock Anticheat_SetPlayerHealth(playerid,Float:helti)
{
	SetPVarFloat(playerid,"NyawaAman",1);
	SetPlayerHealth(playerid,helti);
	SetPVarFloat(playerid,"NyawaAman2",helti);
}
stock Anticheat_SetVehicleToRespawn(idvozila)
{
    	foreach(Player, i)
    	{
    	    	new idvoz = GetPlayerVehicleID(i);
    	    	if(idvoz == idvozila)
    	    	{
	    	    	SetPVarInt(i, "PerbaikanMobil", 1);
	    	    	SetVehicleToRespawn(idvozila);
	    	    	SetPVarInt(i, "PerbaikanMobil", 1);
	    	    	return 1;
    	    	}
    	}
}
stock Anticheat_SetPlayerArmour(playerid,Float:armor)
{
	SetPVarFloat(playerid,"ArmorAman",1);
	SetPlayerArmour(playerid,armor);
	SetPVarFloat(playerid,"ArmorAman2",armor);
}