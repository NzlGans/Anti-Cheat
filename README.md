<p align="center">
<img src="https://avatars1.githubusercontent.com/u/77225591?s=460&v=4" width="128" height="128"/>
</p>
<p align="center">
<a href="#"><img title="Anti-Cheat" src="https://img.shields.io/badge/Anti Cheat-green?colorA=%23ff0000&colorB=%23017e40&style=for-the-badge"></a>
</p>
<p align="center">
<a href="https://github.com/NazilGans"><img title="Author" src="https://img.shields.io/badge/Author-NzlGans-red.svg?style=for-the-badge&logo=github"></a>
</p>
</p>
<p align="center">
<a href="https://github.com/NzlGans/followers"><img title="Followers" src="https://img.shields.io/github/followers/NazilGans?color=blue&style=flat-square"></a>
<a href="https://github.com/NzlGans/anti-cheat/stargazers/"><img title="Stars" src="https://img.shields.io/github/stars/NazilGans/anti-cheat?color=red&style=flat-square"></a>
<a href="https://github.com/NzlGans/anti-cheag/network/members"><img title="Forks" src="https://img.shields.io/github/forks/NazilGans/anti-cheat?color=red&style=flat-square"></a>
<a href="https://github.com/NzlGans/anti-cheat/watchers"><img title="Watching" src="https://img.shields.io/github/watchers/NazilGans/anti-cheat?label=Watchers&color=blue&style=flat-square"></a>
<a href="https://saweria.co/NazilGans"><img title="Donate" src"https://img.shields.io/badge/Donate-green?colorA=%23ff0000&colorB=%23017e40&style=for-the-badge"></a>
<a href="#"><img title="UNMAINTENED" src="https://img.shields.io/badge/UNMAINTENED-YES-blue.svg"</a>
</p>


		
## ANTI CHEAT + SOBEIT DETECTOR ~
## Please Don't Remove Author.
				
Supaya Code Berjalan Tolong Jangan Lewati/Sepelekan Langkah2 Di bawah Ini !
•Jangan Lupa #include <anticheat> Di dalam Gamemode.
<>
```Pd OnPlayerConnect Tambahkan 
	Anticheat_SetPlayerArmour(playerid, 0);
	Anticheat_SetPlayerHealth(playerid, 100);
```

```Pd OnPlayerSpawn Tambahkan
	SetPVarInt(playerid, "pengamanan", 0);
```

```Dan Masukkan Ini Pada Command Adminduty Agar Admin Duty Aman Dari Kick
	SetPVarInt(playerid, "Avoidance", 1);
```

```Dan Masukkan Ini Pada Command Off Admin Duty Agar Server Dapat Mengetahuinya
	SetPVarInt(playerid, "pengamanan", 0);
```

```Lalu Ganti Semua  Code di bawah

	GivePlayerMoney
	ResetPlayerMoney
	SetPlayerMoney
	SetPlayerHealth
	SetPlayerArmour
	SetPlayerPos
	SetPlayerInterior
	SetPlayerVirtualWorld
	PutPlayerInVehicle
	SetVehicleToRespawn
	
menjadi
	
	Anticheat_GivePlayerMoney
	Anticheat_ResetPlayerMoney
	Anticheat_SetPlayerMoney
	Anticheat_SetPlayerHealth
	Anticheat_SetPlayerArmour
	Anticheat_SetPlayerPos
	Anticheat_SetPlayerInterior
	Anticheat_SetPlayerVirtualWorld
	Anticheat_PutPlayerInVehicle
	Anticheat_SetVehicleToRespawn
```

```Lalu Masukkan Code Ini Pada Cmd Repair Kendaraan
	SetPVarInt(playerid, "Vehicle Repair", 1);

Lalu Jangan Lupa Masukkan Filterscipt Dengan Nama AntiCheatByNazil
 Di Server.CFG
```

##			-THANK YOU :)

