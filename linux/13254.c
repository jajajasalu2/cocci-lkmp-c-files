cocci_test_suite() {
	struct snd_card *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 990 */;
	struct pci_dev *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 988 */;
	unsigned long long cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 966 */;
	struct cx88_audio_dev cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 931 */;
	const struct pci_device_id *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 915 */;
	unsigned char cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 854 */;
	bool cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 85 */;
	struct cx88_core **cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 849 */;
	struct cx88_audio_dev **cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 848 */;
	bool cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 83 */[SNDRV_CARDS];
	const char *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 82 */[SNDRV_CARDS];
	const struct pci_device_id cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 810 */[];
	int cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 81 */[SNDRV_CARDS];
	const struct snd_kcontrol_new cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 793 */;
	s32 cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 775 */;
	struct snd_ctl_elem_value *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 771 */;
	struct snd_kcontrol *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 770 */;
	struct snd_ctl_elem_info *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 620 */;
	struct snd_pcm *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 604 */;
	const char *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 601 */;
	const struct snd_pcm_ops cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 585 */;
	unsigned long cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 575 */;
	u16 cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 561 */;
	snd_pcm_uframes_t cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 557 */;
	struct cx88_audio_dev {
		struct cx88_core *core;
		struct cx88_dmaqueue q;
		struct pci_dev *pci;
		int irq;
		struct snd_card *card;
		spinlock_t reg_lock;
		atomic_t count;
		unsigned int dma_size;
		unsigned int period_size;
		unsigned int num_periods;
		struct cx88_audio_buffer *buf;
		struct snd_pcm_substream *substream;
	} cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 53 */;
	struct snd_pcm_substream *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 529 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 449 */;
	struct cx88_audio_buffer {
		unsigned int bpl;
		struct cx88_riscmem risc;
		void *vaddr;
		struct scatterlist *sglist;
		int sglen;
		int nr_pages;
	} cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 44 */;
	struct snd_pcm_runtime *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 406 */;
	const struct snd_pcm_hardware cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 377 */;
	struct cx88_riscmem *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 352 */;
	struct page *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 277 */;
	irqreturn_t cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 242 */;
	void *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 242 */;
	u32 cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 209 */;
	void cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 206 */;
	const char *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 190 */[32];
	const struct sram_channel *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 118 */;
	struct cx88_core *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 117 */;
	struct cx88_audio_buffer *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 116 */;
	struct cx88_audio_dev *cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 114 */;
	int cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 114 */;
	unsigned int cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 102 */;
	struct pci_driver cocci_id/* drivers/media/pci/cx88/cx88-alsa.c 1001 */;
}
