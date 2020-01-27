cocci_test_suite() {
	struct snd_ctl_elem_value *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 940 */;
	const char *const cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 933 */[2];
	struct snd_ctl_elem_info *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 931 */;
	struct snd_kcontrol *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 871 */;
	unsigned int cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 871 */;
	struct oxygen *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 870 */;
	void cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 870 */;
	const char *const cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 847 */[3];
	struct xonar_wm87x6 {
		struct xonar_generic generic;
		u16 wm8776_regs[0x17];
		u16 wm8766_regs[0x10];
		struct snd_kcontrol *line_adcmux_control;
		struct snd_kcontrol *mic_adcmux_control;
		struct snd_kcontrol *lc_controls[13];
		struct snd_jack *hp_jack;
		struct xonar_hdmi hdmi;
	} cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 79 */;
	const char *const *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 567 */;
	const char *const cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 562 */[8];
	const char *const cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 542 */[11];
	const char *const cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 536 */[16];
	bool cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 474 */;
	const u8 cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 420 */[6];
	u8 cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 394 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 384 */;
	u16 cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 375 */;
	struct snd_pcm_hardware *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 347 */;
	const struct pci_device_id *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1313 */;
	struct xonar_wm87x6 cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1263 */;
	const struct oxygen_model cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1246 */;
	struct snd_info_buffer *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1219 */;
	struct xonar_wm87x6 *cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1157 */;
	int cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1155 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/oxygen/xonar_wm87x6.c 1010 */[];
}
