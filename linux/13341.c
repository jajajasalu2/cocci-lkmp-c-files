cocci_test_suite() {
	bool cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 94 */;
	bool cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 92 */[SNDRV_CARDS];
	char *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 91 */[SNDRV_CARDS];
	int cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 90 */[SNDRV_CARDS];
	struct device_driver *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 813 */;
	void cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 811 */;
	struct v4l2_device *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 778 */;
	struct device *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 776 */;
	void *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 776 */;
	struct cx25821_audio_dev cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 712 */;
	struct snd_card *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 695 */;
	const struct pci_device_id __maybe_unused cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 683 */[];
	struct snd_pcm *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 658 */;
	char *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 656 */;
	const struct snd_pcm_ops cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 639 */;
	unsigned long cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 629 */;
	u16 cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 618 */;
	snd_pcm_uframes_t cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 613 */;
	struct cx25821_audio_dev {
		struct cx25821_dev *dev;
		struct cx25821_dmaqueue q;
		struct pci_dev *pci;
		int irq;
		struct snd_card *card;
		unsigned long iobase;
		spinlock_t reg_lock;
		atomic_t count;
		unsigned int dma_size;
		unsigned int period_size;
		unsigned int num_periods;
		struct cx25821_audio_buffer *buf;
		struct snd_pcm_substream *substream;
	} cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 60 */;
	struct snd_pcm_substream *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 584 */;
	struct cx25821_audio_buffer {
		unsigned int bpl;
		struct cx25821_riscmem risc;
		void *vaddr;
		struct scatterlist *sglist;
		int sglen;
		int nr_pages;
	} cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 51 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 497 */;
	struct snd_pcm_runtime *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 448 */;
	const struct snd_pcm_hardware cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 422 */;
	struct cx25821_riscmem *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 398 */;
	irqreturn_t cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 350 */;
	char *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 296 */[32];
	u32 cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 220 */;
	const struct sram_channel *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 218 */;
	struct cx25821_dev *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 217 */;
	struct cx25821_audio_buffer *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 216 */;
	struct cx25821_audio_dev *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 214 */;
	int cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 214 */;
	struct page *cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 137 */;
	unsigned int cocci_id/* drivers/media/pci/cx25821/cx25821-alsa.c 109 */;
}
