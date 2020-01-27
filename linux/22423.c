cocci_test_suite() {
	struct aw2 {
		struct snd_aw2_saa7146 saa7146;
		struct pci_dev *pci;
		int irq;
		spinlock_t reg_lock;
		struct mutex mtx;
		unsigned long iobase_phys;
		void __iomem *iobase_virt;
		struct snd_card *card;
		struct aw2_pcm_device device_playback[NB_STREAM_PLAYBACK];
		struct aw2_pcm_device device_capture[NB_STREAM_CAPTURE];
	} cocci_id/* sound/pci/aw2/aw2-alsa.c 82 */;
	struct aw2_pcm_device {
		struct snd_pcm *pcm;
		unsigned int stream_number;
		struct aw2 *chip;
	} cocci_id/* sound/pci/aw2/aw2-alsa.c 76 */;
	struct aw2 *cocci_id/* sound/pci/aw2/aw2-alsa.c 707 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/aw2/aw2-alsa.c 704 */;
	struct snd_kcontrol *cocci_id/* sound/pci/aw2/aw2-alsa.c 703 */;
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 703 */;
	const char *constcocci_id/* sound/pci/aw2/aw2-alsa.c 697 */[2];
	struct snd_ctl_elem_info *cocci_id/* sound/pci/aw2/aw2-alsa.c 695 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/aw2/aw2-alsa.c 59 */;
	struct aw2_pcm_device *cocci_id/* sound/pci/aw2/aw2-alsa.c 582 */;
	struct snd_pcm *cocci_id/* sound/pci/aw2/aw2-alsa.c 579 */;
	unsigned int cocci_id/* sound/pci/aw2/aw2-alsa.c 563 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/aw2/aw2-alsa.c 558 */;
	snd_aw2_saa7146_it_cb cocci_id/* sound/pci/aw2/aw2-alsa.c 477 */;
	unsigned long cocci_id/* sound/pci/aw2/aw2-alsa.c 463 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/aw2/aw2-alsa.c 416 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/aw2/aw2-alsa.c 408 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/aw2/aw2-alsa.c 400 */;
	void cocci_id/* sound/pci/aw2/aw2-alsa.c 376 */;
	const struct pci_device_id *cocci_id/* sound/pci/aw2/aw2-alsa.c 319 */;
	void *cocci_id/* sound/pci/aw2/aw2-alsa.c 302 */;
	struct snd_device_ops cocci_id/* sound/pci/aw2/aw2-alsa.c 235 */;
	struct pci_dev *cocci_id/* sound/pci/aw2/aw2-alsa.c 231 */;
	struct aw2 **cocci_id/* sound/pci/aw2/aw2-alsa.c 231 */;
	struct snd_card *cocci_id/* sound/pci/aw2/aw2-alsa.c 230 */;
	struct snd_device *cocci_id/* sound/pci/aw2/aw2-alsa.c 208 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/aw2/aw2-alsa.c 192 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/aw2/aw2-alsa.c 181 */;
	struct pci_driver cocci_id/* sound/pci/aw2/aw2-alsa.c 159 */;
	const struct pci_device_id cocci_id/* sound/pci/aw2/aw2-alsa.c 150 */[];
	bool cocci_id/* sound/pci/aw2/aw2-alsa.c 147 */;
	bool cocci_id/* sound/pci/aw2/aw2-alsa.c 141 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/aw2/aw2-alsa.c 140 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 139 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 129 */(struct snd_kcontrol *kcontrol,
						       struct snd_ctl_elem_value *ucontrol);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 127 */(struct snd_kcontrol *kcontrol,
						       struct snd_ctl_elem_info *uinfo);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 125 */(struct aw2 *chip);
	snd_pcm_uframes_t cocci_id/* sound/pci/aw2/aw2-alsa.c 123 */(struct snd_pcm_substream *substream);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 119 */(struct snd_pcm_substream *substream,
						       int cmd);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 112 */(struct snd_pcm_substream *substream,
						       struct snd_pcm_hw_params *hw_params);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 111 */(struct snd_pcm_substream *substream);
	void cocci_id/* sound/pci/aw2/aw2-alsa.c 107 */(struct pci_dev *pci);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 105 */(struct pci_dev *pci,
						       const struct pci_device_id *pci_id);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 103 */(struct snd_card *card,
						       struct pci_dev *pci,
						       struct aw2 **rchip);
	int cocci_id/* sound/pci/aw2/aw2-alsa.c 102 */(struct snd_device *device);
}
