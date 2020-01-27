cocci_test_suite() {
	const struct kernel_param *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 87 */;
	struct ipmi_system_interface_addr cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 864 */;
	struct ipmi_smi_watcher *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 774 */;
	struct watcher_entry {
		int intf_num;
		struct ipmi_smi *intf;
		struct list_head link;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 720 */;
	struct list_head cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 686 */;
	char cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 67 */[16];
	enum ipmi_addr_src cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 639 */;
	const char *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 639 */;
	const char *const cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 634 */[];
	struct srcu_struct cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 621 */;
	enum ipmi_panic_event_op cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 62 */;
	struct platform_driver cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 608 */;
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 602 */(struct ipmi_smi *intf,
								  struct ipmi_device_id *id);
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 599 */(struct ipmi_smi *intf,
								  struct ipmi_device_id *id,
								  bool guid_set,
								  guid_t *guid,
								  int intf_num);
	void cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 597 */(struct ipmi_smi *intf);
	void __exit cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 5160 */;
	int __init cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 5147 */;
	struct notifier_block cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 5116 */;
	struct notifier_block *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 5046 */;
	enum ipmi_panic_event_op{IPMI_SEND_PANIC_EVENT_NONE, IPMI_SEND_PANIC_EVENT, IPMI_SEND_PANIC_EVENT_STRING,} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 50 */;
	struct ipmi_addr cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4903 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4901 */[16];
	atomic_t cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4823 */;
	struct ipmi_recv_msg cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4806 */;
	struct timer_list *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4739 */;
	struct timer_list cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4735 */;
	struct ipmi_smi_msg *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4610 */;
	unsigned long *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4580 */;
	struct list_head *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4578 */;
	struct seq_table *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4577 */;
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 44 */(struct ipmi_smi *intf,
								 struct ipmi_smi_msg *msg);
	struct ipmi_smi {
		struct module *owner;
		int intf_num;
		struct kref refcount;
		bool in_shutdown;
		struct list_head link;
		struct list_head users;
		struct srcu_struct users_srcu;
		wait_queue_head_t waitq;
		struct mutex bmc_reg_mutex;
		struct bmc_device tmp_bmc;
		struct bmc_device *bmc;
		bool bmc_registered;
		struct list_head bmc_link;
		char *my_dev_name;
		bool in_bmc_register;
		struct work_struct bmc_reg_work;
		const struct ipmi_smi_handlers *handlers;
		void *send_info;
		struct device *si_dev;
		spinlock_t seq_lock;
		struct seq_table seq_table[IPMI_IPMB_NUM_SEQ];
		int curr_seq;
		spinlock_t waiting_rcv_msgs_lock;
		struct list_head waiting_rcv_msgs;
		atomic_t watchdog_pretimeouts_to_deliver;
		struct tasklet_struct recv_tasklet;
		spinlock_t xmit_msgs_lock;
		struct list_head xmit_msgs;
		struct ipmi_smi_msg *curr_msg;
		struct list_head hp_xmit_msgs;
		struct mutex cmd_rcvrs_mutex;
		struct list_head cmd_rcvrs;
		spinlock_t events_lock;
		struct list_head waiting_events;
		unsigned int waiting_events_count;
		char delivering_events;
		char event_msg_printed;
		atomic_t event_waiters;
		unsigned int ticks_to_req_ev;
		spinlock_t watch_lock;
		unsigned int command_waiters;
		unsigned int watchdog_waiters;
		unsigned int response_waiters;
		unsigned int last_watch_mask;
		unsigned char event_receiver;
		unsigned char event_receiver_lun;
		unsigned char local_sel_device;
		unsigned char local_event_generator;
		int maintenance_mode;
		bool maintenance_mode_enable;
		int auto_maintenance_timeout;
		spinlock_t maintenance_mode_lock;
		int ipmb_maintenance_mode_timeout;
		void (*null_user_handler)(struct ipmi_smi *intf,
					  struct ipmi_recv_msg *msg);
		int curr_channel;
		struct ipmi_channel_set *channel_list;
		unsigned int curr_working_cset;
		struct ipmi_channel_set wchannels[2];
		struct ipmi_my_addrinfo addrinfo[IPMI_MAX_CHANNELS];
		bool channels_ready;
		atomic_t stats[IPMI_NUM_STATS];
		int run_to_completion;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 431 */;
	void cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 41 */(unsigned long);
	struct ipmi_system_interface_addr *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 4055 */;
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 40 */(void);
	struct ipmi_recv_msg *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 39 */(void);
	struct ipmi_lan_addr cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3788 */;
	struct ipmi_ipmb_addr cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3612 */;
	struct ipmi_smi_msg cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3552 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3514 */;
	const struct ipmi_smi_handlers *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3373 */;
	struct module *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3372 */;
	struct ipmi_channel_set cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3319 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3310 */;
	enum ipmi_stat_indexes{IPMI_STAT_sent_invalid_commands=0, IPMI_STAT_sent_local_commands, IPMI_STAT_handled_local_responses, IPMI_STAT_unhandled_local_responses, IPMI_STAT_sent_ipmb_commands, IPMI_STAT_sent_ipmb_command_errs, IPMI_STAT_retransmitted_ipmb_commands, IPMI_STAT_timed_out_ipmb_commands, IPMI_STAT_timed_out_ipmb_broadcasts, IPMI_STAT_sent_ipmb_responses, IPMI_STAT_handled_ipmb_responses, IPMI_STAT_invalid_ipmb_responses, IPMI_STAT_unhandled_ipmb_responses, IPMI_STAT_sent_lan_commands, IPMI_STAT_sent_lan_command_errs, IPMI_STAT_retransmitted_lan_commands, IPMI_STAT_timed_out_lan_commands, IPMI_STAT_sent_lan_responses, IPMI_STAT_handled_lan_responses, IPMI_STAT_invalid_lan_responses, IPMI_STAT_unhandled_lan_responses, IPMI_STAT_handled_commands, IPMI_STAT_invalid_commands, IPMI_STAT_unhandled_commands, IPMI_STAT_invalid_events, IPMI_STAT_events, IPMI_STAT_dropped_rexmit_ipmb_commands, IPMI_STAT_dropped_rexmit_lan_commands, IPMI_NUM_STATS,} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 330 */;
	struct ipmi_channel *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3236 */;
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 322 */(struct ipmi_smi *intf,
								  struct bmc_device *bmc,
								  struct ipmi_device_id *id,
								  bool *guid_set,
								  guid_t *guid);
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3204 */[1];
	struct kernel_ipmi_msg cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3203 */;
	void cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 3180 */;
	struct bmc_device {
		struct platform_device pdev;
		struct list_head intfs;
		struct ipmi_device_id id;
		struct ipmi_device_id fetch_id;
		int dyn_id_set;
		unsigned long dyn_id_expiry;
		struct mutex dyn_mutex;
		guid_t guid;
		guid_t fetch_guid;
		int dyn_guid_set;
		struct kref usecount;
		struct work_struct remove_work;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 306 */;
	struct bmc_device cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2912 */;
	struct kref *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2910 */;
	struct work_struct *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2899 */;
	struct prod_dev_id cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2876 */;
	struct ipmi_my_addrinfo {
		unsigned char address;
		unsigned char lun;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 287 */;
	const struct prod_dev_id *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2854 */;
	struct prod_dev_id {
		unsigned int product_id;
		unsigned char device_id;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2847 */;
	struct device_driver *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2833 */;
	struct ipmi_channel_set {
		struct ipmi_channel c[IPMI_MAX_CHANNELS];
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 283 */;
	const guid_t *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2816 */;
	const void *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2814 */;
	struct device *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2814 */;
	const struct device_type cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2810 */;
	const struct attribute_group *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2805 */[];
	const struct attribute_group cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2800 */;
	struct ipmi_channel {
		unsigned char medium;
		unsigned char protocol;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 278 */;
	struct attribute *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2778 */;
	umode_t cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2777 */;
	struct kobject *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2777 */;
	struct attribute *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2763 */[];
	char *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2678 */;
	struct device_attribute *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2677 */;
	ssize_t cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2676 */;
	guid_t cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2515 */;
	struct ipmi_device_id cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2513 */;
	struct ipmi_smi cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2469 */;
	bool cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2460 */;
	guid_t *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2456 */;
	bool *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2456 */;
	struct ipmi_device_id *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2455 */;
	struct ipmi_smi *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2454 */;
	struct bmc_device *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2454 */;
	int cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2454 */;
	struct seq_table {
		unsigned int inuse:1;
		unsigned int broadcast:1;
		unsigned long timeout;
		unsigned long orig_timeout;
		unsigned int retries_left;
		long seqid;
		struct ipmi_recv_msg *recv_msg;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 239 */;
	struct ipmi_recv_msg *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2361 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2271 */;
	struct ipmi_addr *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2270 */;
	struct cmd_rcvr {
		struct list_head link;
		struct ipmi_user *user;
		unsigned char netfn;
		unsigned char cmd;
		unsigned int chans;
		struct cmd_rcvr *next;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 220 */;
	void *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 2185 */;
	int *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 203 */;
	struct ipmi_lan_addr *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1770 */;
	struct ipmi_user {
		struct list_head link;
		struct ipmi_user *self;
		struct srcu_struct release_barrier;
		struct kref refcount;
		const struct ipmi_user_hndl *handler;
		void *handler_data;
		struct ipmi_smi *intf;
		bool gets_events;
		struct work_struct remove_work;
	} cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 177 */;
	long cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1729 */;
	struct ipmi_ipmb_addr *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1728 */;
	struct kernel_ipmi_msg *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1727 */;
	struct cmd_rcvr *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1277 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1276 */;
	struct ipmi_user *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1272 */;
	struct ipmi_user cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1266 */;
	struct ipmi_smi_info *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1238 */;
	struct ipmi_user **cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1160 */;
	const struct ipmi_user_hndl *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1158 */;
	const struct kernel_param_ops cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 110 */;
	struct ipmi_recv_msg **cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1057 */;
	short cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1053 */;
	long *cocci_id/* drivers/char/ipmi/ipmi_msghandler.c 1003 */;
}
