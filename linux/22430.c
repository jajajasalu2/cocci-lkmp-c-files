cocci_test_suite() {
	const unsigned char cocci_id/* sound/pci/ice1712/quartet.c 970 */[];
	struct snd_pcm_runtime *cocci_id/* sound/pci/ice1712/quartet.c 951 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/ice1712/quartet.c 948 */;
	struct ak4113 *cocci_id/* sound/pci/ice1712/quartet.c 928 */;
	unsigned char cocci_id/* sound/pci/ice1712/quartet.c 928 */;
	char *const *cocci_id/* sound/pci/ice1712/quartet.c 780 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ice1712/quartet.c 780 */;
	struct snd_card *cocci_id/* sound/pci/ice1712/quartet.c 779 */;
	void cocci_id/* sound/pci/ice1712/quartet.c 779 */;
	struct snd_ctl_elem_id cocci_id/* sound/pci/ice1712/quartet.c 772 */;
	const char *cocci_id/* sound/pci/ice1712/quartet.c 770 */;
	char *cocci_id/* sound/pci/ice1712/quartet.c 760 */[];
	struct snd_kcontrol_new cocci_id/* sound/pci/ice1712/quartet.c 723 */[];
	struct qtet_kcontrol_private cocci_id/* sound/pci/ice1712/quartet.c 676 */;
	struct qtet_kcontrol_private cocci_id/* sound/pci/ice1712/quartet.c 660 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ice1712/quartet.c 540 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/ice1712/quartet.c 532 */;
	const char *const cocci_id/* sound/pci/ice1712/quartet.c 51 */[3];
	char cocci_id/* sound/pci/ice1712/quartet.c 478 */[36];
	struct snd_info_buffer *cocci_id/* sound/pci/ice1712/quartet.c 475 */;
	struct snd_info_entry *cocci_id/* sound/pci/ice1712/quartet.c 474 */;
	struct qtet_spec *cocci_id/* sound/pci/ice1712/quartet.c 449 */;
	struct snd_ice1712 *cocci_id/* sound/pci/ice1712/quartet.c 447 */;
	unsigned int cocci_id/* sound/pci/ice1712/quartet.c 447 */;
	enum{IN12_SEL=0, IN34_SEL, AIN34_SEL, COAX_OUT, IN12_MON12, IN12_MON34, IN34_MON12, IN34_MON34, OUT12_MON34, OUT34_MON12,} cocci_id/* sound/pci/ice1712/quartet.c 38 */;
	const struct snd_akm4xxx cocci_id/* sound/pci/ice1712/quartet.c 375 */;
	const struct snd_akm4xxx_adc_channel cocci_id/* sound/pci/ice1712/quartet.c 370 */[];
	const struct snd_akm4xxx_dac_channel cocci_id/* sound/pci/ice1712/quartet.c 365 */[];
	struct snd_akm4xxx *cocci_id/* sound/pci/ice1712/quartet.c 337 */;
	struct qtet_kcontrol_private {
		unsigned int bit;
		void (*set_register)(struct snd_ice1712 *ice,
				     unsigned int val);
		unsigned int (*get_register)(struct snd_ice1712 *ice);
		const char *const texts[2];
	} cocci_id/* sound/pci/ice1712/quartet.c 31 */;
	void *cocci_id/* sound/pci/ice1712/quartet.c 243 */;
	struct qtet_spec {
		struct ak4113 *ak4113;
		unsigned int scr;
		unsigned int mcr;
		unsigned int cpld;
	} cocci_id/* sound/pci/ice1712/quartet.c 24 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/ice1712/quartet.c 230 */;
	const unsigned int cocci_id/* sound/pci/ice1712/quartet.c 225 */[];
	char *cocci_id/* sound/pci/ice1712/quartet.c 196 */;
	int cocci_id/* sound/pci/ice1712/quartet.c 196 */;
	struct snd_ice1712_card_info cocci_id/* sound/pci/ice1712/quartet.c 1077 */[];
	unsigned char cocci_id/* sound/pci/ice1712/quartet.c 1056 */[];
	struct snd_akm4xxx cocci_id/* sound/pci/ice1712/quartet.c 1027 */;
}
