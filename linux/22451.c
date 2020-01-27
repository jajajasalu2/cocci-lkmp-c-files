cocci_test_suite() {
	struct snd_ctl_elem_info *cocci_id/* sound/pci/cs4281.c 991 */;
	struct snd_pcm *cocci_id/* sound/pci/cs4281.c 962 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/cs4281.c 949 */;
	struct cs4281_dma *cocci_id/* sound/pci/cs4281.c 932 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/cs4281.c 930 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/cs4281.c 906 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/cs4281.c 859 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/cs4281.c 818 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/cs4281.c 784 */;
	unsigned int *cocci_id/* sound/pci/cs4281.c 695 */;
	volatile int cocci_id/* sound/pci/cs4281.c 564 */;
	volatile struct snd_ac97 *cocci_id/* sound/pci/cs4281.c 564 */;
	struct snd_ac97 *cocci_id/* sound/pci/cs4281.c 556 */;
	unsigned short cocci_id/* sound/pci/cs4281.c 556 */;
	void cocci_id/* sound/pci/cs4281.c 510 */;
	const struct pci_device_id cocci_id/* sound/pci/cs4281.c 482 */[];
	irqreturn_t cocci_id/* sound/pci/cs4281.c 480 */(int irq,
							 void *dev_id);
	struct cs4281 {
		int irq;
		void __iomem *ba0;
		void __iomem *ba1;
		unsigned long ba0_addr;
		unsigned long ba1_addr;
		int dual_codec;
		struct snd_ac97_bus *ac97_bus;
		struct snd_ac97 *ac97;
		struct snd_ac97 *ac97_secondary;
		struct pci_dev *pci;
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_rawmidi *rmidi;
		struct snd_rawmidi_substream *midi_input;
		struct snd_rawmidi_substream *midi_output;
		struct cs4281_dma dma[4];
		unsigned char src_left_play_slot;
		unsigned char src_right_play_slot;
		unsigned char src_left_rec_slot;
		unsigned char src_right_rec_slot;
		unsigned int spurious_dhtc_irq;
		unsigned int spurious_dtc_irq;
		spinlock_t reg_lock;
		unsigned int midcr;
		unsigned int uartm;
		struct gameport *gameport;
#ifdef CONFIG_PM_SLEEP
		u32 suspend_regs[SUSPEND_REGISTERS];
#endif
	} cocci_id/* sound/pci/cs4281.c 437 */;
	struct cs4281_dma {
		struct snd_pcm_substream *substream;
		unsigned int regDBA;
		unsigned int regDCA;
		unsigned int regDBC;
		unsigned int regDCC;
		unsigned int regDMR;
		unsigned int regDCR;
		unsigned int regHDSR;
		unsigned int regFCR;
		unsigned int regFSIC;
		unsigned int valDMR;
		unsigned int valDCR;
		unsigned int valFCR;
		unsigned int fifo_offset;
		unsigned char left_slot;
		unsigned char right_slot;
		int frag;
	} cocci_id/* sound/pci/cs4281.c 415 */;
	bool cocci_id/* sound/pci/cs4281.c 39 */;
	bool cocci_id/* sound/pci/cs4281.c 33 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/cs4281.c 31 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/cs4281.c 30 */[SNDRV_CARDS];
	struct pci_driver cocci_id/* sound/pci/cs4281.c 2057 */;
	u32 cocci_id/* sound/pci/cs4281.c 2027 */;
	unsigned int cocci_id/* sound/pci/cs4281.c 2026 */;
	struct cs4281 *cocci_id/* sound/pci/cs4281.c 2025 */;
	struct snd_card *cocci_id/* sound/pci/cs4281.c 2024 */;
	struct device *cocci_id/* sound/pci/cs4281.c 2022 */;
	int cocci_id/* sound/pci/cs4281.c 2022 */;
	int cocci_id/* sound/pci/cs4281.c 1963 */[SUSPEND_REGISTERS];
	const struct pci_device_id *cocci_id/* sound/pci/cs4281.c 1886 */;
	void __iomem *cocci_id/* sound/pci/cs4281.c 1867 */;
	struct snd_opl3 *cocci_id/* sound/pci/cs4281.c 1862 */;
	irqreturn_t cocci_id/* sound/pci/cs4281.c 1788 */;
	struct snd_rawmidi *cocci_id/* sound/pci/cs4281.c 1770 */;
	const struct snd_rawmidi_ops cocci_id/* sound/pci/cs4281.c 1761 */;
	struct snd_rawmidi_substream *cocci_id/* sound/pci/cs4281.c 1653 */;
	unsigned long cocci_id/* sound/pci/cs4281.c 1394 */;
	struct snd_device_ops cocci_id/* sound/pci/cs4281.c 1328 */;
	struct cs4281 **cocci_id/* sound/pci/cs4281.c 1322 */;
	struct pci_dev *cocci_id/* sound/pci/cs4281.c 1321 */;
	int cocci_id/* sound/pci/cs4281.c 1318 */(struct cs4281 *chip);
	struct snd_device *cocci_id/* sound/pci/cs4281.c 1312 */;
	struct gameport *cocci_id/* sound/pci/cs4281.c 1247 */;
	unsigned cocci_id/* sound/pci/cs4281.c 1206 */;
	int *cocci_id/* sound/pci/cs4281.c 1203 */;
	unsigned char cocci_id/* sound/pci/cs4281.c 1192 */;
	struct snd_info_entry_ops cocci_id/* sound/pci/cs4281.c 1150 */;
	loff_t cocci_id/* sound/pci/cs4281.c 1129 */;
	size_t cocci_id/* sound/pci/cs4281.c 1129 */;
	struct file *cocci_id/* sound/pci/cs4281.c 1128 */;
	char __user *cocci_id/* sound/pci/cs4281.c 1128 */;
	void *cocci_id/* sound/pci/cs4281.c 1127 */;
	struct snd_info_entry *cocci_id/* sound/pci/cs4281.c 1126 */;
	ssize_t cocci_id/* sound/pci/cs4281.c 1126 */;
	struct snd_info_buffer *cocci_id/* sound/pci/cs4281.c 1117 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/cs4281.c 1085 */;
	struct snd_ac97_template cocci_id/* sound/pci/cs4281.c 1083 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/cs4281.c 1065 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/cs4281.c 1043 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/cs4281.c 1001 */;
	struct snd_kcontrol *cocci_id/* sound/pci/cs4281.c 1000 */;
}