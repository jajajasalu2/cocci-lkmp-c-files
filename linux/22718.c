cocci_test_suite() {
	struct snd_pcm_substream *cocci_id/* sound/drivers/aloop.c 998 */;
	struct loopback_cable {
		spinlock_t lock;
		struct loopback_pcm *streams[2];
		struct snd_pcm_hardware hw;
		unsigned int valid;
		unsigned int running;
		unsigned int pause;
		struct loopback_ops *ops;
		struct {
			int stream;
			struct snd_timer_id id;
			struct tasklet_struct event_tasklet;
			struct snd_timer_instance *instance;
		} snd_timer;
	} cocci_id/* sound/drivers/aloop.c 99 */;
	struct snd_interval cocci_id/* sound/drivers/aloop.c 970 */;
	struct snd_pcm_hw_rule *cocci_id/* sound/drivers/aloop.c 966 */;
	u_int32_t cocci_id/* sound/drivers/aloop.c 943 */;
	struct snd_mask cocci_id/* sound/drivers/aloop.c 939 */;
	struct snd_pcm_hw_params *cocci_id/* sound/drivers/aloop.c 909 */;
	const struct snd_pcm_hardware cocci_id/* sound/drivers/aloop.c 877 */;
	struct timespec *cocci_id/* sound/drivers/aloop.c 807 */;
	struct snd_timer_instance *cocci_id/* sound/drivers/aloop.c 805 */;
	struct loopback_ops {
		int (*open)(struct loopback_pcm *dpcm);
		int (*start)(struct loopback_pcm *dpcm);
		int (*stop)(struct loopback_pcm *dpcm);
		int (*stop_sync)(struct loopback_pcm *dpcm);
		int (*close_substream)(struct loopback_pcm *dpcm);
		int (*close_cable)(struct loopback_pcm *dpcm);
		unsigned int (*pos_update)(struct loopback_cable *cable);
		void (*dpcm_info)(struct loopback_pcm *dpcm,
				  struct snd_info_buffer *buffer);
	} cocci_id/* sound/drivers/aloop.c 69 */;
	struct loopback_pcm cocci_id/* sound/drivers/aloop.c 67 */;
	struct loopback_cable cocci_id/* sound/drivers/aloop.c 66 */;
	struct timer_list *cocci_id/* sound/drivers/aloop.c 656 */;
	unsigned long cocci_id/* sound/drivers/aloop.c 578 */;
	snd_pcm_uframes_t cocci_id/* sound/drivers/aloop.c 541 */;
	bool cocci_id/* sound/drivers/aloop.c 51 */;
	char *cocci_id/* sound/drivers/aloop.c 503 */;
	struct snd_pcm_runtime *cocci_id/* sound/drivers/aloop.c 502 */;
	bool cocci_id/* sound/drivers/aloop.c 42 */[SNDRV_CARDS];
	char *cocci_id/* sound/drivers/aloop.c 41 */[SNDRV_CARDS];
	int cocci_id/* sound/drivers/aloop.c 40 */[SNDRV_CARDS];
	struct snd_card *cocci_id/* sound/drivers/aloop.c 325 */;
	struct loopback_setup *cocci_id/* sound/drivers/aloop.c 188 */;
	void __exit cocci_id/* sound/drivers/aloop.c 1846 */;
	void cocci_id/* sound/drivers/aloop.c 1846 */;
	struct platform_device *cocci_id/* sound/drivers/aloop.c 1822 */;
	int cocci_id/* sound/drivers/aloop.c 1813 */;
	int __init cocci_id/* sound/drivers/aloop.c 1811 */;
	struct platform_driver cocci_id/* sound/drivers/aloop.c 1793 */;
	struct device *cocci_id/* sound/drivers/aloop.c 1777 */;
	struct loopback cocci_id/* sound/drivers/aloop.c 1722 */;
	unsigned long long cocci_id/* sound/drivers/aloop.c 171 */;
	char cocci_id/* sound/drivers/aloop.c 1699 */[64];
	struct loopback *cocci_id/* sound/drivers/aloop.c 1698 */;
	struct snd_info_buffer *cocci_id/* sound/drivers/aloop.c 1696 */;
	struct snd_info_entry *cocci_id/* sound/drivers/aloop.c 1695 */;
	char cocci_id/* sound/drivers/aloop.c 1665 */[32];
	struct loopback_pcm *cocci_id/* sound/drivers/aloop.c 166 */;
	unsigned int cocci_id/* sound/drivers/aloop.c 166 */;
	struct platform_device *cocci_id/* sound/drivers/aloop.c 164 */[SNDRV_CARDS];
	struct snd_pcm *cocci_id/* sound/drivers/aloop.c 1560 */;
	struct snd_kcontrol_new cocci_id/* sound/drivers/aloop.c 1508 */[];
	struct snd_ctl_elem_info *cocci_id/* sound/drivers/aloop.c 1485 */;
	struct snd_ctl_elem_value *cocci_id/* sound/drivers/aloop.c 1419 */;
	struct snd_kcontrol *cocci_id/* sound/drivers/aloop.c 1418 */;
	struct loopback_pcm {
		struct loopback *loopback;
		struct snd_pcm_substream *substream;
		struct loopback_cable *cable;
		unsigned int pcm_buffer_size;
		unsigned int buf_pos;
		unsigned int silent_size;
		unsigned int pcm_period_size;
		unsigned int pcm_bps;
		unsigned int pcm_salign;
		unsigned int pcm_rate_shift;
		unsigned int period_update_pending:1;
		unsigned int irq_pos;
		unsigned int period_size_frac;
		unsigned int last_drift;
		unsigned long last_jiffies;
		struct timer_list timer;
	} cocci_id/* sound/drivers/aloop.c 139 */;
	const struct snd_pcm_ops cocci_id/* sound/drivers/aloop.c 1305 */;
	struct loopback {
		struct snd_card *card;
		struct mutex cable_lock;
		struct loopback_cable *cables[MAX_PCM_SUBSTREAMS][2];
		struct snd_pcm *pcm[2];
		struct loopback_setup setup[MAX_PCM_SUBSTREAMS][2];
		const char *timer_source;
	} cocci_id/* sound/drivers/aloop.c 130 */;
	struct loopback_setup {
		unsigned int notify:1;
		unsigned int rate_shift;
		unsigned int format;
		unsigned int rate;
		unsigned int channels;
		struct snd_ctl_elem_id active_id;
		struct snd_ctl_elem_id format_id;
		struct snd_ctl_elem_id rate_id;
		struct snd_ctl_elem_id channels_id;
	} cocci_id/* sound/drivers/aloop.c 118 */;
	void *cocci_id/* sound/drivers/aloop.c 1143 */;
	struct snd_timer_id cocci_id/* sound/drivers/aloop.c 1104 */;
	const char *const cocci_id/* sound/drivers/aloop.c 1044 */;
	struct snd_timer_id *cocci_id/* sound/drivers/aloop.c 1041 */;
	const char *cocci_id/* sound/drivers/aloop.c 1040 */;
	struct loopback_ops cocci_id/* sound/drivers/aloop.c 1030 */;
	struct loopback_cable *cocci_id/* sound/drivers/aloop.c 1002 */;
}
