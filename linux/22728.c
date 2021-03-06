cocci_test_suite() {
	const char *cocci_id/* sound/isa/sscape.c 938 */;
	struct resource *cocci_id/* sound/isa/sscape.c 933 */;
	unsigned long cocci_id/* sound/isa/sscape.c 867 */;
	struct snd_wss *cocci_id/* sound/isa/sscape.c 840 */;
	struct soundscape *cocci_id/* sound/isa/sscape.c 839 */;
	struct snd_card *cocci_id/* sound/isa/sscape.c 836 */;
	int cocci_id/* sound/isa/sscape.c 836 */;
	struct snd_mpu401 *cocci_id/* sound/isa/sscape.c 818 */;
	struct snd_rawmidi *cocci_id/* sound/isa/sscape.c 812 */;
	const struct pnp_card_device_id cocci_id/* sound/isa/sscape.c 77 */[];
	bool cocci_id/* sound/isa/sscape.c 70 */;
	long cocci_id/* sound/isa/sscape.c 697 */;
	const int cocci_id/* sound/isa/sscape.c 676 */[];
	const struct snd_kcontrol_new cocci_id/* sound/isa/sscape.c 661 */;
	struct snd_ctl_elem_value *cocci_id/* sound/isa/sscape.c 603 */;
	struct snd_kcontrol *cocci_id/* sound/isa/sscape.c 602 */;
	struct snd_ctl_elem_info *cocci_id/* sound/isa/sscape.c 593 */;
	char cocci_id/* sound/isa/sscape.c 568 */[14];
	const struct firmware *cocci_id/* sound/isa/sscape.c 529 */;
	bool cocci_id/* sound/isa/sscape.c 44 */[SNDRV_CARDS];
	struct snd_dma_buffer cocci_id/* sound/isa/sscape.c 429 */;
	size_t cocci_id/* sound/isa/sscape.c 426 */;
	const unsigned char *cocci_id/* sound/isa/sscape.c 425 */;
	int cocci_id/* sound/isa/sscape.c 42 */[SNDRV_CARDS];
	long cocci_id/* sound/isa/sscape.c 38 */[SNDRV_CARDS];
	char *cocci_id/* sound/isa/sscape.c 37 */[SNDRV_CARDS];
	unsigned char cocci_id/* sound/isa/sscape.c 325 */;
	unsigned cocci_id/* sound/isa/sscape.c 323 */;
	void cocci_id/* sound/isa/sscape.c 323 */;
	const struct snd_mpu401 *cocci_id/* sound/isa/sscape.c 313 */;
	enum GA_REG cocci_id/* sound/isa/sscape.c 214 */;
	struct snd_dma_buffer *cocci_id/* sound/isa/sscape.c 177 */;
	void __exit cocci_id/* sound/isa/sscape.c 1333 */;
	int __init cocci_id/* sound/isa/sscape.c 1314 */;
	struct soundscape {
		spinlock_t lock;
		unsigned io_base;
		int ic_type;
		enum card_type type;
		struct resource *io_res;
		struct resource *wss_res;
		struct snd_wss *chip;
		unsigned char midi_vol;
	} cocci_id/* sound/isa/sscape.c 131 */;
	struct pnp_card_driver cocci_id/* sound/isa/sscape.c 1304 */;
	enum card_type{MEDIA_FX, SSCAPE, SSCAPE_PNP, SSCAPE_VIVO,} cocci_id/* sound/isa/sscape.c 124 */;
	struct pnp_dev *cocci_id/* sound/isa/sscape.c 1217 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/sscape.c 1214 */;
	struct pnp_card_link *cocci_id/* sound/isa/sscape.c 1213 */;
	struct isa_driver cocci_id/* sound/isa/sscape.c 1194 */;
	struct soundscape cocci_id/* sound/isa/sscape.c 1160 */;
	struct device *cocci_id/* sound/isa/sscape.c 1133 */;
	unsigned int cocci_id/* sound/isa/sscape.c 1133 */;
	enum GA_REG{GA_INTSTAT_REG=0, GA_INTENA_REG, GA_DMAA_REG, GA_DMAB_REG, GA_INTCFG_REG, GA_DMACFG_REG, GA_CDCFG_REG, GA_SMCFGA_REG, GA_SMCFGB_REG, GA_HMCTL_REG,} cocci_id/* sound/isa/sscape.c 108 */;
}
