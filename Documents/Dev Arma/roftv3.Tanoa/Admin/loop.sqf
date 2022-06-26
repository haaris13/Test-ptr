if (isServer) exitWith {};
while {true} do
{
  waitUntil {alive vehicle player};
 [] execVM "Admin\activate.sqf";


  waitUntil {!alive player};
};