cocci_test_suite() {
	unsigned long cocci_id/* sound/pci/ctxfi/cttimer.c 71 */;
	unsigned int cocci_id/* sound/pci/ctxfi/cttimer.c 69 */;
	struct ct_atc_pcm *cocci_id/* sound/pci/ctxfi/cttimer.c 68 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/ctxfi/cttimer.c 67 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/ctxfi/cttimer.c 66 */;
	struct ct_timer_instance *cocci_id/* sound/pci/ctxfi/cttimer.c 65 */;
	struct timer_list *cocci_id/* sound/pci/ctxfi/cttimer.c 63 */;
	void cocci_id/* sound/pci/ctxfi/cttimer.c 63 */;
	struct ct_timer {
		spinlock_t lock;
		spinlock_t list_lock;
		struct ct_atc *atc;
		const struct ct_timer_ops *ops;
		struct list_head instance_head;
		struct list_head running_head;
		unsigned int wc;
		unsigned int irq_handling:1;
		unsigned int reprogram:1;
		unsigned int running:1;
	} cocci_id/* sound/pci/ctxfi/cttimer.c 45 */;
	struct hw *cocci_id/* sound/pci/ctxfi/cttimer.c 433 */;
	struct ct_timer *cocci_id/* sound/pci/ctxfi/cttimer.c 431 */;
	struct ct_atc *cocci_id/* sound/pci/ctxfi/cttimer.c 405 */;
	void *cocci_id/* sound/pci/ctxfi/cttimer.c 396 */;
	struct ct_timer_instance {
		spinlock_t lock;
		struct ct_timer *timer_base;
		struct ct_atc_pcm *apcm;
		struct snd_pcm_substream *substream;
		struct timer_list timer;
		struct list_head instance_list;
		struct list_head running_list;
		unsigned int position;
		unsigned int frag_count;
		unsigned int running:1;
		unsigned int need_update:1;
	} cocci_id/* sound/pci/ctxfi/cttimer.c 30 */;
	int cocci_id/* sound/pci/ctxfi/cttimer.c 247 */;
	u64 cocci_id/* sound/pci/ctxfi/cttimer.c 212 */;
	struct ct_timer_ops {
		void (*init)(struct ct_timer_instance *);
		void (*prepare)(struct ct_timer_instance *);
		void (*start)(struct ct_timer_instance *);
		void (*stop)(struct ct_timer_instance *);
		void (*free_instance)(struct ct_timer_instance *);
		void (*interrupt)(struct ct_timer *);
		void (*free_global)(struct ct_timer *);
	} cocci_id/* sound/pci/ctxfi/cttimer.c 19 */;
	bool cocci_id/* sound/pci/ctxfi/cttimer.c 17 */;
	const struct ct_timer_ops cocci_id/* sound/pci/ctxfi/cttimer.c 127 */;
}
