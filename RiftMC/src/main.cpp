#include iostream
#include launcherLauncher.h
#include authAuth.h
#include utilsConfig.h

int main() {
    stdcout  === RiftMC Launcher ===  stdendl;

    Config config(config.json);
    if (!config.load()) {
        stdcout  Failed to load config. Exiting.  stdendl;
        return 1;
    }

    Auth auth(config.get(username));
    if (!auth.authenticate()) {
        stdcout  Authentication failed.  stdendl;
        return 1;
    }

    Launcher launcher(config.get(minecraft_version));
    launcher.launch();

    return 0;
}
