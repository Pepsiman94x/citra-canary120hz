| Pull Request | Commit | Title | Author | Merged? |
|----|----|----|----|----|
| [6883](https://github.com/citra-emu/citra//pull/6883) | [`b2c5f80a5`](https://github.com/citra-emu/citra//pull/6883/files) | boss: Implement Spotpass service (part 1) | [FearlessTobi](https://github.com/FearlessTobi/) | Yes |
| [7108](https://github.com/citra-emu/citra//pull/7108) | [`871ad2715`](https://github.com/citra-emu/citra//pull/7108/files) | Android UI Overhaul Part 1 | [t895](https://github.com/t895/) | Yes |
| [7121](https://github.com/citra-emu/citra//pull/7121) | [`6f96e9846`](https://github.com/citra-emu/citra//pull/7121/files) | input_common: Set SDL hints to enable DualShock 4 / DualSense motion. | [Steveice10](https://github.com/Steveice10/) | Yes |
| [7126](https://github.com/citra-emu/citra//pull/7126) | [`e47acf054`](https://github.com/citra-emu/citra//pull/7126/files) |  video_core: Perform quaternion correction and interpolation in fragment shader using barycentric extension. | [Steveice10](https://github.com/Steveice10/) | Yes |
| [7134](https://github.com/citra-emu/citra//pull/7134) | [`d9506d3ea`](https://github.com/citra-emu/citra//pull/7134/files) | mic: Refactor microphone state and management. | [Steveice10](https://github.com/Steveice10/) | Yes |
| [7136](https://github.com/citra-emu/citra//pull/7136) | [`1be7eb3f9`](https://github.com/citra-emu/citra//pull/7136/files) | shader_jit_a64_compiler: Improve Compile_SwizzleSrc | [merryhime](https://github.com/merryhime/) | Yes |
| [7137](https://github.com/citra-emu/citra//pull/7137) | [`4ddf8aa6e`](https://github.com/citra-emu/citra//pull/7137/files) | shader_jit_a64_compiler: Improve MAX, MIN | [merryhime](https://github.com/merryhime/) | Yes |


End of merge log. You can find the original README.md below the break.

-----

<h1 align="center">
  <br>
  <a href="https://citra-emu.org/"><img src="https://raw.githubusercontent.com/citra-emu/citra-assets/master/Main/citra_logo.svg" alt="Citra" width="200"></a>
  <br>
  <b>Citra</b>
  <br>
</h1>

<h4 align="center"><b>Citra</b> is the world's most popular, open-source, Nintendo 3DS emulator.
<br>
It is written in C++ with portability in mind and builds are actively maintained for Windows, Linux, Android and macOS.
</h4>

<p align="center">
    <a href="https://github.com/citra-emu/citra/actions/">
        <img src="https://github.com/citra-emu/citra/workflows/citra-ci/badge.svg"
            alt="GitHub Actions Build Status">
    </a>
    <a href="https://discord.gg/FAXfZV9">
        <img src="https://img.shields.io/discord/220740965957107713?color=%237289DA&label=Citra&logo=discord&logoColor=white"
            alt="Discord">
    </a>
</p>

<p align="center">
  <a href="#compatibility">Compatibility</a> |
  <a href="#releases">Releases</a> |
  <a href="#development">Development</a> |
  <a href="#building">Building</a> |
  <a href="#support">Support</a> |
  <a href="#license">License</a>
</p>


## Compatibility

The emulator is capable of running most commercial games at full speed, provided you meet the necessary hardware requirements.

For a full list of games Citra supports, please visit our [Compatibility page](https://citra-emu.org/game/)

Check out our [website](https://citra-emu.org/) for the latest news on exciting features, progress reports, and more!
Please read the [FAQ](https://citra-emu.org/wiki/faq/) before getting started with the project.

Need help? Check out our [asking for help](https://citra-emu.org/help/reference/asking/) guide.

## Releases

Citra has two main release channels: Nightly and Canary.

The [Nightly](https://github.com/citra-emu/citra-nightly) build is based on the master branch, and contains already reviewed and tested features.

The [Canary](https://github.com/citra-emu/citra-canary) build is based on the master branch, but with additional features still under review. PRs tagged `canary-merge` are merged only into the Canary builds.

Both builds can be installed with the installer provided on the [website](https://citra-emu.org/download/), but those looking for specific versions or standalone releases can find them in the release tabs of the [Nightly](https://github.com/citra-emu/citra-nightly/releases) and [Canary](https://github.com/citra-emu/citra-canary/releases) repositories.

Android builds can be downloaded from the Google Play Store.

A Flatpak for Citra is available on [Flathub](https://flathub.org/apps/details/org.citra_emu.citra). Details on the build process can be found in [our Flathub repository](https://github.com/flathub/org.citra_emu.citra).

## Development

Most of the development happens on GitHub. It's also where [our central repository](https://github.com/citra-emu/citra) is hosted.
For development discussion, please join us on our [Discord server](https://citra-emu.org/discord/) or at #citra-dev on libera.

If you want to contribute please take a look at the [Contributor's Guide](https://github.com/citra-emu/citra/wiki/Contributing) and [Developer Information](https://github.com/citra-emu/citra/wiki/Developer-Information). You can also contact any of the developers on Discord in order to know about the current state of the emulator.

If you want to contribute to the user interface translation, please check out the [Citra project on transifex](https://www.transifex.com/citra/citra). We centralize the translation work there, and periodically upstream translations.

## Building

* __Windows__: [Windows Build](https://github.com/citra-emu/citra/wiki/Building-For-Windows)
* __Linux__: [Linux Build](https://github.com/citra-emu/citra/wiki/Building-For-Linux)
* __macOS__: [macOS Build](https://github.com/citra-emu/citra/wiki/Building-for-macOS)
* __Android__: [Android Build](https://github.com/citra-emu/citra/wiki/Building-for-Android)


## Support

If you enjoy the project and want to support us financially, check out our Patreon!

<a href="https://www.patreon.com/citraemu">
    <img src="https://c5.patreon.com/external/logo/become_a_patron_button@2x.png" width="160">
</a>

We also happily accept donated games and hardware.
Please see our [donations page](https://citra-emu.org/donate/) for more information on how you can contribute to Citra.
Any donations received will go towards things like:
* 3DS consoles for developers to explore the hardware
* 3DS games for testing
* Any equipment required for homebrew
* Infrastructure setup

We also more than gladly accept used 3DS consoles! If you would like to give yours away, don't hesitate to join our [Discord server](https://citra-emu.org/discord/) and talk to bunnei.


## License

Citra is licensed under the GPLv2 (or any later version). Refer to the [LICENSE.txt](https://github.com/citra-emu/citra/blob/master/license.txt) file.
