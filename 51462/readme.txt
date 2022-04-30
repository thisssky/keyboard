行列指导
https://baijiahao.baidu.com/s?id=1665730272327907789&wfr=spider&for=pc

https://blog.roastpotatoes.co/guide/2015/11/04/how-to-handwire-a-planck/


https://learn.sparkfun.com/tutorials/installing-an-arduino-bootloader

https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide#installing-windows

https://www.sparkfun.com/products/12640
https://www.sparkfun.com/products/retired/10999

https://www.instructables.com/How-to-upload-sketches-to-Pro-MicroLeonardo-via-se/

https://gr33nonline.wordpress.com/2015/08/05/the-case-of-the-broken-micro/
https://gr33nonline.wordpress.com/2016/10/19/the-case-of-the-broken-pro-micro-reprise/

[键层]
MO:按住临时打开层
LT(layer,kc):按住打开层，点击为键
LCTL(),LSFT(),LAT()可以互相套娃

第四层(Layer3)鼠标键层
[config.h]
设置鼠标移动模式
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
[rule.mk]
MOUSEKEY_ENABLE = yes
[
KC_MS_UP			鼠标上移
KC_MS_DOWN			鼠标下移
KC_MS_LEFT			鼠标左移
KC_MS_RIGHT			鼠标右移
KC_MS_BTN1			鼠标左键
KC_MS_BTN2			鼠标右键
KC_MS_BTN3        	鼠标速度
KC_MS_BTN4        	后退
KC_MS_BTN5        	前进
KC_MS_WH_UP			向上滚动
KC_MS_WH_DOWN		向下滚动
KC_MS_ACCEL0		鼠标移动速度
KC_MS_ACCEL1
KC_MS_ACCEL2
]
[
KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TAB, KC_MS_BTN3, KC_MS_BTN5, KC_MS_UP, LCTL(KC_R), LCTL(KC_T), LCTL(KC_Y), KC_MS_ACCEL0, KC_MS_WH_UP, KC_MS_ACCEL1, KC_TRNS, KC_TRNS, LCTL(LSFT(KC_DEL)),
		KC_TRNS, KC_MS_BTN4, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_BSPC, KC_DEL, KC_MS_BTN1, KC_MS_WH_DOWN, KC_MS_BTN2, KC_MS_ACCEL2, LCTL(KC_ENT), KC_TRNS,
		KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_V), LCTL(KC_C), LCTL(KC_B), KC_PGUP, KC_PGDN, LSFT(KC_HOME), LSFT(KC_END), KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT, KC_ENT, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RCTL)
]
