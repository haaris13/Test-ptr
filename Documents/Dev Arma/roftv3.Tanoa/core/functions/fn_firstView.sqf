/* 
    Code written by Lyeed 
*/ 
life_combatTime = time;
if (!life_firstCombatActive) then
{
    [] spawn
    {
        life_firstCombatActive = true;
        while {(life_combatTime > (time - 150))} do
        {
            if ((cameraView == "External") && ((vehicle player) == player)) then {
                player switchCamera "Internal";
            };
            sleep 0.2;
        };
        hint "Vous n'etes plus en gunfight, vous pouvez maintenant utiliser la 3eme personne";
        life_firstCombatActive = false;
    };
};