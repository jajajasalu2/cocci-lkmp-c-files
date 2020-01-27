cocci_test_suite() {
	void __exit cocci_id/* sound/isa/gus/interwave.c 911 */;
	void cocci_id/* sound/isa/gus/interwave.c 911 */;
	int cocci_id/* sound/isa/gus/interwave.c 894 */;
	int __init cocci_id/* sound/isa/gus/interwave.c 892 */;
	struct pnp_card_driver cocci_id/* sound/isa/gus/interwave.c 881 */;
	struct isa_driver cocci_id/* sound/isa/gus/interwave.c 833 */;
	long cocci_id/* sound/isa/gus/interwave.c 815 */[];
	long cocci_id/* sound/isa/gus/interwave.c 80 */;
	int cocci_id/* sound/isa/gus/interwave.c 790 */[];
	bool cocci_id/* sound/isa/gus/interwave.c 74 */;
	char *cocci_id/* sound/isa/gus/interwave.c 635 */;
	struct snd_interwave cocci_id/* sound/isa/gus/interwave.c 615 */;
	struct snd_interwave *cocci_id/* sound/isa/gus/interwave.c 611 */;
	struct snd_card *cocci_id/* sound/isa/gus/interwave.c 610 */;
	struct snd_card **cocci_id/* sound/isa/gus/interwave.c 608 */;
	struct device *cocci_id/* sound/isa/gus/interwave.c 607 */;
	void *cocci_id/* sound/isa/gus/interwave.c 604 */;
	unsigned long long cocci_id/* sound/isa/gus/interwave.c 574 */;
	struct pnp_dev *cocci_id/* sound/isa/gus/interwave.c 543 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/gus/interwave.c 541 */;
	struct pnp_card_link *cocci_id/* sound/isa/gus/interwave.c 540 */;
	int cocci_id/* sound/isa/gus/interwave.c 52 */[SNDRV_CARDS];
	struct snd_ctl_elem_id cocci_id/* sound/isa/gus/interwave.c 492 */;
	struct snd_wss *cocci_id/* sound/isa/gus/interwave.c 489 */;
	struct snd_kcontrol_new cocci_id/* sound/isa/gus/interwave.c 478 */[];
	long cocci_id/* sound/isa/gus/interwave.c 47 */[SNDRV_CARDS];
	struct rom_hdr cocci_id/* sound/isa/gus/interwave.c 433 */;
	bool cocci_id/* sound/isa/gus/interwave.c 43 */[SNDRV_CARDS];
	char *cocci_id/* sound/isa/gus/interwave.c 42 */[SNDRV_CARDS];
	unsigned char cocci_id/* sound/isa/gus/interwave.c 378 */[8];
	int cocci_id/* sound/isa/gus/interwave.c 377 */[4];
	unsigned int cocci_id/* sound/isa/gus/interwave.c 367 */[13];
	struct rom_hdr {
		unsigned char iwave[8];
		unsigned char rom_hdr_revision;
		unsigned char series_number;
		unsigned char series_name[16];
		unsigned char date[10];
		unsigned short vendor_revision_major;
		unsigned short vendor_revision_minor;
		unsigned int rom_size;
		unsigned char copyright[128];
		unsigned char vendor_name[64];
		unsigned char rom_description[128];
		unsigned char pad[147];
		unsigned char csum;
	} cocci_id/* sound/isa/gus/interwave.c 349 */;
	unsigned char cocci_id/* sound/isa/gus/interwave.c 318 */;
	unsigned int cocci_id/* sound/isa/gus/interwave.c 316 */;
	struct snd_gus_card *cocci_id/* sound/isa/gus/interwave.c 314 */;
	int *cocci_id/* sound/isa/gus/interwave.c 314 */;
	irqreturn_t cocci_id/* sound/isa/gus/interwave.c 284 */;
	unsigned long cocci_id/* sound/isa/gus/interwave.c 245 */;
	struct snd_i2c_bus **cocci_id/* sound/isa/gus/interwave.c 241 */;
	char cocci_id/* sound/isa/gus/interwave.c 202 */[32];
	struct snd_i2c_bus *cocci_id/* sound/isa/gus/interwave.c 200 */;
	struct snd_i2c_bit_ops cocci_id/* sound/isa/gus/interwave.c 189 */;
	const struct pnp_card_device_id cocci_id/* sound/isa/gus/interwave.c 124 */[];
	struct snd_interwave {
		int irq;
		struct snd_card *card;
		struct snd_gus_card *gus;
		struct snd_wss *wss;
#ifdef SNDRV_STB
		struct resource *i2c_res;
#endif
		unsigned short gus_status_reg;
		unsigned short pcm_status_reg;
#ifdef CONFIG_PNP
		struct pnp_dev *dev;
#ifdef SNDRV_STB
		struct pnp_dev *devtc;
#endif
#endif
	} cocci_id/* sound/isa/gus/interwave.c 101 */;
}
