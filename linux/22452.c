cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* sound/pci/via82xx.c 995 */;
	bool cocci_id/* sound/pci/via82xx.c 99 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/via82xx.c 918 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/via82xx.c 825 */;
	char *cocci_id/* sound/pci/via82xx.c 72 */;
	int cocci_id/* sound/pci/via82xx.c 71 */;
	long cocci_id/* sound/pci/via82xx.c 67 */;
	irqreturn_t cocci_id/* sound/pci/via82xx.c 616 */;
	void *cocci_id/* sound/pci/via82xx.c 616 */;
	struct snd_ac97 *cocci_id/* sound/pci/via82xx.c 567 */;
	unsigned short cocci_id/* sound/pci/via82xx.c 567 */;
	u32 *cocci_id/* sound/pci/via82xx.c 454 */;
	struct via82xx *cocci_id/* sound/pci/via82xx.c 416 */;
	unsigned int cocci_id/* sound/pci/via82xx.c 413 */;
	struct pci_dev *cocci_id/* sound/pci/via82xx.c 412 */;
	struct viadev *cocci_id/* sound/pci/via82xx.c 411 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/via82xx.c 411 */;
	const struct pci_device_id cocci_id/* sound/pci/via82xx.c 393 */[];
	struct via82xx {
		int irq;
		unsigned long port;
		struct resource *mpu_res;
		int chip_type;
		unsigned char revision;
		unsigned char old_legacy;
		unsigned char old_legacy_cfg;
#ifdef CONFIG_PM_SLEEP
		unsigned char legacy_saved;
		unsigned char legacy_cfg_saved;
		unsigned char spdif_ctrl_saved;
		unsigned char capture_src_saved[2];
		unsigned int mpu_port_saved;
#endif
		unsigned char playback_volume[4][2];
		unsigned char playback_volume_c[2];
		unsigned int intr_mask;
		struct pci_dev *pci;
		struct snd_card *card;
		unsigned int num_devs;
		unsigned int playback_devno,multi_devno,capture_devno;
		struct viadev devs[VIA_MAX_DEVS];
		struct via_rate_lock rates[2];
		unsigned int dxs_fixed:1;
		unsigned int no_vra:1;
		unsigned int dxs_src:1;
		unsigned int spdif_on:1;
		struct snd_pcm *pcms[2];
		struct snd_rawmidi *rmidi;
		struct snd_kcontrol *dxs_controls[4];
		struct snd_ac97_bus *ac97_bus;
		struct snd_ac97 *ac97;
		unsigned int ac97_clock;
		unsigned int ac97_secondary;
		spinlock_t reg_lock;
		struct snd_info_entry *proc_entry;
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
	} cocci_id/* sound/pci/via82xx.c 341 */;
	struct via_rate_lock {
		spinlock_t lock;
		int rate;
		int used;
	} cocci_id/* sound/pci/via82xx.c 335 */;
	enum{TYPE_VIA686, TYPE_VIA8233, TYPE_VIA8233A,} cocci_id/* sound/pci/via82xx.c 331 */;
	enum{TYPE_CARD_VIA686=1, TYPE_CARD_VIA8233,} cocci_id/* sound/pci/via82xx.c 330 */;
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
		unsigned int fragsize;
		unsigned int bufsize;
		unsigned int bufsize2;
		int hwptr_done;
		int in_interrupt;
		int shadow_shift;
	} cocci_id/* sound/pci/via82xx.c 310 */;
	struct snd_via_sg_table {
		unsigned int offset;
		unsigned int size;
	} cocci_id/* sound/pci/via82xx.c 302 */;
	struct pci_driver cocci_id/* sound/pci/via82xx.c 2617 */;
	const struct pci_device_id *cocci_id/* sound/pci/via82xx.c 2505 */;
	const struct snd_pci_quirk *cocci_id/* sound/pci/via82xx.c 2481 */;
	struct snd_pci_quirk cocci_id/* sound/pci/via82xx.c 2435 */[];
	struct via823x_info cocci_id/* sound/pci/via82xx.c 2421 */[];
	struct via823x_info {
		int revision;
		char *name;
		int type;
	} cocci_id/* sound/pci/via82xx.c 2416 */;
	struct snd_device_ops cocci_id/* sound/pci/via82xx.c 2350 */;
	struct via82xx **cocci_id/* sound/pci/via82xx.c 2346 */;
	struct snd_card *cocci_id/* sound/pci/via82xx.c 2341 */;
	struct snd_device *cocci_id/* sound/pci/via82xx.c 2335 */;
	struct device *cocci_id/* sound/pci/via82xx.c 2275 */;
	struct snd_info_buffer *cocci_id/* sound/pci/via82xx.c 2115 */;
	struct snd_info_entry *cocci_id/* sound/pci/via82xx.c 2114 */;
	unsigned char cocci_id/* sound/pci/via82xx.c 2037 */;
	struct snd_ctl_elem_id cocci_id/* sound/pci/via82xx.c 1998 */;
	struct resource *cocci_id/* sound/pci/via82xx.c 1919 */;
	struct gameport *cocci_id/* sound/pci/via82xx.c 1918 */;
	unsigned char *cocci_id/* sound/pci/via82xx.c 1916 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/via82xx.c 1885 */;
	struct snd_ac97_template cocci_id/* sound/pci/via82xx.c 1883 */;
	const char *cocci_id/* sound/pci/via82xx.c 1881 */;
	const struct ac97_quirk cocci_id/* sound/pci/via82xx.c 1798 */[];
	struct snd_ac97_bus *cocci_id/* sound/pci/via82xx.c 1786 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/via82xx.c 1669 */;
	enum{VIA_REG_##name##_STATUS=(val), VIA_REG_##name##_CONTROL=(val) + 0x01, VIA_REG_##name##_TYPE=(val) + 0x02, VIA_REG_##name##_TABLE_PTR=(val) + 0x04, VIA_REG_##name##_CURR_PTR=(val) + 0x04, VIA_REG_##name##_STOP_IDX=(val) + 0x08, VIA_REG_##name##_CURR_COUNT=(val) + 0x0c,} cocci_id/* sound/pci/via82xx.c 165 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/via82xx.c 1629 */;
	u8 cocci_id/* sound/pci/via82xx.c 1616 */;
	unsigned long cocci_id/* sound/pci/via82xx.c 1606 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/via82xx.c 1603 */;
	struct snd_kcontrol *cocci_id/* sound/pci/via82xx.c 1602 */;
	const char *const cocci_id/* sound/pci/via82xx.c 1596 */[2];
	struct snd_ctl_elem_info *cocci_id/* sound/pci/via82xx.c 1591 */;
	struct snd_pcm *cocci_id/* sound/pci/via82xx.c 1560 */;
	struct snd_pcm_chmap *cocci_id/* sound/pci/via82xx.c 1432 */;
	void cocci_id/* sound/pci/via82xx.c 1417 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/via82xx.c 1369 */;
	struct via_rate_lock *cocci_id/* sound/pci/via82xx.c 1314 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/via82xx.c 1280 */;
	const unsigned int cocci_id/* sound/pci/via82xx.c 1277 */[];
	const struct snd_pcm_hardware cocci_id/* sound/pci/via82xx.c 1141 */;
	u32 cocci_id/* sound/pci/via82xx.c 1032 */;
}