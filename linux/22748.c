cocci_test_suite() {
	struct snd_miro {
		unsigned short hardware;
		unsigned char password;
		char name[7];
		struct resource *res_mc_base;
		struct resource *res_aci_port;
		unsigned long mc_base;
		unsigned long mc_base_size;
		unsigned long pwd_reg;
		spinlock_t lock;
		struct snd_pcm *pcm;
		long wss_base;
		int irq;
		int dma1;
		int dma2;
		long mpu_port;
		int mpu_irq;
		struct snd_miro_aci *aci;
	} cocci_id/* sound/isa/opti9xx/miro.c 94 */;
	struct snd_info_buffer *cocci_id/* sound/isa/opti9xx/miro.c 880 */;
	struct snd_info_entry *cocci_id/* sound/isa/opti9xx/miro.c 879 */;
	unsigned short cocci_id/* sound/isa/opti9xx/miro.c 765 */;
	unsigned char cocci_id/* sound/isa/opti9xx/miro.c 640 */[][2];
	struct snd_kcontrol_new cocci_id/* sound/isa/opti9xx/miro.c 620 */[];
	bool cocci_id/* sound/isa/opti9xx/miro.c 52 */;
	char *cocci_id/* sound/isa/opti9xx/miro.c 41 */;
	struct snd_ctl_elem_info *cocci_id/* sound/isa/opti9xx/miro.c 401 */;
	struct snd_ctl_elem_value *cocci_id/* sound/isa/opti9xx/miro.c 362 */;
	struct snd_kcontrol *cocci_id/* sound/isa/opti9xx/miro.c 361 */;
	int cocci_id/* sound/isa/opti9xx/miro.c 210 */[];
	void __exit cocci_id/* sound/isa/opti9xx/miro.c 1638 */;
	void cocci_id/* sound/isa/opti9xx/miro.c 1638 */;
	int __init cocci_id/* sound/isa/opti9xx/miro.c 1627 */;
	struct pnp_card_driver cocci_id/* sound/isa/opti9xx/miro.c 1618 */;
	unsigned char cocci_id/* sound/isa/opti9xx/miro.c 151 */;
	struct pnp_dev *cocci_id/* sound/isa/opti9xx/miro.c 1505 */;
	const struct pnp_card_device_id *cocci_id/* sound/isa/opti9xx/miro.c 1503 */;
	struct pnp_card_link *cocci_id/* sound/isa/opti9xx/miro.c 1502 */;
	long cocci_id/* sound/isa/opti9xx/miro.c 150 */;
	struct isa_driver cocci_id/* sound/isa/opti9xx/miro.c 1489 */;
	struct snd_miro_aci *cocci_id/* sound/isa/opti9xx/miro.c 148 */;
	int cocci_id/* sound/isa/opti9xx/miro.c 148 */;
	struct snd_miro cocci_id/* sound/isa/opti9xx/miro.c 1403 */;
	int cocci_id/* sound/isa/opti9xx/miro.c 1395 */[][2];
	long cocci_id/* sound/isa/opti9xx/miro.c 1390 */[];
	struct device *cocci_id/* sound/isa/opti9xx/miro.c 1377 */;
	unsigned int cocci_id/* sound/isa/opti9xx/miro.c 1377 */;
	struct snd_opl4 *cocci_id/* sound/isa/opti9xx/miro.c 1362 */;
	struct snd_opl3 *cocci_id/* sound/isa/opti9xx/miro.c 1361 */;
	const struct pnp_card_device_id cocci_id/* sound/isa/opti9xx/miro.c 133 */[];
	struct snd_rawmidi *cocci_id/* sound/isa/opti9xx/miro.c 1262 */;
	struct snd_wss *cocci_id/* sound/isa/opti9xx/miro.c 1261 */;
	char *cocci_id/* sound/isa/opti9xx/miro.c 122 */[];
	struct snd_miro_aci cocci_id/* sound/isa/opti9xx/miro.c 120 */;
	struct snd_miro *cocci_id/* sound/isa/opti9xx/miro.c 1193 */;
	struct snd_card *cocci_id/* sound/isa/opti9xx/miro.c 1192 */;
	unsigned long cocci_id/* sound/isa/opti9xx/miro.c 1001 */;
}
