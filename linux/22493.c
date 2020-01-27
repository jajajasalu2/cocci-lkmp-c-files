cocci_test_suite() {
	unsigned int cocci_id/* sound/pci/ali5451/ali5451.c 989 */[4];
	void (*cocci_id/* sound/pci/ali5451/ali5451.c 942 */)(void *);
	struct snd_ali_voice *cocci_id/* sound/pci/ali5451/ali5451.c 909 */;
	struct snd_ali_channel_control *cocci_id/* sound/pci/ali5451/ali5451.c 886 */;
	irqreturn_t cocci_id/* sound/pci/ali5451/ali5451.c 881 */;
	void *cocci_id/* sound/pci/ali5451/ali5451.c 881 */;
	u32 cocci_id/* sound/pci/ali5451/ali5451.c 688 */;
	u8 cocci_id/* sound/pci/ali5451/ali5451.c 634 */;
	u16 cocci_id/* sound/pci/ali5451/ali5451.c 632 */;
	bool cocci_id/* sound/pci/ali5451/ali5451.c 49 */;
	struct snd_ac97 *cocci_id/* sound/pci/ali5451/ali5451.c 407 */;
	unsigned short cocci_id/* sound/pci/ali5451/ali5451.c 355 */;
	char *cocci_id/* sound/pci/ali5451/ali5451.c 35 */;
	unsigned long cocci_id/* sound/pci/ali5451/ali5451.c 283 */;
	void cocci_id/* sound/pci/ali5451/ali5451.c 273 */;
	void cocci_id/* sound/pci/ali5451/ali5451.c 260 */(struct snd_ali *,
							   int,
							   unsigned short,
							   unsigned short);
	unsigned short cocci_id/* sound/pci/ali5451/ali5451.c 259 */(struct snd_ali *,
								     int,
								     unsigned short);
	void cocci_id/* sound/pci/ali5451/ali5451.c 258 */(struct snd_ali *,
							   unsigned int,
							   unsigned int);
	const struct pci_device_id cocci_id/* sound/pci/ali5451/ali5451.c 252 */[];
	struct pci_driver cocci_id/* sound/pci/ali5451/ali5451.c 2253 */;
	const struct pci_device_id *cocci_id/* sound/pci/ali5451/ali5451.c 2200 */;
	struct snd_ali {
		int irq;
		unsigned long port;
		unsigned char revision;
		unsigned int hw_initialized:1;
		unsigned int spdif_support:1;
		struct pci_dev *pci;
		struct pci_dev *pci_m1533;
		struct pci_dev *pci_m7101;
		struct snd_card *card;
		struct snd_pcm *pcm[MAX_CODECS];
		struct snd_alidev synth;
		struct snd_ali_channel_control chregs;
		unsigned int spdif_mask;
		unsigned int spurious_irq_count;
		unsigned int spurious_irq_max_delta;
		unsigned int num_of_codecs;
		struct snd_ac97_bus *ac97_bus;
		struct snd_ac97 *ac97[MAX_CODECS];
		unsigned short ac97_ext_id;
		unsigned short ac97_ext_status;
		spinlock_t reg_lock;
		spinlock_t voice_alloc;
#ifdef CONFIG_PM_SLEEP
		struct snd_ali_image *image;
#endif
	} cocci_id/* sound/pci/ali5451/ali5451.c 214 */;
	struct snd_ali_image {
		u32 regs[ALI_GLOBAL_REGS];
		u32 channel_regs[ALI_CHANNELS][ALI_CHANNEL_REGS];
	} cocci_id/* sound/pci/ali5451/ali5451.c 208 */;
	struct snd_device_ops cocci_id/* sound/pci/ali5451/ali5451.c 2076 */;
	struct snd_ali **cocci_id/* sound/pci/ali5451/ali5451.c 2071 */;
	struct snd_device *cocci_id/* sound/pci/ali5451/ali5451.c 2060 */;
	struct snd_info_buffer *cocci_id/* sound/pci/ali5451/ali5451.c 2028 */;
	struct snd_info_entry *cocci_id/* sound/pci/ali5451/ali5451.c 2027 */;
	struct pci_dev *cocci_id/* sound/pci/ali5451/ali5451.c 1970 */;
	unsigned char cocci_id/* sound/pci/ali5451/ali5451.c 1969 */;
	struct snd_alidev {
		struct snd_ali_voice voices[ALI_CHANNELS];
		unsigned int chcnt;
		unsigned int chmap;
		unsigned int synthcount;
	} cocci_id/* sound/pci/ali5451/ali5451.c 195 */;
	struct snd_ali_image *cocci_id/* sound/pci/ali5451/ali5451.c 1906 */;
	struct snd_ali *cocci_id/* sound/pci/ali5451/ali5451.c 1905 */;
	struct snd_card *cocci_id/* sound/pci/ali5451/ali5451.c 1904 */;
	struct device *cocci_id/* sound/pci/ali5451/ali5451.c 1902 */;
	int cocci_id/* sound/pci/ali5451/ali5451.c 1902 */;
	struct snd_ac97_bus_ops cocci_id/* sound/pci/ali5451/ali5451.c 1822 */;
	struct snd_ac97_template cocci_id/* sound/pci/ali5451/ali5451.c 1819 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ali5451/ali5451.c 1807 */[];
	unsigned int cocci_id/* sound/pci/ali5451/ali5451.c 1725 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ali5451/ali5451.c 1722 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ali5451/ali5451.c 1721 */;
	struct snd_ali_voice {
		unsigned int number;
		unsigned int use:1,pcm:1,midi:1,mode:1,synth:1,running:1;
		struct snd_ali *codec;
		struct snd_pcm_substream *substream;
		struct snd_ali_voice *extra;
		int eso;
		int count;
		void *private_data;
		void (*private_free)(void *private_data);
	} cocci_id/* sound/pci/ali5451/ali5451.c 171 */;
	struct ali_pcm_description cocci_id/* sound/pci/ali5451/ali5451.c 1686 */[];
	struct snd_pcm *cocci_id/* sound/pci/ali5451/ali5451.c 1655 */;
	struct ali_pcm_description *cocci_id/* sound/pci/ali5451/ali5451.c 1653 */;
	struct ali_pcm_description {
		char *name;
		unsigned int playback_num;
		unsigned int capture_num;
		const struct snd_pcm_ops *playback_ops;
		const struct snd_pcm_ops *capture_ops;
		unsigned short class;
	} cocci_id/* sound/pci/ali5451/ali5451.c 1635 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/ali5451/ali5451.c 1589 */;
	const unsigned int cocci_id/* sound/pci/ali5451/ali5451.c 1588 */[];
	const struct snd_pcm_ops cocci_id/* sound/pci/ali5451/ali5451.c 1537 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/ali5451/ali5451.c 1506 */;
	struct snd_ali_channel_control {
		struct REGDATA {
			unsigned int start;
			unsigned int stop;
			unsigned int aint;
			unsigned int ainten;
		} data;
		struct REGS {
			unsigned int start;
			unsigned int stop;
			unsigned int aint;
			unsigned int ainten;
			unsigned int ac97read;
			unsigned int ac97write;
		} regs;
	} cocci_id/* sound/pci/ali5451/ali5451.c 150 */;
	struct snd_ali_voice cocci_id/* sound/pci/ali5451/ali5451.c 148 */;
	struct snd_pcm_hardware *cocci_id/* sound/pci/ali5451/ali5451.c 1479 */;
	struct snd_ali cocci_id/* sound/pci/ali5451/ali5451.c 147 */;
	struct snd_pcm_hardware cocci_id/* sound/pci/ali5451/ali5451.c 1448 */;
	snd_pcm_uframes_t cocci_id/* sound/pci/ali5451/ali5451.c 1379 */;
	struct snd_pcm_hw_params *cocci_id/* sound/pci/ali5451/ali5451.c 1187 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/ali5451/ali5451.c 1048 */;
}
