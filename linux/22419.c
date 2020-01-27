cocci_test_suite() {
	struct azf3328_mixer_reg cocci_id/* sound/pci/azt3328.c 939 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/azt3328.c 936 */;
	struct snd_kcontrol *cocci_id/* sound/pci/azt3328.c 935 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/azt3328.c 921 */;
	struct azf3328_mixer_reg *cocci_id/* sound/pci/azt3328.c 869 */;
	struct azf3328_mixer_reg {
		unsigned reg;
		unsigned int lchan_shift,rchan_shift;
		unsigned int mask;
		unsigned int invert:1;
		unsigned int stereo:1;
		unsigned int enum_c:4;
	} cocci_id/* sound/pci/azt3328.c 853 */;
	unsigned char cocci_id/* sound/pci/azt3328.c 799 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/azt3328.c 760 */;
	struct snd_ac97_template cocci_id/* sound/pci/azt3328.c 759 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/azt3328.c 758 */;
	struct snd_ac97 *cocci_id/* sound/pci/azt3328.c 651 */;
	const unsigned int cocci_id/* sound/pci/azt3328.c 647 */;
	const unsigned short cocci_id/* sound/pci/azt3328.c 616 */;
	const struct {
		unsigned short azf_reg;
	} cocci_id/* sound/pci/azt3328.c 544 */[];
	const char *cocci_id/* sound/pci/azt3328.c 519 */;
	const struct snd_azf3328 *cocci_id/* sound/pci/azt3328.c 404 */;
	u32 cocci_id/* sound/pci/azt3328.c 391 */;
	const u32 *cocci_id/* sound/pci/azt3328.c 383 */;
	unsigned long cocci_id/* sound/pci/azt3328.c 381 */;
	const void *cocci_id/* sound/pci/azt3328.c 378 */;
	u16 cocci_id/* sound/pci/azt3328.c 361 */;
	const struct snd_azf3328_codec_data *cocci_id/* sound/pci/azt3328.c 347 */;
	unsigned cocci_id/* sound/pci/azt3328.c 347 */;
	u8 cocci_id/* sound/pci/azt3328.c 346 */;
	void cocci_id/* sound/pci/azt3328.c 337 */;
	const struct pci_device_id cocci_id/* sound/pci/azt3328.c 310 */[];
	struct pci_driver cocci_id/* sound/pci/azt3328.c 2734 */;
	struct device *cocci_id/* sound/pci/azt3328.c 2707 */;
	u16 *cocci_id/* sound/pci/azt3328.c 2675 */;
	u32 *cocci_id/* sound/pci/azt3328.c 2615 */;
	struct snd_azf3328 {
		unsigned long ctrl_io;
		unsigned long game_io;
		unsigned long mpu_io;
		unsigned long opl3_io;
		unsigned long mixer_io;
		spinlock_t reg_lock;
		struct snd_timer *timer;
		struct snd_pcm *pcm[3];
		struct snd_azf3328_codec_data codecs[3];
#ifdef AZF_USE_AC97_LAYER
		struct snd_ac97 *ac97;
#endif
		struct snd_card *card;
		struct snd_rawmidi *rmidi;
#ifdef SUPPORT_GAMEPORT
		struct gameport *gameport;
		u16 axes[4];
#endif
		struct pci_dev *pci;
		int irq;
		u16 shadow_reg_ctrl_6AH;
#ifdef CONFIG_PM_SLEEP
		u32 saved_regs_ctrl[AZF_ALIGN(AZF_IO_SIZE_CTRL_PM) / 4];
		u32 saved_regs_game[AZF_ALIGN(AZF_IO_SIZE_GAME_PM) / 4];
		u32 saved_regs_mpu[AZF_ALIGN(AZF_IO_SIZE_MPU_PM) / 4];
		u32 saved_regs_opl3[AZF_ALIGN(AZF_IO_SIZE_OPL3_PM) / 4];
		u32 saved_regs_mixer[AZF_ALIGN(AZF_IO_SIZE_MIXER_PM) / 4];
#endif
	} cocci_id/* sound/pci/azt3328.c 260 */;
	struct snd_opl3 *cocci_id/* sound/pci/azt3328.c 2505 */;
	const struct pci_device_id *cocci_id/* sound/pci/azt3328.c 2500 */;
	struct snd_azf3328_codec_data {
		unsigned long io_base;
		unsigned int dma_base;
		spinlock_t *lock;
		struct snd_pcm_substream *substream;
		bool running;
		enum snd_azf3328_codec_type type;
		const char *name;
	} cocci_id/* sound/pci/azt3328.c 250 */;
	enum snd_azf3328_codec_type{AZF_CODEC_PLAYBACK=0, AZF_CODEC_CAPTURE=1, AZF_CODEC_I2S_OUT=2,} cocci_id/* sound/pci/azt3328.c 243 */;
	int cocci_id/* sound/pci/azt3328.c 239 */;
	enum snd_azf3328_codec_type cocci_id/* sound/pci/azt3328.c 2387 */;
	struct snd_device_ops cocci_id/* sound/pci/azt3328.c 2383 */;
	struct snd_azf3328 **cocci_id/* sound/pci/azt3328.c 2379 */;
	struct pci_dev *cocci_id/* sound/pci/azt3328.c 2377 */;
	struct snd_card *cocci_id/* sound/pci/azt3328.c 2376 */;
	bool cocci_id/* sound/pci/azt3328.c 235 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/azt3328.c 231 */[SNDRV_CARDS];
	struct snd_device *cocci_id/* sound/pci/azt3328.c 2294 */;
	int cocci_id/* sound/pci/azt3328.c 227 */[SNDRV_CARDS];
	struct snd_timer_id cocci_id/* sound/pci/azt3328.c 2240 */;
	struct snd_timer *cocci_id/* sound/pci/azt3328.c 2239 */;
	struct snd_timer_hardware cocci_id/* sound/pci/azt3328.c 2227 */;
	unsigned long *cocci_id/* sound/pci/azt3328.c 2220 */;
	struct snd_pcm *cocci_id/* sound/pci/azt3328.c 2118 */;
	enum{AZF_PCMDEV_STD, AZF_PCMDEV_I2S_OUT, NUM_AZF_PCMDEVS,} cocci_id/* sound/pci/azt3328.c 2116 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/azt3328.c 2090 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/azt3328.c 2034 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/azt3328.c 2020 */;
	const unsigned int cocci_id/* sound/pci/azt3328.c 2003 */[];
	const struct snd_pcm_hardware cocci_id/* sound/pci/azt3328.c 1970 */;
	void *cocci_id/* sound/pci/azt3328.c 1912 */;
	irqreturn_t cocci_id/* sound/pci/azt3328.c 1911 */;
	struct gameport *cocci_id/* sound/pci/azt3328.c 1811 */;
	int *cocci_id/* sound/pci/azt3328.c 1745 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/azt3328.c 1620 */;
	struct codec_setup_io {
		u32 dma_start_1;
		u32 dma_start_2;
		u32 dma_lengths;
	}__attribute__((packed)) cocci_id/* sound/pci/azt3328.c 1405 */;
	unsigned int cocci_id/* sound/pci/azt3328.c 1390 */;
	struct snd_azf3328_codec_data *cocci_id/* sound/pci/azt3328.c 1388 */;
	struct snd_azf3328 *cocci_id/* sound/pci/azt3328.c 1387 */;
	const struct {
		enum snd_azf3328_codec_type other1;
		enum snd_azf3328_codec_type other2;
	} cocci_id/* sound/pci/azt3328.c 1351 */[3];
	bool cocci_id/* sound/pci/azt3328.c 1340 */;
	enum azf_freq_t cocci_id/* sound/pci/azt3328.c 1224 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/azt3328.c 1216 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/azt3328.c 1210 */;
	const struct snd_kcontrol_new *cocci_id/* sound/pci/azt3328.c 1175 */;
	u16 cocci_id/* sound/pci/azt3328.c 1155 */[][2];
	struct snd_kcontrol_new cocci_id/* sound/pci/azt3328.c 1097 */[];
	unsigned short cocci_id/* sound/pci/azt3328.c 1049 */;
	const char *const*cocci_id/* sound/pci/azt3328.c 1020 */;
	const char *constcocci_id/* sound/pci/azt3328.c 1006 */[];
}
