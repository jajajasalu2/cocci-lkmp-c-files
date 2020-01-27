cocci_test_suite() {
	ktime_t cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 978 */;
	ktime_t *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 944 */;
	const struct smi_info *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 943 */;
	enum si_sm_result cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 884 */;
	enum si_stat_indexes{SI_STAT_short_timeouts=0, SI_STAT_long_timeouts, SI_STAT_idles, SI_STAT_interrupts, SI_STAT_attentions, SI_STAT_flag_fetches, SI_STAT_hosed_count, SI_STAT_complete_transactions, SI_STAT_events, SI_STAT_watchdog_pretimeouts, SI_STAT_incoming_messages, SI_NUM_STATS,} cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 80 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 795 */[2];
	enum si_intf_state{SI_NORMAL, SI_GETTING_FLAGS, SI_GETTING_EVENTS, SI_CLEARING_FLAGS, SI_GETTING_MESSAGES, SI_CHECKING_ENABLES, SI_SETTING_ENABLES,} cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 57 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 564 */[4];
	u8 cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 522 */;
	bool cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 520 */;
	void cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 520 */;
	bool *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 498 */;
	struct smi_info *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 444 */;
	struct ipmi_smi_msg *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 444 */;
	struct timespec64 cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 268 */;
	char *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 266 */;
	void cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 263 */(void);
	void cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 262 */(struct smi_info *smi_info);
	int cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 261 */(struct smi_info *smi);
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 256 */[IPMI_MAX_INTFS];
	int cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 253 */[IPMI_MAX_INTFS];
	enum si_type cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 2243 */;
	enum ipmi_addr_src cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 2081 */;
	int __init cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 2078 */;
	struct ipmi_device_id *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1794 */;
	struct notifier_block cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1780 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1769 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1768 */;
	void *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1765 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1764 */;
	struct notifier_block *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1763 */;
	const struct attribute_group cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1671 */;
	struct attribute *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1653 */[];
	struct device_attribute *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1611 */;
	struct device *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1610 */;
	ssize_t cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1610 */;
	int cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1448 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1350 */[3];
	u8 *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1348 */;
	struct smi_info {
		int si_num;
		struct ipmi_smi *intf;
		struct si_sm_data *si_sm;
		const struct si_sm_handlers *handlers;
		spinlock_t si_lock;
		struct ipmi_smi_msg *waiting_msg;
		struct ipmi_smi_msg *curr_msg;
		enum si_intf_state si_state;
		struct si_sm_io io;
		int (*oem_data_avail_handler)(struct smi_info *smi_info);
#define RECEIVE_MSG_AVAIL 0x01
#define EVENT_MSG_BUFFER_FULL 0x02
#define WDT_PRE_TIMEOUT_INT 0x08
#define OEM0_DATA_AVAIL 0x20
#define OEM1_DATA_AVAIL 0x40
#define OEM2_DATA_AVAIL 0x80
#define OEM_DATA_AVAIL (OEM0_DATA_AVAIL | OEM1_DATA_AVAIL | OEM2_DATA_AVAIL)
			unsigned char msg_flags;
		bool has_event_buffer;
		atomic_t req_events;
		bool run_to_completion;
		struct timer_list si_timer;
		bool timer_can_start;
		bool timer_running;
		unsigned long last_timeout_jiffies;
		atomic_t need_watch;
		bool interrupt_disabled;
		bool supports_event_msg_buff;
		bool cannot_disable_irq;
		bool irq_enable_broken;
		bool in_maintenance_mode;
		bool got_attn;
		struct ipmi_device_id device_id;
		bool dev_group_added;
		atomic_t stats[SI_NUM_STATS];
		struct task_struct *thread;
		struct list_head link;
	} cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 125 */;
	struct si_sm_io *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1239 */;
	const char *const cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1223 */[];
	const struct ipmi_smi_handlers cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1205 */;
	void cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1204 */(void *send_info);
	struct ipmi_smi_info *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1183 */;
	struct ipmi_smi *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1138 */;
	irqreturn_t cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1115 */;
	long cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1077 */;
	struct timer_list *cocci_id/* drivers/char/ipmi/ipmi_si_intf.c 1071 */;
}
