cocci_test_suite() {
	const char *const cocci_id/* sound/pci/sonicvibes.c 904 */[7];
	struct snd_pcm *cocci_id/* sound/pci/sonicvibes.c 870 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/sonicvibes.c 857 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/sonicvibes.c 837 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/sonicvibes.c 818 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/sonicvibes.c 784 */;
	size_t cocci_id/* sound/pci/sonicvibes.c 758 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/sonicvibes.c 755 */;
	unsigned char cocci_id/* sound/pci/sonicvibes.c 723 */;
	irqreturn_t cocci_id/* sound/pci/sonicvibes.c 604 */;
	void *cocci_id/* sound/pci/sonicvibes.c 604 */;
	struct snd_pcm_hw_rule *cocci_id/* sound/pci/sonicvibes.c 544 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/sonicvibes.c 543 */;
	bool cocci_id/* sound/pci/sonicvibes.c 49 */;
	unsigned int *cocci_id/* sound/pci/sonicvibes.c 469 */;
	unsigned int cocci_id/* sound/pci/sonicvibes.c 43 */;
	bool cocci_id/* sound/pci/sonicvibes.c 40 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/sonicvibes.c 39 */[SNDRV_CARDS];
	int cocci_id/* sound/pci/sonicvibes.c 38 */[SNDRV_CARDS];
	unsigned long cocci_id/* sound/pci/sonicvibes.c 330 */;
	const struct snd_pcm_hw_constraint_ratdens cocci_id/* sound/pci/sonicvibes.c 243 */;
	const struct snd_ratden cocci_id/* sound/pci/sonicvibes.c 237 */;
	const struct pci_device_id cocci_id/* sound/pci/sonicvibes.c 230 */[];
	struct sonicvibes {
		unsigned long dma1size;
		unsigned long dma2size;
		int irq;
		unsigned long sb_port;
		unsigned long enh_port;
		unsigned long synth_port;
		unsigned long midi_port;
		unsigned long game_port;
		unsigned int dmaa_port;
		struct resource *res_dmaa;
		unsigned int dmac_port;
		struct resource *res_dmac;
		unsigned char enable;
		unsigned char irqmask;
		unsigned char revision;
		unsigned char format;
		unsigned char srs_space;
		unsigned char srs_center;
		unsigned char mpu_switch;
		unsigned char wave_source;
		unsigned int mode;
		struct pci_dev *pci;
		struct snd_card *card;
		struct snd_pcm *pcm;
		struct snd_pcm_substream *playback_substream;
		struct snd_pcm_substream *capture_substream;
		struct snd_rawmidi *rmidi;
		struct snd_hwdep *fmsynth;
		spinlock_t reg_lock;
		unsigned int p_dma_size;
		unsigned int c_dma_size;
		struct snd_kcontrol *master_mute;
		struct snd_kcontrol *master_volume;
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
	} cocci_id/* sound/pci/sonicvibes.c 183 */;
	struct pci_driver cocci_id/* sound/pci/sonicvibes.c 1526 */;
	void cocci_id/* sound/pci/sonicvibes.c 1521 */;
	unsigned long long cocci_id/* sound/pci/sonicvibes.c 1474 */;
	struct snd_opl3 *cocci_id/* sound/pci/sonicvibes.c 1440 */;
	struct snd_rawmidi *cocci_id/* sound/pci/sonicvibes.c 1439 */;
	struct sonicvibes *cocci_id/* sound/pci/sonicvibes.c 1438 */;
	struct snd_card *cocci_id/* sound/pci/sonicvibes.c 1437 */;
	const struct pci_device_id *cocci_id/* sound/pci/sonicvibes.c 1434 */;
	struct pci_dev *cocci_id/* sound/pci/sonicvibes.c 1433 */;
	int cocci_id/* sound/pci/sonicvibes.c 1433 */;
	struct snd_mpu401 *cocci_id/* sound/pci/sonicvibes.c 1419 */;
	struct snd_device_ops cocci_id/* sound/pci/sonicvibes.c 1242 */;
	struct sonicvibes **cocci_id/* sound/pci/sonicvibes.c 1237 */;
	struct snd_device *cocci_id/* sound/pci/sonicvibes.c 1227 */;
	struct gameport *cocci_id/* sound/pci/sonicvibes.c 1175 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/sonicvibes.c 1170 */;
	struct snd_info_buffer *cocci_id/* sound/pci/sonicvibes.c 1130 */;
	struct snd_info_entry *cocci_id/* sound/pci/sonicvibes.c 1129 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/sonicvibes.c 1071 */[];
	unsigned short cocci_id/* sound/pci/sonicvibes.c 1049 */;
	struct snd_kcontrol *cocci_id/* sound/pci/sonicvibes.c 1018 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/sonicvibes.c 1018 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/sonicvibes.c 1007 */;
}