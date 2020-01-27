cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/pci/ens1370.c 860 */;
	bool cocci_id/* sound/pci/ens1370.c 74 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/ens1370.c 73 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/ens1370.c 72 */[SNDRV_CARDS];
	bool cocci_id/* sound/pci/ens1370.c 595 */;
	const unsigned int cocci_id/* sound/pci/ens1370.c 495 */[];
	const struct snd_pcm_hw_constraint_ratdens cocci_id/* sound/pci/ens1370.c 480 */;
	const struct snd_ratden cocci_id/* sound/pci/ens1370.c 474 */;
	const struct snd_pcm_hw_constraint_ratnums cocci_id/* sound/pci/ens1370.c 469 */;
	const struct snd_ratnum cocci_id/* sound/pci/ens1370.c 463 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/ens1370.c 458 */;
	const struct pci_device_id cocci_id/* sound/pci/ens1370.c 435 */[];
	irqreturn_t cocci_id/* sound/pci/ens1370.c 433 */(int irq,
							  void *dev_id);
	struct ensoniq {
		spinlock_t reg_lock;
		struct mutex src_mutex;
		int irq;
		unsigned long playback1size;
		unsigned long playback2size;
		unsigned long capture3size;
		unsigned long port;
		unsigned int mode;
		unsigned int uartm;
		unsigned int ctrl;
		unsigned int sctrl;
		unsigned int cssr;
		unsigned int uartc;
		unsigned int rev;
		union {
#ifdef CHIP1371
			struct {
				struct snd_ac97 *ac97;
			} es1371;
#else
			struct {
				int pclkdiv_lock;
				struct snd_ak4531 *ak4531;
			} es1370;
#endif
		} u;
		struct pci_dev *pci;
		struct snd_card *card;
		struct snd_pcm *pcm1;
		struct snd_pcm *pcm2;
		struct snd_pcm_substream *playback1_substream;
		struct snd_pcm_substream *playback2_substream;
		struct snd_pcm_substream *capture_substream;
		unsigned int p1_dma_size;
		unsigned int p2_dma_size;
		unsigned int c_dma_size;
		unsigned int p1_period_size;
		unsigned int p2_period_size;
		unsigned int c_period_size;
		struct snd_rawmidi *rmidi;
		struct snd_rawmidi_substream *midi_input;
		struct snd_rawmidi_substream *midi_output;
		unsigned int spdif;
		unsigned int spdif_default;
		unsigned int spdif_stream;
#ifdef CHIP1370
		struct snd_dma_buffer dma_bug;
#endif
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
	} cocci_id/* sound/pci/ens1370.c 370 */;
	struct pci_driver cocci_id/* sound/pci/ens1370.c 2449 */;
	void cocci_id/* sound/pci/ens1370.c 2444 */;
	struct snd_card *cocci_id/* sound/pci/ens1370.c 2376 */;
	const struct pci_device_id *cocci_id/* sound/pci/ens1370.c 2373 */;
	struct pci_dev *cocci_id/* sound/pci/ens1370.c 2372 */;
	unsigned int cocci_id/* sound/pci/ens1370.c 2340 */;
	irqreturn_t cocci_id/* sound/pci/ens1370.c 2337 */;
	void *cocci_id/* sound/pci/ens1370.c 2337 */;
	struct snd_rawmidi *cocci_id/* sound/pci/ens1370.c 2318 */;
	const struct snd_rawmidi_ops cocci_id/* sound/pci/ens1370.c 2309 */;
	unsigned long cocci_id/* sound/pci/ens1370.c 2250 */;
	struct snd_rawmidi_substream *cocci_id/* sound/pci/ens1370.c 2198 */;
	unsigned char cocci_id/* sound/pci/ens1370.c 2148 */;
	struct snd_device_ops cocci_id/* sound/pci/ens1370.c 2069 */;
	struct ensoniq **cocci_id/* sound/pci/ens1370.c 2065 */;
	struct device *cocci_id/* sound/pci/ens1370.c 2041 */;
	struct es1371_quirk cocci_id/* sound/pci/ens1370.c 1944 */[];
	struct snd_device *cocci_id/* sound/pci/ens1370.c 1929 */;
	struct snd_info_buffer *cocci_id/* sound/pci/ens1370.c 1873 */;
	struct snd_info_entry *cocci_id/* sound/pci/ens1370.c 1872 */;
	long cocci_id/* sound/pci/ens1370.c 1864 */;
	struct gameport *cocci_id/* sound/pci/ens1370.c 1796 */;
	struct snd_ak4531 cocci_id/* sound/pci/ens1370.c 1739 */;
	struct snd_ak4531 *cocci_id/* sound/pci/ens1370.c 1730 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ens1370.c 1723 */[2];
	struct snd_ac97_bus_ops cocci_id/* sound/pci/ens1370.c 1621 */;
	struct snd_ac97_template cocci_id/* sound/pci/ens1370.c 1619 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/ens1370.c 1618 */;
	struct snd_pci_quirk cocci_id/* sound/pci/ens1370.c 1608 */[];
	unsigned short cocci_id/* sound/pci/ens1370.c 1589 */;
	struct es1371_quirk *cocci_id/* sound/pci/ens1370.c 1587 */;
	struct ensoniq *cocci_id/* sound/pci/ens1370.c 1586 */;
	int cocci_id/* sound/pci/ens1370.c 1586 */;
	struct es1371_quirk {
		unsigned short vid;
		unsigned short did;
		unsigned char rev;
	} cocci_id/* sound/pci/ens1370.c 1580 */;
	struct snd_ac97 *cocci_id/* sound/pci/ens1370.c 1574 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/ens1370.c 1565 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ens1370.c 1458 */[];
	u32 cocci_id/* sound/pci/ens1370.c 1360 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ens1370.c 1341 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ens1370.c 1340 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/ens1370.c 1333 */;
	struct snd_pcm *cocci_id/* sound/pci/ens1370.c 1258 */;
	const struct snd_pcm_chmap_elem cocci_id/* sound/pci/ens1370.c 1248 */[];
	const struct snd_pcm_ops cocci_id/* sound/pci/ens1370.c 1237 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/ens1370.c 1201 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/ens1370.c 1162 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/ens1370.c 1094 */;
	size_t cocci_id/* sound/pci/ens1370.c 1033 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/ens1370.c 1030 */;
}
