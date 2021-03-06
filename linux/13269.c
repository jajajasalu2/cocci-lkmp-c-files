cocci_test_suite() {
	struct snd_pcm *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 887 */;
	const struct snd_pcm_ops cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 865 */;
	snd_card_saa7134_pcm_t *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 796 */;
	struct snd_pcm_runtime *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 795 */;
	struct snd_pcm_substream *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 771 */;
	struct snd_card *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 77 */[SNDRV_CARDS];
	struct snd_card_saa7134_pcm {
		struct saa7134_dev *dev;
		spinlock_t lock;
		struct snd_pcm_substream *substream;
	} cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 69 */;
	unsigned int cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 665 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 661 */;
	const struct snd_pcm_hardware cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 620 */;
	snd_pcm_uframes_t cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 589 */;
	u32 cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 500 */;
	struct snd_card_saa7134 {
		struct snd_card *card;
		spinlock_t mixer_lock;
		int mixer_volume[MIXER_ADDR_LAST + 1][2];
		int capture_source_addr;
		int capture_source[2];
		struct snd_kcontrol *capture_ctl[MIXER_ADDR_LAST + 1];
		struct pci_dev *pci;
		struct saa7134_dev *dev;
		unsigned long iobase;
		s16 irq;
		u16 mute_was_on;
		spinlock_t lock;
	} cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 47 */;
	bool cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 378 */;
	int cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 36 */[SNDRV_CARDS];
	char *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 35 */[SNDRV_CARDS];
	struct saa7134_dmasound *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 321 */;
	struct page *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 258 */;
	unsigned long cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 197 */;
	irqreturn_t cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 192 */;
	void cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1245 */;
	struct saa7134_dev cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1226 */;
	struct list_head *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1218 */;
	void *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1152 */;
	snd_card_saa7134_t cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1128 */;
	snd_card_saa7134_t *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1118 */;
	struct snd_card *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1117 */;
	struct saa7134_dev *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1114 */;
	int cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1114 */;
	struct snd_kcontrol *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1064 */;
	struct snd_kcontrol_new cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1047 */[];
	struct snd_ctl_elem_value *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1013 */;
	struct snd_ctl_elem_info *cocci_id/* drivers/media/pci/saa7134/saa7134-alsa.c 1003 */;
}
