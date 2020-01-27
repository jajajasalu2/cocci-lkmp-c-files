cocci_test_suite() {
	long cocci_id/* sound/isa/sb/sb16.c 87 */;
	bool cocci_id/* sound/isa/sb/sb16.c 81 */;
	int cocci_id/* sound/isa/sb/sb16.c 71 */[SNDRV_CARDS];
	void __exit cocci_id/* sound/isa/sb/sb16.c 670 */;
	void cocci_id/* sound/isa/sb/sb16.c 670 */;
	int cocci_id/* sound/isa/sb/sb16.c 653 */;
	int __init cocci_id/* sound/isa/sb/sb16.c 651 */;
	long cocci_id/* sound/isa/sb/sb16.c 64 */[SNDRV_CARDS];
	struct pnp_card_driver cocci_id/* sound/isa/sb/sb16.c 633 */;
	struct isa_driver cocci_id/* sound/isa/sb/sb16.c 575 */;
	bool cocci_id/* sound/isa/sb/sb16.c 56 */[SNDRV_CARDS];
	pm_message_t cocci_id/* sound/isa/sb/sb16.c 558 */;
	char *cocci_id/* sound/isa/sb/sb16.c 55 */[SNDRV_CARDS];
	int cocci_id/* sound/isa/sb/sb16.c 512 */[];
	unsigned int cocci_id/* sound/isa/sb/sb16.c 504 */;
	unsigned long cocci_id/* sound/isa/sb/sb16.c 336 */;
	struct snd_hwdep *cocci_id/* sound/isa/sb/sb16.c 332 */;
	struct snd_opl3 *cocci_id/* sound/isa/sb/sb16.c 331 */;
	struct snd_sb *cocci_id/* sound/isa/sb/sb16.c 329 */;
	struct snd_card_sb16 cocci_id/* sound/isa/sb/sb16.c 318 */;
	struct snd_card *cocci_id/* sound/isa/sb/sb16.c 314 */;
	struct snd_card **cocci_id/* sound/isa/sb/sb16.c 312 */;
	struct device *cocci_id/* sound/isa/sb/sb16.c 311 */;
	unsigned long long cocci_id/* sound/isa/sb/sb16.c 280 */;
	struct pnp_dev *cocci_id/* sound/isa/sb/sb16.c 242 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/sb/sb16.c 240 */;
	struct pnp_card_link *cocci_id/* sound/isa/sb/sb16.c 239 */;
	struct snd_card_sb16 *cocci_id/* sound/isa/sb/sb16.c 238 */;
	const struct pnp_card_device_id cocci_id/* sound/isa/sb/sb16.c 133 */[];
	struct snd_card_sb16 {
		struct resource *fm_res;
		struct snd_sb *chip;
#ifdef CONFIG_PNP
		int dev_no;
		struct pnp_dev *dev;
#ifdef SNDRV_SBAWE_EMU8000
		struct pnp_dev *devwt;
#endif
#endif
	} cocci_id/* sound/isa/sb/sb16.c 119 */;
}
