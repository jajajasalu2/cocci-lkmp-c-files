cocci_test_suite() {
	int cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 969 */[][2];
	long cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 960 */[];
	struct snd_opti9xx cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 935 */;
	struct device *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 929 */;
	struct snd_card **cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 929 */;
	struct snd_opl4 *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 902 */;
	struct snd_opl3 *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 897 */;
	struct snd_hwdep *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 817 */;
	struct snd_rawmidi *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 816 */;
	struct pnp_dev *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 728 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 726 */;
	struct pnp_card_link *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 725 */;
	struct snd_opti9xx *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 700 */;
	struct snd_card *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 699 */;
	unsigned char cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 640 */;
	int cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 64 */;
	struct snd_wss *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 639 */;
	irqreturn_t cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 636 */;
	void *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 636 */;
	long cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 61 */;
	struct snd_ctl_elem_id cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 589 */;
	unsigned int cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 588 */;
	bool cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 57 */;
	struct snd_kcontrol_new cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 553 */[];
	char *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 54 */;
	unsigned long cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 236 */;
	int cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 176 */[];
	unsigned short cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 174 */;
	char *cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 166 */[];
	const struct pnp_card_device_id cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 142 */[];
	void __exit cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1184 */;
	void cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1184 */;
	int __init cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1173 */;
	struct snd_opti9xx {
		unsigned short hardware;
		unsigned char password;
		char name[7];
		unsigned long mc_base;
		struct resource *res_mc_base;
		unsigned long mc_base_size;
#ifdef OPTi93X
		unsigned long mc_indir_index;
		struct resource *res_mc_indir;
#endif
		struct snd_wss *codec;
		unsigned long pwd_reg;
		spinlock_t lock;
		long wss_base;
		int irq;
	} cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 117 */;
	struct pnp_card_driver cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1154 */;
	struct isa_driver cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1069 */;
	pm_message_t cocci_id/* sound/isa/opti9xx/opti92x-ad1848.c 1058 */;
}
