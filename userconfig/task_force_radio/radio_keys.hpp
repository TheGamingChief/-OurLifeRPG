class task_force_radio_settings {

	// ----------------------------------------- СЕРВЕРНЫЕ НАСТРОЙКИ / SERVERSIDE SETTINGS --------------------------- //
	tf_no_auto_long_range_radio = 0; // Запретить автоматическую выдачу ранцевых радиостанций? 0 — нет, 1 — да. / Should we disable auto-addition of manpack radios? 0 is enable auto-addition, 1 is disable auto-addition.
	tf_give_personal_radio_to_regular_soldier = 0; // Выдавать ли простым солдатам рацию с настраиваемыми частотами? Значения: 0, 1. / Should we give configurable radios to regular soldiers? Values: look above.
	tf_radio_channel_name = "TaskForceRadio"; // Серверный канал для «серьёзных» игр. Значение: строка. / Enter the "serious mode" channel name here. Format: string.
	tf_radio_channel_password = "123"; // Серверный пароль для канала. Значение: строка. / Channel password goes here.
	tf_radio_channel_coop_name = "TaskForceRadio"; // Серверный канал для «серьёзных» пострелушек по ботам. Сюда будут перемещены игроки в режимах, отличных от TvT, TVT, TEAM и Team. Можно сделать в ТС второй канал, если у вас два сервера, использующих рацию, можно задать то же значение, что в tf_radio_channel_name, чтобы игроков вне зависимости от режима перекидывало в «серьёзный» канал, можно задать заведомо несуществующее имя, чтобы игроки оставались в том канале, в котором они находятся (последнее можно проделать и с паролем). Значение: строка. / Enter the "fun in serious mode" channel name here. The players playing in game modes different from TvT, TVT, Team or TEAM will be moved there. You can either define a second channel if you have coop and team-v-team servers, define both as the same channel (if only 1 server is available) or define a fake (non-existing in your TS) channel name to let the coop players stay in a non-locked channel and be able to hear players not in game (the latter is also correct for a password). Format: string.
	tf_radio_channel_coop_password = "123"; // Серверный пароль для кооперативного канала. Значение: строка. / "Fun in serious mode" channel password goes here.
	tf_radio_func_interval = 0; // Задержка между перебором игроков на машине клиента. В идеале — ноль, но если наблюдаются лаги, то можно немного увеличить. Корректные значения — от 0.0 до 1.0 / Interval between re-newing the players' positions on client computers (it is a server-side setting which gets publicVariable'd). Ideally it should be zero, but if clients encounter low fps, you can increase it a bit. Correct values range from 0.0 to 1.0 (float).
	tf_give_microdagr_to_soldier = 0; // Выдаёт каждому бойцу предмет, позволяющий программировать рации без интерфейса. / Gives a "micro-DAGR" thingy that allows to program rifleman radios.
	tf_same_sw_frequencies_for_side = 1; // Одинаковые частоты для КВ всей стороны. / Same frequencies for all SW radios on the side.
	tf_same_lr_frequencies_for_side = 1; // То же самое, только для ДВ. / Same as above, but for LR radios.
	
	// ----------------------------------------- КЛИЕНТСКИЕ НАСТРОЙКИ / CLIENTSIDE SETTINGS --------------------------- //
	tf_default_radioVolume = 7; // Желаемое стандартное значение громкости (от 0 до 9). / Preferred default radio volume (0 — 9).
};

class task_force_radio_keys {

	// Если какие-то клавиши вам кажутся лишними, выставьте значение Key на 0 или удалите класс.
	// If any of the keys seems to be useless or depriving you of some functionality, set Key value to 0 (zero) or even delete the class.
	// Тангента КВ. Обязательная клавиша (SW tangent. Key value must differ from 0). Default - Caps Lock.
	class tanget_sw {
		key = 58;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	
	// Запасная тангента КВ (Second SW (Short-wave, i. e. UHF and VHF) radio tangent).
	class tanget_sw_2 {
		key = 0;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	
	// Тангента дополнительного канала КВ (Additional channel tangent for SW radio).
	class tanget_additional_sw {
		key = 20;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};

	// Открыть интерфейс КВ (Open SW radio interface).
	// Обязательная клавиша (Key value must differ from 0). Default — Ctrl + P.
	class dialog_sw {
		key = 25;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Тангента ДВ (LR (Long Range — manpack or vehicle) radio tangent).
	// Обязательная клавиша (Key value must differ from 0).  Default — Ctrl + Caps Lock.
	class tanget_lr {
		key = 58;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	
	// Запасная тангента ДВ (Second LR tangent).
	class tanget_lr_2 {
		key = 0;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	
	// Тангента дополнительного канала ДВ (Speak on additional LR channel).
	class tanget_additional_lr {
		key = 21;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};

	// Открыть интерфейс ДВ (Open LR radio interface).
	// Обязательная клавиша (Key value must differ from 0). Default — Alt + P.
	class dialog_lr {
		key = 25;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Громкость речи (Voice volume). Default — Ctrl+Tab.
	// Обязательная клавиша (Key value must differ from 0).
	class speak_volume {
		key = 15;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Следующая КВ-станция (Next SW radio).
	class sw_cycle_next {
		key = 27;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Предыдущая КВ-станция (Previous SW radio).
	class sw_cycle_prev {
		key = 26;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Стереозвук на КВ (Set current SW as stereo).
	class sw_stereo_both {
		key = 200;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Моно: левое ухо (Set current SW at left ear).
	class sw_stereo_left {
		key = 203;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Моно: правое ухо (Set current SW at right ear).
	class sw_stereo_right {
		key = 205;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Быстрое переключение каналов КВ (Rapid switching between SW radio channels). Default - numpad 1-9.
	class sw_channel_1 {
		key = 79;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_2 {
		key = 80;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_3 {
		key = 81;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_4 {
		key = 75;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_5 {
		key = 76;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_6 {
		key = 77;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_7 {
		key = 71;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	class sw_channel_8 {
		key = 72;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};

	// Следующая ДВ-радиостанция (Next LR radio).
	class lr_cycle_next {
		key = 27;
		ctrl = 1;
		shift = 0;
		alt = 1;
	};

	// Предыдущая ДВ-радиостанция (Previous LR radio).
	class lr_cycle_prev {
		key = 26;
		ctrl = 1;
		shift = 0;
		alt = 1;
	};

	// Стереозвук на ДВ (Set current LR as stereo).
	class lr_stereo_both {
		key = 200;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Моно: левое ухо (Set current LR at left ear).
	class lr_stereo_left {
		key = 203;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Моно: правое ухо (Set current LR at right ear).
	class lr_stereo_right {
		key = 205;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Быстрое переключение каналов ДВ (Rapid switching between LR radio channels). Default — Ctrl + Numpad 1-9.
	class lr_channel_1 {
		key = 79;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_2 {
		key = 80;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_3 {
		key = 81;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_4 {
		key = 75;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_5 {
		key = 76;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_6 {
		key = 77;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_7 {
		key = 71;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_8 {
		key = 72;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	class lr_channel_9 {
		key = 73;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	
	// Следующие клавиши пока не работают.
	// Увеличить уровень звука КВ (Increase SW volume). Default — Home.
	class volume_sw_plus {
		key = 199;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	// Уменьшить уровень звука КВ (Decrease SW volume). Default — Insert.
	class volume_sw_minus {
		key = 210;
		ctrl = 0;
		shift = 0;
		alt = 0;
	};
	// Увеличить уровень звука ДВ (Increase LR volume). Default — Ctrl+Home.
	class volume_lr_plus {
		key = 199;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};
	// Уменьшить уровень звука ДВ (Decrease LR volume). Default — Ctrl+Insert.
	class volume_lr_minus {
		key = 210;
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	// Тангента переговорного устройства подводников (только для ArmA-III).
	// Diver talking device tangent (ArmA-III only).
	class tanget_dd {
		key = 58;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Запасная тангента водолазной рации (Second DD tangent).
	class tanget_dd_2 {
		key = 0;
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	// Открыть интерфейс водолазной рации (Open DD interface).
	class dialog_dd {
		key = 25;
		ctrl = 0;
		shift = 1;
		alt = 0;
	};


};

/* KEY LIST // Tastendruckzuweisung // Le key de la baguette // Обозначения клавиш // Zorro key // Lista klawiszy // Billentyû lista // whatever */
/* ================================================================================================================= */
/*
		KEY LIST FOR US KEYBOARD LAYOUT BELOW THIS LIST


shift
ctrl
alt

ESC = 1 
F1 = 59 
F2 = 60 
F3 = 61 
F4 = 62 
F5 = 63 
F6 = 64 
F7 = 65 
F8 = 66 
F9 = 67 
F10 = 68 
F11 = 87 
F12 = 88 
PRINT = 183 
SCROLL = 70 
PAUSE = 197 
^ = 41 
1 = 2 
2 = 3 
3 = 4 
4 = 5 
5 = 6 
6 = 7 
7 = 8 
8 = 9 
9 = 10 
0 = 11 
ß = 12 
´ = 13 
Ü = 26 
Ö = 39 
Ä = 40 
# = 43 
< = 86 
, = 51 
. = 52 
- = 53 
+ = NOT DEFINED
POS1 = 199 
TAB = 15 
ENTER = 28 
DELETE = 211 
BACKSPACE = 14 
INSERT = 210 
END = 207 
PAGEUP = 201 
PAGEDOWN = 209 
CAPS = 58 
A = 30 
B = 48 
C = 46 
D = 32 
E = 18 
F = 33 
G = 34 
H = 35 
I = 23 
J = 36 
K = 37 
L = 38 
M = 50 
N = 49 
O = 24 
P = 25 
Q = 16 
U = 22 
R = 19 
S = 31 
T = 20 
V = 47 
W = 17 
X = 45 
Y = 44 
Z = 21 
SHIFTL = 42 
SHIFTR = 54 
UP = 200 
DOWN = 208 
LEFT = 203 
RIGHT = 205 
NUM_0 = 82 
NUM_1 = 79 
NUM_2 = 80 
NUM_3 = 81 
NUM_4 = 75 
NUM_5 = 76 
NUM_6 = 77 
NUM_7 = 71 
NUM_8 = 72 
NUM_9 = 73 
NUM_+ = 78 
NUM = 69 
NUM_/ = 181 
NUM_* = 55 
NUM_- = 74 
NUM_, = 83 
NUM_ENTER = 156 
STRGL = 29 
STRGR = 157  
WINL = 220 
WINR = 219  
ALT = 56 
SPACE = 57 
ALTGR = 184 
APP = 221 
*/


/* KEY LIST // English (US) 104-key    provided by tcp */ 
/* ================================================================================================================= */
/*
ESC = 1 
F1 = 59 
F2 = 60 
F3 = 61 
F4 = 62 
F5 = 63 
F6 = 64 
F7 = 65 
F8 = 66 
F9 = 67 
F10 = 68 
F11 = 87 
F12 = 88 
PRINT = 183 
SCROLL = 70 
PAUSE = 197 
` = 41  
1 = 2 
2 = 3 
3 = 4 
4 = 5 
5 = 6 
6 = 7 
7 = 8 
8 = 9 
9 = 10 
0 = 11 
- = 12 
= = 13 
, = 51 
. = 52 
/ = 53
; = 39
' = 40
[ = 26
] = 27
\ = 43
HOME = 199 
TAB = 15 
ENTER = 28 
DELETE = 211 
BACKSPACE = 14 
INSERT = 210 
END = 207 
PAGEUP = 201 
PAGEDOWN = 209 
CAPS = 58 
A = 30 
B = 48 
C = 46 
D = 32 
E = 18 
F = 33 
G = 34 
H = 35 
I = 23 
J = 36 
K = 37 
L = 38 
M = 50 
N = 49 
O = 24 
P = 25 
Q = 16 
R = 19 
S = 31 
T = 20 
U = 22 
V = 47 
W = 17 
X = 45 
Y = 21 
Z = 44 
SHIFTL = 42 
SHIFTR = 54 
UP = 200 
DOWN = 208 
LEFT = 203 
RIGHT = 205 
NUM_0 = 82 
NUM_1 = 79 
NUM_2 = 80 
NUM_3 = 81 
NUM_4 = 75 
NUM_5 = 76 
NUM_6 = 77 
NUM_7 = 71 
NUM_8 = 72 
NUM_9 = 73 
NUM_+ = 78 
NUM = 69 
NUM_/ = 181 
NUM_* = 55 
NUM_- = 74 
NUM_. = 83
NUM_ENTER = 156 
CTRLL = 29 
CTRLR = 157 
WINL = 219 
WINR = 220 
ALTL = 56
ALTR = 184
SPACE = 57 
APP = 221
*/
