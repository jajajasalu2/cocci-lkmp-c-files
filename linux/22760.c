cocci_test_suite() {
	struct snd_cmi8328 {
		u16 port;
		u8 cfg[3];
		u8 wss_cfg;
		struct snd_card *card;
		struct snd_wss *wss;
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
	} cocci_id/* sound/isa/cmi8328.c 73 */;
	bool cocci_id/* sound/isa/cmi8328.c 69 */;
	bool cocci_id/* sound/isa/cmi8328.c 47 */[CMI8328_MAX];
	struct isa_driver cocci_id/* sound/isa/cmi8328.c 460 */;
	long cocci_id/* sound/isa/cmi8328.c 44 */[CMI8328_MAX];
	pm_message_t cocci_id/* sound/isa/cmi8328.c 428 */;
	int cocci_id/* sound/isa/cmi8328.c 42 */[CMI8328_MAX];
	char *cocci_id/* sound/isa/cmi8328.c 39 */[CMI8328_MAX];
	struct gameport *cocci_id/* sound/isa/cmi8328.c 383 */;
	struct snd_cmi8328 cocci_id/* sound/isa/cmi8328.c 298 */;
	int cocci_id/* sound/isa/cmi8328.c 236 */[][2];
	struct resource *cocci_id/* sound/isa/cmi8328.c 224 */;
	struct snd_cmi8328 *cocci_id/* sound/isa/cmi8328.c 222 */;
	struct snd_opl3 *cocci_id/* sound/isa/cmi8328.c 221 */;
	struct device *cocci_id/* sound/isa/cmi8328.c 218 */;
	unsigned int cocci_id/* sound/isa/cmi8328.c 218 */;
	long cocci_id/* sound/isa/cmi8328.c 207 */[];
	long cocci_id/* sound/isa/cmi8328.c 207 */;
	int cocci_id/* sound/isa/cmi8328.c 196 */[];
	int cocci_id/* sound/isa/cmi8328.c 196 */;
	struct snd_ctl_elem_id cocci_id/* sound/isa/cmi8328.c 149 */;
	struct snd_card *cocci_id/* sound/isa/cmi8328.c 148 */;
	struct snd_wss *cocci_id/* sound/isa/cmi8328.c 146 */;
	u8 cocci_id/* sound/isa/cmi8328.c 138 */[];
	void cocci_id/* sound/isa/cmi8328.c 138 */;
	u8 cocci_id/* sound/isa/cmi8328.c 114 */;
	u16 cocci_id/* sound/isa/cmi8328.c 114 */;
}
