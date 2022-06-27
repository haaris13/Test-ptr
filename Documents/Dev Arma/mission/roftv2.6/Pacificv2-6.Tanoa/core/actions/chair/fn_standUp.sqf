/*
	Name: standUp

*/
player switchMove "stop";
player playActionNow "stop";
player removeaction life_action_standup;
life_action_standup = nil;
if(!isNil 'life_sitting_chair') then {
	life_sitting_chair setVariable["occupied",nil,true];
	life_sitting_chair = nil;
};

uiSleep 0.5;
player playActionNow "stop";