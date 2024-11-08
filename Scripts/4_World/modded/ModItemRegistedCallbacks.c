modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);

        pType.AddItemInHandsProfileIK(
            "Bicycle_Wheel",
            "dz/anims/workspaces/player/player_main/player_main_heavy.asi",
            pBehavior,
            "dz/anims/anm/player/ik/vehicles/offroad_02/offroad_02_Wheel.anm"
        );

        pType.AddItemInHandsProfileIK(
            "Bicycle_Wheel_Ruined",
            "dz/anims/workspaces/player/player_main/player_main_heavy.asi",
            pBehavior,
            "dz/anims/anm/player/ik/vehicles/sedan/sedan_wheeldestroyed.anm"
        );
    };
};
