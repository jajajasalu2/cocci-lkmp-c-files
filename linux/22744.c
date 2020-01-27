cocci_test_suite() {
	long cocci_id/* sound/isa/cmi8330.c 84 */;
	bool cocci_id/* sound/isa/cmi8330.c 77 */;
	void __exit cocci_id/* sound/isa/cmi8330.c 753 */;
	void cocci_id/* sound/isa/cmi8330.c 753 */;
	int cocci_id/* sound/isa/cmi8330.c 736 */;
	int __init cocci_id/* sound/isa/cmi8330.c 734 */;
	struct pnp_card_driver cocci_id/* sound/isa/cmi8330.c 721 */;
	long cocci_id/* sound/isa/cmi8330.c 69 */[SNDRV_CARDS];
	struct isa_driver cocci_id/* sound/isa/cmi8330.c 657 */;
	pm_message_t cocci_id/* sound/isa/cmi8330.c 644 */;
	unsigned int cocci_id/* sound/isa/cmi8330.c 603 */;
	bool cocci_id/* sound/isa/cmi8330.c 58 */[SNDRV_CARDS];
	char *cocci_id/* sound/isa/cmi8330.c 57 */[SNDRV_CARDS];
	int cocci_id/* sound/isa/cmi8330.c 56 */[SNDRV_CARDS];
	struct snd_opl3 *cocci_id/* sound/isa/cmi8330.c 525 */;
	struct snd_cmi8330 cocci_id/* sound/isa/cmi8330.c 510 */;
	struct snd_card *cocci_id/* sound/isa/cmi8330.c 505 */;
	struct snd_card **cocci_id/* sound/isa/cmi8330.c 503 */;
	struct device *cocci_id/* sound/isa/cmi8330.c 502 */;
	snd_pcm_open_callback_t cocci_id/* sound/isa/cmi8330.c 431 */[2];
	const struct snd_pcm_ops *cocci_id/* sound/isa/cmi8330.c 429 */;
	struct snd_pcm *cocci_id/* sound/isa/cmi8330.c 428 */;
	struct snd_cmi8330 *cocci_id/* sound/isa/cmi8330.c 419 */;
	struct snd_pcm_substream *cocci_id/* sound/isa/cmi8330.c 417 */;
	struct pnp_dev *cocci_id/* sound/isa/cmi8330.c 322 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/cmi8330.c 320 */;
	struct pnp_card_link *cocci_id/* sound/isa/cmi8330.c 319 */;
	unsigned long cocci_id/* sound/isa/cmi8330.c 273 */;
	struct snd_sb *cocci_id/* sound/isa/cmi8330.c 270 */;
	unsigned char cocci_id/* sound/isa/cmi8330.c 256 */[][2];
	struct sbmix_elem cocci_id/* sound/isa/cmi8330.c 238 */[];
	struct snd_kcontrol_new cocci_id/* sound/isa/cmi8330.c 182 */[];
	const struct pnp_card_device_id cocci_id/* sound/isa/cmi8330.c 171 */[];
	struct snd_cmi8330 {
#ifdef CONFIG_PNP
		struct pnp_dev *cap;
		struct pnp_dev *play;
		struct pnp_dev *mpu;
#endif
		struct snd_card *card;
		struct snd_wss *wss;
		struct snd_sb *sb;
		struct snd_pcm *pcm;
		struct snd_cmi8330_stream {
			struct snd_pcm_ops ops;
			snd_pcm_open_callback_t open;
			void *private_data;
		} streams[2];
		enum card_type type;
	} cocci_id/* sound/isa/cmi8330.c 149 */;
	enum card_type{CMI8330, CMI8329,} cocci_id/* sound/isa/cmi8330.c 144 */;
	int (*cocci_id/* sound/isa/cmi8330.c 142 */)(struct snd_pcm_substream *);
	unsigned char cocci_id/* sound/isa/cmi8330.c 123 */[((CMI8330_CDINGAIN) - 16) + 1];
}
