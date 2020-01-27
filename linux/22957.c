cocci_test_suite() {
	struct snd_seq_event_cell *cocci_id/* sound/core/seq/seq_clientmgr.c 932 */;
	struct mutex *cocci_id/* sound/core/seq/seq_clientmgr.c 930 */;
	struct file *cocci_id/* sound/core/seq/seq_clientmgr.c 928 */;
	struct snd_seq_addr cocci_id/* sound/core/seq/seq_clientmgr.c 761 */;
	unsigned short cocci_id/* sound/core/seq/seq_clientmgr.c 75 */;
	int cocci_id/* sound/core/seq/seq_clientmgr.c 69 */(struct snd_seq_client *client,
							    struct snd_seq_event *event,
							    int filter,
							    int atomic,
							    int hop);
	struct snd_seq_port_subs_info *cocci_id/* sound/core/seq/seq_clientmgr.c 670 */;
	struct snd_seq_subscribers *cocci_id/* sound/core/seq/seq_clientmgr.c 666 */;
	int cocci_id/* sound/core/seq/seq_clientmgr.c 66 */(struct snd_seq_client *client,
							    struct snd_seq_event *event,
							    int err,
							    int atomic,
							    int hop);
	struct snd_seq_usage cocci_id/* sound/core/seq/seq_clientmgr.c 61 */;
	struct snd_seq_client *cocci_id/* sound/core/seq/seq_clientmgr.c 60 */[SNDRV_SEQ_MAX_CLIENTS];
	char cocci_id/* sound/core/seq/seq_clientmgr.c 59 */[SNDRV_SEQ_MAX_CLIENTS];
	struct snd_seq_event cocci_id/* sound/core/seq/seq_clientmgr.c 537 */;
	struct snd_seq_event *cocci_id/* sound/core/seq/seq_clientmgr.c 534 */;
	struct snd_seq_client *cocci_id/* sound/core/seq/seq_clientmgr.c 533 */;
	int cocci_id/* sound/core/seq/seq_clientmgr.c 533 */;
	struct snd_seq_client_port *cocci_id/* sound/core/seq/seq_clientmgr.c 488 */;
	unsigned int cocci_id/* sound/core/seq/seq_clientmgr.c 488 */;
	char __force *cocci_id/* sound/core/seq/seq_clientmgr.c 453 */;
	struct snd_seq_fifo *cocci_id/* sound/core/seq/seq_clientmgr.c 405 */;
	loff_t *cocci_id/* sound/core/seq/seq_clientmgr.c 402 */;
	char __user *cocci_id/* sound/core/seq/seq_clientmgr.c 401 */;
	ssize_t cocci_id/* sound/core/seq/seq_clientmgr.c 401 */;
	size_t cocci_id/* sound/core/seq/seq_clientmgr.c 401 */;
	struct snd_seq_user_client *cocci_id/* sound/core/seq/seq_clientmgr.c 324 */;
	struct inode *cocci_id/* sound/core/seq/seq_clientmgr.c 320 */;
	struct device cocci_id/* sound/core/seq/seq_clientmgr.c 2505 */;
	const struct file_operations cocci_id/* sound/core/seq/seq_clientmgr.c 2492 */;
	struct snd_info_buffer *cocci_id/* sound/core/seq/seq_clientmgr.c 2446 */;
	struct snd_info_entry *cocci_id/* sound/core/seq/seq_clientmgr.c 2445 */;
	struct snd_seq_subscribers cocci_id/* sound/core/seq/seq_clientmgr.c 2401 */;
	struct list_head *cocci_id/* sound/core/seq/seq_clientmgr.c 2389 */;
	char *cocci_id/* sound/core/seq/seq_clientmgr.c 2387 */;
	poll_table *cocci_id/* sound/core/seq/seq_clientmgr.c 2363 */;
	va_list cocci_id/* sound/core/seq/seq_clientmgr.c 2185 */;
	const char *cocci_id/* sound/core/seq/seq_clientmgr.c 2182 */;
	struct snd_card *cocci_id/* sound/core/seq/seq_clientmgr.c 2181 */;
	void __user *cocci_id/* sound/core/seq/seq_clientmgr.c 2164 */;
	const void __user *cocci_id/* sound/core/seq/seq_clientmgr.c 2152 */;
	int __init cocci_id/* sound/core/seq/seq_clientmgr.c 215 */;
	void cocci_id/* sound/core/seq/seq_clientmgr.c 215 */;
	const struct ioctl_handler *cocci_id/* sound/core/seq/seq_clientmgr.c 2130 */;
	union {
		int pversion;
		int client_id;
		struct snd_seq_system_info system_info;
		struct snd_seq_running_info running_info;
		struct snd_seq_client_info client_info;
		struct snd_seq_port_info port_info;
		struct snd_seq_port_subscribe port_subscribe;
		struct snd_seq_queue_info queue_info;
		struct snd_seq_queue_status queue_status;
		struct snd_seq_queue_tempo tempo;
		struct snd_seq_queue_timer queue_timer;
		struct snd_seq_queue_client queue_client;
		struct snd_seq_client_pool client_pool;
		struct snd_seq_remove_events remove_events;
		struct snd_seq_query_subs query_subs;
	} cocci_id/* sound/core/seq/seq_clientmgr.c 2113 */;
	long cocci_id/* sound/core/seq/seq_clientmgr.c 2108 */;
	const struct ioctl_handler {
		unsigned int cmd;
		int (*func)(struct snd_seq_client *client, void *arg);
	} cocci_id/* sound/core/seq/seq_clientmgr.c 2070 */[];
	struct snd_seq_usage *cocci_id/* sound/core/seq/seq_clientmgr.c 202 */;
	struct snd_seq_query_subs *cocci_id/* sound/core/seq/seq_clientmgr.c 1951 */;
	struct snd_seq_remove_events *cocci_id/* sound/core/seq/seq_clientmgr.c 1897 */;
	struct snd_seq_client_pool *cocci_id/* sound/core/seq/seq_clientmgr.c 1823 */;
	struct snd_seq_queue_client *cocci_id/* sound/core/seq/seq_clientmgr.c 1789 */;
	struct snd_seq_queue_timer *cocci_id/* sound/core/seq/seq_clientmgr.c 1724 */;
	bool cocci_id/* sound/core/seq/seq_clientmgr.c 171 */;
	struct snd_seq_queue_tempo *cocci_id/* sound/core/seq/seq_clientmgr.c 1678 */;
	struct snd_seq_timer *cocci_id/* sound/core/seq/seq_clientmgr.c 1651 */;
	struct snd_seq_queue_status *cocci_id/* sound/core/seq/seq_clientmgr.c 1649 */;
	struct snd_seq_queue *cocci_id/* sound/core/seq/seq_clientmgr.c 1546 */;
	struct snd_seq_queue_info *cocci_id/* sound/core/seq/seq_clientmgr.c 1545 */;
	struct snd_seq_port_subscribe *cocci_id/* sound/core/seq/seq_clientmgr.c 1413 */;
	struct snd_seq_port_callback *cocci_id/* sound/core/seq/seq_clientmgr.c 1298 */;
	struct snd_seq_port_info *cocci_id/* sound/core/seq/seq_clientmgr.c 1296 */;
	char cocci_id/* sound/core/seq/seq_clientmgr.c 125 */[SNDRV_CARDS];
	char cocci_id/* sound/core/seq/seq_clientmgr.c 124 */[SNDRV_SEQ_GLOBAL_CLIENTS];
	struct snd_seq_client_info *cocci_id/* sound/core/seq/seq_clientmgr.c 1223 */;
	struct snd_seq_running_info *cocci_id/* sound/core/seq/seq_clientmgr.c 1190 */;
	struct snd_seq_system_info *cocci_id/* sound/core/seq/seq_clientmgr.c 1172 */;
	int *cocci_id/* sound/core/seq/seq_clientmgr.c 1163 */;
	void *cocci_id/* sound/core/seq/seq_clientmgr.c 1161 */;
	__poll_t cocci_id/* sound/core/seq/seq_clientmgr.c 1122 */;
	void __force *cocci_id/* sound/core/seq/seq_clientmgr.c 1086 */;
	unsigned long cocci_id/* sound/core/seq/seq_clientmgr.c 105 */;
	const char __user *cocci_id/* sound/core/seq/seq_clientmgr.c 1019 */;
}
