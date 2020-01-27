cocci_test_suite() {
	char cocci_id/* drivers/staging/nvec/nvec_kbd.c 89 */[];
	struct nvec_chip *cocci_id/* drivers/staging/nvec/nvec_kbd.c 88 */;
	struct input_dev *cocci_id/* drivers/staging/nvec/nvec_kbd.c 85 */;
	unsigned int cocci_id/* drivers/staging/nvec/nvec_kbd.c 85 */;
	int cocci_id/* drivers/staging/nvec/nvec_kbd.c 85 */;
	unsigned char *cocci_id/* drivers/staging/nvec/nvec_kbd.c 57 */;
	void *cocci_id/* drivers/staging/nvec/nvec_kbd.c 54 */;
	unsigned long cocci_id/* drivers/staging/nvec/nvec_kbd.c 54 */;
	struct notifier_block *cocci_id/* drivers/staging/nvec/nvec_kbd.c 53 */;
	void cocci_id/* drivers/staging/nvec/nvec_kbd.c 40 */;
	struct nvec_keys cocci_id/* drivers/staging/nvec/nvec_kbd.c 38 */;
	struct nvec_keys {
		struct input_dev *input;
		struct notifier_block notifier;
		struct nvec_chip *nvec;
		bool caps_lock;
	} cocci_id/* drivers/staging/nvec/nvec_kbd.c 31 */;
	unsigned char cocci_id/* drivers/staging/nvec/nvec_kbd.c 28 */[ARRAY_SIZE(code_tab_102us) + ARRAY_SIZE(extcode_tab_us102)];
	enum kbd_subcmds{CNFG_WAKE=3, CNFG_WAKE_KEY_REPORTING, SET_LEDS=0xed, ENABLE_KBD=0xf4, DISABLE_KBD,} cocci_id/* drivers/staging/nvec/nvec_kbd.c 20 */;
	struct platform_driver cocci_id/* drivers/staging/nvec/nvec_kbd.c 175 */;
	unsigned char cocci_id/* drivers/staging/nvec/nvec_kbd.c 132 */;
	struct platform_device *cocci_id/* drivers/staging/nvec/nvec_kbd.c 106 */;
}
