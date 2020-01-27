cocci_test_suite() {
	short *cocci_id/* sound/ppc/beep.c 96 */;
	unsigned long cocci_id/* sound/ppc/beep.c 91 */;
	unsigned int cocci_id/* sound/ppc/beep.c 86 */;
	short cocci_id/* sound/ppc/beep.c 47 */[256];
	void cocci_id/* sound/ppc/beep.c 33 */;
	void *cocci_id/* sound/ppc/beep.c 210 */;
	struct snd_kcontrol *cocci_id/* sound/ppc/beep.c 209 */;
	struct input_dev *cocci_id/* sound/ppc/beep.c 208 */;
	struct pmac_beep *cocci_id/* sound/ppc/beep.c 207 */;
	struct snd_pmac *cocci_id/* sound/ppc/beep.c 205 */;
	int cocci_id/* sound/ppc/beep.c 205 */;
	const struct snd_kcontrol_new cocci_id/* sound/ppc/beep.c 196 */;
	struct pmac_beep {
		int running;
		int volume;
		int volume_play;
		int hz;
		int nsamples;
		short *buf;
		dma_addr_t addr;
		struct input_dev *dev;
	} cocci_id/* sound/ppc/beep.c 19 */;
	struct snd_ctl_elem_value *cocci_id/* sound/ppc/beep.c 172 */;
	struct snd_ctl_elem_info *cocci_id/* sound/ppc/beep.c 162 */;
}
