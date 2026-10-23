#pragma once

void counterspell(Spell *spell) {
    if (auto fb = dynamic_cast<Fireball *>(spell)) {
        fb->revealFirepower();
    } else if (auto fr = dynamic_cast<Frostbite *>(spell)) {
        fr->revealFrostpower();
    } else if (auto wb = dynamic_cast<Waterbolt *>(spell)) {
        wb->revealWaterpower();
    } else if (auto ts = dynamic_cast<Thunderstorm *>(spell)) {
        ts->revealThunderpower();
    } else if (spell) {
        string name = spell->revealScrollName();
        string journal = SpellJournal::read();
        int m = name.size();
        int n = journal.size();
        vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (name[i - 1] == journal[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[m][n] << endl;
    }
}
