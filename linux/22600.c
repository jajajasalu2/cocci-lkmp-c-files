cocci_test_suite() {
	struct snd_pcm_substream *cocci_id/* sound/pci/es1938.c 970 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/es1938.c 888 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/es1938.c 870 */;
	void *cocci_id/* sound/pci/es1938.c 850 */;
	unsigned char __user *cocci_id/* sound/pci/es1938.c 842 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/es1938.c 830 */;
	void __user *cocci_id/* sound/pci/es1938.c 828 */;
	unsigned int cocci_id/* sound/pci/es1938.c 768 */;
	size_t cocci_id/* sound/pci/es1938.c 758 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/es1938.c 755 */;
	bool cocci_id/* sound/pci/es1938.c 72 */;
	bool cocci_id/* sound/pci/es1938.c 66 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/es1938.c 65 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/es1938.c 64 */[SNDRV_CARDS];
	void cocci_id/* sound/pci/es1938.c 495 */;
	const struct snd_pcm_hw_constraint_ratnums cocci_id/* sound/pci/es1938.c 439 */;
	const struct snd_ratnum cocci_id/* sound/pci/es1938.c 424 */[2];
	unsigned long cocci_id/* sound/pci/es1938.c 358 */;
	unsigned char cocci_id/* sound/pci/es1938.c 355 */;
	const struct pci_device_id cocci_id/* sound/pci/es1938.c 230 */[];
	irqreturn_t cocci_id/* sound/pci/es1938.c 228 */(int irq,
							 void *dev_id);
	struct pci_driver cocci_id/* sound/pci/es1938.c 1858 */;
	struct es1938 {
		int irq;
		unsigned long io_port;
		unsigned long sb_port;
		unsigned long vc_port;
		unsigned long mpu_port;
		unsigned long game_port;
		unsigned long ddma_port;
		unsigned char irqmask;
		unsigned char revision;
		struct snd_kcontrol *hw_volume;
		struct snd_kcontrol *hw_switch;
		struct snd_kcontrol *master_volume;
		struct snd_kcontrol *master_switch;
		struct pci_dev *pci;
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_pcm_substream *capture_substream;
		struct snd_pcm_substream *playback1_substream;
		struct snd_pcm_substream *playback2_substream;
		struct snd_rawmidi *rmidi;
		unsigned int dma1_size;
		unsigned int dma2_size;
		unsigned int dma1_start;
		unsigned int dma2_start;
		unsigned int dma1_shift;
		unsigned int dma2_shift;
		unsigned int last_capture_dmaaddr;
		unsigned int active;
		spinlock_t reg_lock;
		spinlock_t mixer_lock;
		struct snd_info_entry *proc_entry;
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
#ifdef CONFIG_PM_SLEEP
		unsigned char saved_regs[SAVED_REG_SIZE];
#endif
	} cocci_id/* sound/pci/es1938.c 181 */;
	struct snd_opl3 *cocci_id/* sound/pci/es1938.c 1772 */;
	const struct pci_device_id *cocci_id/* sound/pci/es1938.c 1767 */;
	irqreturn_t cocci_id/* sound/pci/es1938.c 1640 */;
	struct snd_device_ops cocci_id/* sound/pci/es1938.c 1575 */;
	struct es1938 **cocci_id/* sound/pci/es1938.c 1571 */;
	struct snd_device *cocci_id/* sound/pci/es1938.c 1563 */;
	struct gameport *cocci_id/* sound/pci/es1938.c 1515 */;
	unsigned char *cocci_id/* sound/pci/es1938.c 1482 */;
	struct es1938 *cocci_id/* sound/pci/es1938.c 1481 */;
	struct snd_card *cocci_id/* sound/pci/es1938.c 1480 */;
	struct pci_dev *cocci_id/* sound/pci/es1938.c 1479 */;
	struct device *cocci_id/* sound/pci/es1938.c 1477 */;
	int cocci_id/* sound/pci/es1938.c 1477 */;
	unsigned char cocci_id/* sound/pci/es1938.c 1449 */[SAVED_REG_SIZE + 1];
	struct snd_kcontrol_new cocci_id/* sound/pci/es1938.c 1336 */[];
	const  cocci_id/* sound/pci/es1938.c 1329 */(db_scale_line,
						     0,8,
						     TLV_DB_SCALE_ITEM(-3150,300,1),
						     8,15,
						     TLV_DB_SCALE_ITEM(-750,150,0));
	const  cocci_id/* sound/pci/es1938.c 1324 */(db_scale_mic,
						     0,8,
						     TLV_DB_SCALE_ITEM(-2400,300,1),
						     8,15,
						     TLV_DB_SCALE_ITEM(0,150,0));
	const  cocci_id/* sound/pci/es1938.c 1319 */(db_scale_audio2,
						     0,8,
						     TLV_DB_SCALE_ITEM(-3450,300,1),
						     8,15,
						     TLV_DB_SCALE_ITEM(-1050,150,0));
	const  cocci_id/* sound/pci/es1938.c 1314 */(db_scale_audio1,
						     0,8,
						     TLV_DB_SCALE_ITEM(-3300,300,1),
						     8,15,
						     TLV_DB_SCALE_ITEM(-900,150,0));
	const  cocci_id/* sound/pci/es1938.c 1309 */(db_scale_master,
						     0,54,
						     TLV_DB_SCALE_ITEM(-3600,50,1),
						     54,63,
						     TLV_DB_SCALE_ITEM(-900,100,0));
	struct snd_ctl_elem_value *cocci_id/* sound/pci/es1938.c 1248 */;
	struct snd_kcontrol *cocci_id/* sound/pci/es1938.c 1247 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/es1938.c 1236 */;
	const char *constcocci_id/* sound/pci/es1938.c 1050 */[8];
	struct snd_pcm *cocci_id/* sound/pci/es1938.c 1022 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/es1938.c 1007 */;
}
