cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* sound/pci/es1968.c 874 */;
	unsigned long cocci_id/* sound/pci/es1968.c 723 */;
	u8 cocci_id/* sound/pci/es1968.c 712 */;
	u16 cocci_id/* sound/pci/es1968.c 712 */;
	struct es1968 *cocci_id/* sound/pci/es1968.c 712 */;
	void cocci_id/* sound/pci/es1968.c 692 */;
	int cocci_id/* sound/pci/es1968.c 682 */;
	struct snd_ac97 *cocci_id/* sound/pci/es1968.c 650 */;
	unsigned short cocci_id/* sound/pci/es1968.c 650 */;
	const struct pci_device_id cocci_id/* sound/pci/es1968.c 559 */[];
	irqreturn_t cocci_id/* sound/pci/es1968.c 557 */(int irq,
							 void *dev_id);
	struct es1968 {
		int total_bufsize;
		int playback_streams,capture_streams;
		unsigned int clock;
		unsigned int in_measurement:1;
		unsigned int measure_apu;
		unsigned int measure_lastpos;
		unsigned int measure_count;
		struct snd_dma_buffer dma;
		int irq;
		unsigned long io_port;
		int type;
		struct pci_dev *pci;
		struct snd_card *card;
		struct snd_pcm *pcm;
		int do_pm;
		struct list_head buf_list;
		struct snd_ac97 *ac97;
		struct snd_rawmidi *rmidi;
		spinlock_t reg_lock;
		unsigned int in_suspend;
		u16 maestro_map[32];
		int bobclient;
		int bob_freq;
		struct mutex memory_mutex;
		unsigned char apu[NR_APUS];
		struct list_head substream_list;
		spinlock_t substream_lock;
#ifdef CONFIG_PM_SLEEP
		u16 apu_map[NR_APUS][NR_APU_REGS];
#endif
#ifdef SUPPORT_JOYSTICK
		struct gameport *gameport;
#endif
#ifdef CONFIG_SND_ES1968_INPUT
		struct input_dev *input_dev;
		char phys[64];
#else
		struct snd_kcontrol *master_switch;
		struct snd_kcontrol *master_volume;
#endif
		struct work_struct hwvol_work;
#ifdef CONFIG_SND_ES1968_RADIO
		struct v4l2_device v4l2_dev;
		struct snd_tea575x tea;
		unsigned int tea575x_tuner;
#endif
	} cocci_id/* sound/pci/es1968.c 485 */;
	struct esschan {
		int running;
		u8 apu[4];
		u8 apu_mode[4];
		struct esm_memory *memory;
		struct esm_memory *mixbuf;
		unsigned int hwptr;
		unsigned int count;
		unsigned int dma_size;
		unsigned int frag_size;
		unsigned int wav_shift;
		u16 base[4];
		unsigned char fmt;
		int mode;
		int bob_freq;
		struct snd_pcm_substream *substream;
		struct list_head list;
#ifdef CONFIG_PM_SLEEP
		u16 wc_map[4];
#endif
	} cocci_id/* sound/pci/es1968.c 451 */;
	struct esm_memory {
		struct snd_dma_buffer buf;
		int empty;
		struct list_head list;
	} cocci_id/* sound/pci/es1968.c 444 */;
	enum{TYPE_MAESTRO, TYPE_MAESTRO2, TYPE_MAESTRO2E,} cocci_id/* sound/pci/es1968.c 439 */;
	enum snd_enum_apu_type{ESM_APU_PCM_PLAY, ESM_APU_PCM_CAPTURE, ESM_APU_PCM_RATECONV, ESM_APU_FREE,} cocci_id/* sound/pci/es1968.c 431 */;
	struct pci_driver cocci_id/* sound/pci/es1968.c 2907 */;
	const struct pci_device_id *cocci_id/* sound/pci/es1968.c 2791 */;
	struct snd_device_ops cocci_id/* sound/pci/es1968.c 2663 */;
	struct es1968 **cocci_id/* sound/pci/es1968.c 2661 */;
	struct ess_device_list cocci_id/* sound/pci/es1968.c 2649 */[];
	struct ess_device_list {
		unsigned short type;
		unsigned short vendor;
	} cocci_id/* sound/pci/es1968.c 2633 */;
	struct snd_device *cocci_id/* sound/pci/es1968.c 2627 */;
	const struct snd_tea575x_ops cocci_id/* sound/pci/es1968.c 2591 */;
	bool cocci_id/* sound/pci/es1968.c 2571 */;
	struct snd_es1968_tea575x_gpio cocci_id/* sound/pci/es1968.c 2559 */;
	struct snd_tea575x *cocci_id/* sound/pci/es1968.c 2556 */;
	struct snd_es1968_tea575x_gpio cocci_id/* sound/pci/es1968.c 2534 */[];
	struct snd_es1968_tea575x_gpio {
		u8 data,clk,wren,most;
		char *name;
	} cocci_id/* sound/pci/es1968.c 2529 */;
	struct input_dev *cocci_id/* sound/pci/es1968.c 2488 */;
	struct resource *cocci_id/* sound/pci/es1968.c 2437 */;
	struct gameport *cocci_id/* sound/pci/es1968.c 2436 */;
	struct esschan *cocci_id/* sound/pci/es1968.c 2388 */;
	struct snd_card *cocci_id/* sound/pci/es1968.c 2386 */;
	struct device *cocci_id/* sound/pci/es1968.c 2384 */;
	struct pci_dev *cocci_id/* sound/pci/es1968.c 2165 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/es1968.c 2012 */;
	struct snd_ctl_elem_id cocci_id/* sound/pci/es1968.c 2009 */;
	struct snd_ac97_template cocci_id/* sound/pci/es1968.c 2007 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/es1968.c 2006 */;
	irqreturn_t cocci_id/* sound/pci/es1968.c 1957 */;
	void *cocci_id/* sound/pci/es1968.c 1957 */;
	struct es1968 cocci_id/* sound/pci/es1968.c 1879 */;
	struct work_struct *cocci_id/* sound/pci/es1968.c 1877 */;
	struct snd_pcm *cocci_id/* sound/pci/es1968.c 1796 */;
	ktime_t cocci_id/* sound/pci/es1968.c 1697 */;
	unsigned int cocci_id/* sound/pci/es1968.c 1695 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/es1968.c 1675 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/es1968.c 1645 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/es1968.c 1461 */;
	struct esm_memory cocci_id/* sound/pci/es1968.c 1413 */;
	struct list_head *cocci_id/* sound/pci/es1968.c 1407 */;
	struct esm_memory *cocci_id/* sound/pci/es1968.c 1331 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/es1968.c 1300 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/es1968.c 1268 */;
	int cocci_id/* sound/pci/es1968.c 125 */[SNDRV_CARDS];
	bool cocci_id/* sound/pci/es1968.c 121 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/es1968.c 120 */[SNDRV_CARDS];
	u32 cocci_id/* sound/pci/es1968.c 1141 */;
}
