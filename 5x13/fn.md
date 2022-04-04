| 钥匙             | 描述                                                         |
| ---------------- | ------------------------------------------------------------ |
| `DF(layer)`      | 设置基础（默认）层                                           |
| `MO(layer)`      | `layer`按下时暂时打开（需要`KC_TRNS`在目标层上）             |
| `OSL(layer)`     | 暂时激活`layer`，直到按下一个键。有关详细信息，请参阅[一键键](https://docs.qmk.fm/#/one_shot_keys)。 |
| `LM(layer, mod)` | 暂时打开`layer`（如 MO）与`mod`活动以及。`mod`mods_bit在哪里。模组可以在[这里](https://docs.qmk.fm/#/mod_tap)查看。示例实现：`LM(LAYER_1, MOD_LALT)` |
| `LT(layer, kc)`  | `layer`按住时开启，`kc`点击时开启                            |
| `TG(layer)`      | 打开`layer`或关闭                                            |
| `TO(layer)`      | 打开`layer`和关闭所有其他层，默认层除外                      |
| `TT(layer)`      | 通常情况下就像 MO 一样，除非它被多次点击，这会`layer`打开    |



| Key              | Description                                                  |
| ---------------- | ------------------------------------------------------------ |
| `DF(layer)`      | Set the base (default) layer                                 |
| `MO(layer)`      | Momentarily turn on `layer` when pressed (requires `KC_TRNS` on destination layer) |
| `OSL(layer)`     | Momentarily activates `layer` until a key is pressed. See [One Shot Keys](https://docs.qmk.fm/#/one_shot_keys) for details. |
| `LM(layer, mod)` | Momentarily turn on `layer` (like MO) with `mod` active as well. Where `mod` is a mods_bit. Mods can be viewed [here](https://docs.qmk.fm/#/mod_tap). Example Implementation: `LM(LAYER_1, MOD_LALT)` |
| `LT(layer, kc)`  | Turn on `layer` when held, `kc` when tapped                  |
| `TG(layer)`      | Toggle `layer` on or off                                     |
| `TO(layer)`      | Turns on `layer` and turns off all other layers, except the default layer |
| `TT(layer)`      | Normally acts like MO unless it’s tapped multiple times, which toggles `layer` on |



LCTL()

LSFT()

LALT()

LGUI()

RCTL()

RSFT()

RALT()

RGUI()

HYPR()

MEH()

LCAG()

ALTG()

LT(

TO()

MO()

DF()

TG()

OSL()

OSM()

MT()

CTL_T()

SFT_T()

ALT_T()

GUI_T()

C_S_T()

MEH_T()

LCAG_T()

ALL_T()

M()