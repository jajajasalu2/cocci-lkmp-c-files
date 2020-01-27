cocci_test_suite() {
	struct m3_list *cocci_id/* sound/pci/maestro3.c 974 */;
	struct snd_pci_quirk cocci_id/* sound/pci/maestro3.c 810 */[];
	const struct pci_device_id cocci_id/* sound/pci/maestro3.c 788 */[];
	struct snd_m3 {
		struct snd_card *card;
		unsigned long iobase;
		int irq;
		unsigned int allegro_flag:1;
		struct snd_ac97 *ac97;
		struct snd_pcm *pcm;
		struct pci_dev *pci;
		int dacs_active;
		int timer_users;
		struct m3_list msrc_list;
		struct m3_list mixer_list;
		struct m3_list adc1_list;
		struct m3_list dma_list;
		u8 reset_state;
		int external_amp;
		int amp_gpio;
		unsigned int hv_config;
		unsigned irda_workaround:1;
		unsigned is_omnibook:1;
		struct snd_rawmidi *rmidi;
		int num_substreams;
		struct m3_dma *substreams;
		spinlock_t reg_lock;
#ifdef CONFIG_SND_MAESTRO3_INPUT
		struct input_dev *input_dev;
		char phys[64];
#else
		struct snd_kcontrol *master_switch;
		struct snd_kcontrol *master_volume;
#endif
		struct work_struct hwvol_work;
		unsigned int in_suspend;
#ifdef CONFIG_PM_SLEEP
		u16 *suspend_mem;
#endif
		const struct firmware *assp_kernel_image;
		const struct firmware *assp_minisrc_image;
	} cocci_id/* sound/pci/maestro3.c 724 */;
	struct m3_dma {
		int number;
		struct snd_pcm_substream *substream;
		struct assp_instance {
			unsigned short code,data;
		} inst;
		int running;
		int opened;
		unsigned long buffer_addr;
		int dma_size;
		int period_size;
		unsigned int hwptr;
		int count;
		int index[3];
		struct m3_list *index_list[3];
		int in_lists;
		struct list_head list;
	} cocci_id/* sound/pci/maestro3.c 697 */;
	struct m3_list {
		int curlen;
		int mem_addr;
		int max;
	} cocci_id/* sound/pci/maestro3.c 691 */;
	bool cocci_id/* sound/pci/maestro3.c 60 */;
	int cocci_id/* sound/pci/maestro3.c 54 */[SNDRV_CARDS];
	bool cocci_id/* sound/pci/maestro3.c 52 */[SNDRV_CARDS];
	char *cocci_id/* sound/pci/maestro3.c 51 */[SNDRV_CARDS];
	struct pci_driver cocci_id/* sound/pci/maestro3.c 2769 */;
	const struct pci_device_id *cocci_id/* sound/pci/maestro3.c 2694 */;
	struct m3_dma cocci_id/* sound/pci/maestro3.c 2600 */;
	struct snd_device_ops cocci_id/* sound/pci/maestro3.c 2532 */;
	const struct snd_pci_quirk *cocci_id/* sound/pci/maestro3.c 2531 */;
	struct snd_m3 **cocci_id/* sound/pci/maestro3.c 2527 */;
	struct snd_device *cocci_id/* sound/pci/maestro3.c 2517 */;
	struct input_dev *cocci_id/* sound/pci/maestro3.c 2481 */;
	struct snd_m3 *cocci_id/* sound/pci/maestro3.c 2431 */;
	struct snd_card *cocci_id/* sound/pci/maestro3.c 2430 */;
	struct device *cocci_id/* sound/pci/maestro3.c 2428 */;
	int cocci_id/* sound/pci/maestro3.c 2428 */;
	u8 cocci_id/* sound/pci/maestro3.c 2280 */;
	u32 cocci_id/* sound/pci/maestro3.c 2278 */;
	unsigned long cocci_id/* sound/pci/maestro3.c 2277 */;
	struct pci_dev *cocci_id/* sound/pci/maestro3.c 2276 */;
	struct m3_dma *cocci_id/* sound/pci/maestro3.c 2180 */;
	const __le16 *cocci_id/* sound/pci/maestro3.c 2092 */;
	unsigned int cocci_id/* sound/pci/maestro3.c 2091 */;
	const u16 cocci_id/* sound/pci/maestro3.c 2084 */[MINISRC_LPF_LEN];
	struct snd_ac97_bus_ops cocci_id/* sound/pci/maestro3.c 2046 */;
	struct snd_ctl_elem_id cocci_id/* sound/pci/maestro3.c 2043 */;
	struct snd_ac97_template cocci_id/* sound/pci/maestro3.c 2041 */;
	struct snd_ac97_bus *cocci_id/* sound/pci/maestro3.c 2040 */;
	u16 cocci_id/* sound/pci/maestro3.c 1972 */;
	void cocci_id/* sound/pci/maestro3.c 1970 */;
	struct snd_ac97 *cocci_id/* sound/pci/maestro3.c 1894 */;
	unsigned short cocci_id/* sound/pci/maestro3.c 1893 */;
	struct snd_pcm *cocci_id/* sound/pci/maestro3.c 1847 */;
	const struct snd_pcm_ops cocci_id/* sound/pci/maestro3.c 1833 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/maestro3.c 1810 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/maestro3.c 1798 */;
	const struct snd_pcm_hardware cocci_id/* sound/pci/maestro3.c 1690 */;
	irqreturn_t cocci_id/* sound/pci/maestro3.c 1618 */;
	void *cocci_id/* sound/pci/maestro3.c 1618 */;
	struct snd_m3 cocci_id/* sound/pci/maestro3.c 1530 */;
	struct work_struct *cocci_id/* sound/pci/maestro3.c 1528 */;
	signed cocci_id/* sound/pci/maestro3.c 1511 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/maestro3.c 1470 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/maestro3.c 1381 */;
	const struct rec_vals {
		u16 addr,val;
	} cocci_id/* sound/pci/maestro3.c 1325 */[];
	const struct play_vals {
		u16 addr,val;
	} cocci_id/* sound/pci/maestro3.c 1258 */[];
}
