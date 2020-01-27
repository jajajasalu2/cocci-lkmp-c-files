cocci_test_suite() {
	long cocci_id/* sound/isa/cs423x/cs4236.c 86 */;
	bool cocci_id/* sound/isa/cs423x/cs4236.c 80 */;
	int cocci_id/* sound/isa/cs423x/cs4236.c 73 */[SNDRV_CARDS];
	void __exit cocci_id/* sound/isa/cs423x/cs4236.c 698 */;
	void cocci_id/* sound/isa/cs423x/cs4236.c 698 */;
	int cocci_id/* sound/isa/cs423x/cs4236.c 678 */;
	int __init cocci_id/* sound/isa/cs423x/cs4236.c 676 */;
	long cocci_id/* sound/isa/cs423x/cs4236.c 67 */[SNDRV_CARDS];
	struct pnp_card_driver cocci_id/* sound/isa/cs423x/cs4236.c 663 */;
	bool cocci_id/* sound/isa/cs423x/cs4236.c 62 */[SNDRV_CARDS];
	char *cocci_id/* sound/isa/cs423x/cs4236.c 61 */[SNDRV_CARDS];
	struct pnp_driver cocci_id/* sound/isa/cs423x/cs4236.c 602 */;
	char cocci_id/* sound/isa/cs423x/cs4236.c 548 */[PNP_ID_LEN];
	const struct pnp_device_id *cocci_id/* sound/isa/cs423x/cs4236.c 542 */;
	struct isa_driver cocci_id/* sound/isa/cs423x/cs4236.c 526 */;
	pm_message_t cocci_id/* sound/isa/cs423x/cs4236.c 515 */;
	unsigned int cocci_id/* sound/isa/cs423x/cs4236.c 448 */;
	struct snd_opl3 *cocci_id/* sound/isa/cs423x/cs4236.c 372 */;
	struct snd_wss *cocci_id/* sound/isa/cs423x/cs4236.c 371 */;
	struct snd_card_cs4236 cocci_id/* sound/isa/cs423x/cs4236.c 360 */;
	struct snd_card **cocci_id/* sound/isa/cs423x/cs4236.c 354 */;
	struct device *cocci_id/* sound/isa/cs423x/cs4236.c 353 */;
	struct snd_card_cs4236 *cocci_id/* sound/isa/cs423x/cs4236.c 348 */;
	struct snd_card *cocci_id/* sound/isa/cs423x/cs4236.c 346 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/cs423x/cs4236.c 308 */;
	struct pnp_card_link *cocci_id/* sound/isa/cs423x/cs4236.c 307 */;
	struct pnp_dev *cocci_id/* sound/isa/cs423x/cs4236.c 293 */;
	const struct pnp_card_device_id cocci_id/* sound/isa/cs423x/cs4236.c 137 */[];
	const struct pnp_device_id cocci_id/* sound/isa/cs423x/cs4236.c 126 */[];
	struct snd_card_cs4236 {
		struct snd_wss *chip;
		struct resource *res_sb_port;
#ifdef CONFIG_PNP
		struct pnp_dev *wss;
		struct pnp_dev *ctrl;
		struct pnp_dev *mpu;
#endif
	} cocci_id/* sound/isa/cs423x/cs4236.c 111 */;
}
