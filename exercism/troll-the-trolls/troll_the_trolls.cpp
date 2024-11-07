namespace hellmath {
    enum class AccountStatus{
        troll,
        guest,
        user,
        mod
    };
    enum class Action {
        read,
        remove,
        write
    };

    bool display_post(AccountStatus poster, AccountStatus viewer){
        return poster != AccountStatus::troll || viewer == AccountStatus::troll;
    }

    bool permission_check(Action what, AccountStatus who){
        bool permission { false };
        switch (what)
        {
        case Action::read:
            if(who == AccountStatus::troll) { permission = true; }
            if(who == AccountStatus::guest) { permission = true; }
            if(who == AccountStatus::user)  { permission = true; }
            if(who == AccountStatus::mod)   { permission = true; }
            return permission;
        case Action::remove:
            if(who == AccountStatus::troll) { permission = false; }
            if(who == AccountStatus::guest) { permission = false; }
            if(who == AccountStatus::user)  { permission = false; }
            if(who == AccountStatus::mod)   { permission = true; }
            return permission;
        case Action::write:
            if(who == AccountStatus::troll) { permission = true; }
            if(who == AccountStatus::guest) { permission = false; }
            if(who == AccountStatus::user)  { permission = true; }
            if(who == AccountStatus::mod)   { permission = true; }
            return permission;
        default:
            return permission;;
        }
    }

    bool valid_player_combination(AccountStatus player_01, AccountStatus player_02){
        if(player_01 == AccountStatus::guest || player_02 == AccountStatus::guest){
            return false;
        }
        if(player_01 == AccountStatus::troll || player_02 == AccountStatus:: troll){
            return player_01 == player_02;
        }
        return true;
    }

    bool has_priority(AccountStatus rank_status_01, AccountStatus rank_status_02){
        return rank_status_01 > rank_status_02;
    }   
}