cocci_test_suite() {
	unsigned char cocci_id/* sound/pci/via82xx_modem.c 934 */;
	unsigned long cocci_id/* sound/pci/via82xx_modem.c 933 */;
	struct snd_info_entry *cocci_id/* sound/pci/via82xx_modem.c 909 */;
	struct snd_info_buffer *cocci_id/* sound/pci/via82xx_modem.c 909 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/via82xx_modem.c 881 */;
	struct snd_ac97_template cocci_id/* sound/pci/via82xx_modem.c 879 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/via82xx_modem.c 864 */;
	struct snd_pcm *cocci_id/* sound/pci/via82xx_modem.c 832 */;
	void cocci_id/* sound/pci/via82xx_modem.c 819 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/via82xx_modem.c 807 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/via82xx_modem.c 736 */;
	const unsigned int cocci_id/* sound/pci/via82xx_modem.c 735 */[];
	struct snd_pcm_runtime *cocci_id/* sound/pci/via82xx_modem.c 733 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/via82xx_modem.c 705 */;
	u32 cocci_id/* sound/pci/via82xx_modem.c 681 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/via82xx_modem.c 639 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/via82xx_modem.c 606 */;
	bool cocci_id/* sound/pci/via82xx_modem.c 55 */;
	irqreturn_t cocci_id/* sound/pci/via82xx_modem.c 471 */;
	void *cocci_id/* sound/pci/via82xx_modem.c 471 */;
	int cocci_id/* sound/pci/via82xx_modem.c 45 */;
	char *cocci_id/* sound/pci/via82xx_modem.c 44 */;
	struct snd_ac97 *cocci_id/* sound/pci/via82xx_modem.c 423 */;
	unsigned short cocci_id/* sound/pci/via82xx_modem.c 423 */;
	u32 *cocci_id/* sound/pci/via82xx_modem.c 307 */;
	struct via82xx_modem *cocci_id/* sound/pci/via82xx_modem.c 269 */;
	unsigned int cocci_id/* sound/pci/via82xx_modem.c 266 */;
	struct pci_dev *cocci_id/* sound/pci/via82xx_modem.c 265 */;
	struct viadev *cocci_id/* sound/pci/via82xx_modem.c 264 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/via82xx_modem.c 264 */;
	const struct pci_device_id cocci_id/* sound/pci/via82xx_modem.c 249 */[];
	struct via82xx_modem {
		int irq;
		unsigned long port;
		unsigned int intr_mask;
		struct pci_dev *pci;
		struct snd_card *card;
		unsigned int num_devs;
		unsigned int playback_devno,capture_devno;
		struct viadev devs[VIA_MAX_MODEM_DEVS];
		struct snd_pcm *pcms[2];
		struct snd_ac97_bus *ac97_bus;
		struct snd_ac97 *ac97;
		unsigned int ac97_clock;
		unsigned int ac97_secondary;
		spinlock_t reg_lock;
		struct snd_info_entry *proc_entry;
	} cocci_id/* sound/pci/via82xx_modem.c 224 */;
	enum{TYPE_CARD_VIA82XX_MODEM=1,} cocci_id/* sound/pci/via82xx_modem.c 220 */;
	struct viadev {
		unsigned int reg_offset;
		unsigned long port;
		int direction;
		struct snd_pcm_substream *substream;
		int running;
		unsigned int tbl_entries;
		struct snd_dma_buffer table;
		struct snd_via_sg_table *idx_table;
		unsigned int lastpos;
		unsigned int bufsize;
		unsigned int bufsize2;
	} cocci_id/* sound/pci/via82xx_modem.c 205 */;
	struct snd_via_sg_table {
		unsigned int offset;
		unsigned int size;
	} cocci_id/* sound/pci/via82xx_modem.c 198 */;
	struct pci_driver cocci_id/* sound/pci/via82xx_modem.c 1200 */;
	const struct pci_device_id *cocci_id/* sound/pci/via82xx_modem.c 1140 */;
	struct snd_device_ops cocci_id/* sound/pci/via82xx_modem.c 1085 */;
	struct via82xx_modem **cocci_id/* sound/pci/via82xx_modem.c 1081 */;
	struct snd_card *cocci_id/* sound/pci/via82xx_modem.c 1076 */;
	struct snd_device *cocci_id/* sound/pci/via82xx_modem.c 1070 */;
	struct device *cocci_id/* sound/pci/via82xx_modem.c 1028 */;
	enum{VIA_REG_##name##_STATUS=(val), VIA_REG_##name##_CONTROL=(val) + 0x01, VIA_REG_##name##_TYPE=(val) + 0x02, VIA_REG_##name##_TABLE_PTR=(val) + 0x04, VIA_REG_##name##_CURR_PTR=(val) + 0x04, VIA_REG_##name##_STOP_IDX=(val) + 0x08, VIA_REG_##name##_CURR_COUNT=(val) + 0x0c,} cocci_id/* sound/pci/via82xx_modem.c 101 */;
}
