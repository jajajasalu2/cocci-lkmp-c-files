cocci_test_suite() {
	struct snd_ice1712_card_info cocci_id/* sound/pci/ice1712/maya44.c 737 */[];
	unsigned char cocci_id/* sound/pci/ice1712/maya44.c 715 */[];
	struct snd_maya44 {
		struct snd_ice1712 *ice;
		struct snd_wm8776 wm[2];
		struct mutex mutex;
	} cocci_id/* sound/pci/ice1712/maya44.c 68 */;
	struct snd_maya44 *cocci_id/* sound/pci/ice1712/maya44.c 675 */;
	unsigned char cocci_id/* sound/pci/ice1712/maya44.c 665 */[2];
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/ice1712/maya44.c 655 */;
	const unsigned int cocci_id/* sound/pci/ice1712/maya44.c 650 */[];
	struct snd_wm8776 {
		unsigned char addr;
		unsigned short regs[WM8776_NUM_REGS];
		unsigned char volumes[WM_NUM_VOLS][2];
		unsigned int switch_bits;
	} cocci_id/* sound/pci/ice1712/maya44.c 61 */;
	enum{WM_SW_DAC, WM_SW_BYPASS, WM_NUM_SWITCHES,} cocci_id/* sound/pci/ice1712/maya44.c 59 */;
	void cocci_id/* sound/pci/ice1712/maya44.c 587 */;
	enum{WM_VOL_HP, WM_VOL_DAC, WM_VOL_ADC, WM_NUM_VOLS,} cocci_id/* sound/pci/ice1712/maya44.c 58 */;
	unsigned short cocci_id/* sound/pci/ice1712/maya44.c 565 */;
	unsigned char cocci_id/* sound/pci/ice1712/maya44.c 564 */;
	const unsigned short *cocci_id/* sound/pci/ice1712/maya44.c 563 */;
	const unsigned short cocci_id/* sound/pci/ice1712/maya44.c 537 */[];
	struct snd_ice1712 *cocci_id/* sound/pci/ice1712/maya44.c 517 */;
	int cocci_id/* sound/pci/ice1712/maya44.c 517 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ice1712/maya44.c 427 */[];
	const unsigned char cocci_id/* sound/pci/ice1712/maya44.c 397 */[10];
	const char *const cocci_id/* sound/pci/ice1712/maya44.c 387 */[];
	struct snd_ctl_elem_info *cocci_id/* sound/pci/ice1712/maya44.c 385 */;
	unsigned int cocci_id/* sound/pci/ice1712/maya44.c 300 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ice1712/maya44.c 297 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ice1712/maya44.c 296 */;
	struct snd_wm8776 *cocci_id/* sound/pci/ice1712/maya44.c 235 */;
	struct maya_vol_info *cocci_id/* sound/pci/ice1712/maya44.c 161 */;
	struct maya_vol_info cocci_id/* sound/pci/ice1712/maya44.c 119 */[WM_NUM_VOLS];
	struct maya_vol_info {
		unsigned int maxval;
		unsigned char regs[2];
		unsigned short mask;
		unsigned short offset;
		unsigned short mute;
		unsigned short update;
		unsigned char mux_bits[2];
	} cocci_id/* sound/pci/ice1712/maya44.c 109 */;
}
