cocci_test_suite() {
	struct snd_timer_instance cocci_id/* sound/core/timer.c 953 */;
	const char *cocci_id/* sound/core/timer.c 92 */;
	struct snd_device_ops cocci_id/* sound/core/timer.c 893 */;
	struct snd_card *cocci_id/* sound/core/timer.c 888 */;
	void cocci_id/* sound/core/timer.c 87 */(struct snd_timer *timer,
						 unsigned long ticks_left);
	int cocci_id/* sound/core/timer.c 85 */(struct snd_device *device);
	int cocci_id/* sound/core/timer.c 82 */(struct snd_timer *timer);
	struct list_head *cocci_id/* sound/core/timer.c 759 */;
	bool cocci_id/* sound/core/timer.c 484 */;
	struct snd_timer_user {
		struct snd_timer_instance *timeri;
		int tread;
		unsigned long ticks;
		unsigned long overrun;
		int qhead;
		int qtail;
		int qused;
		int queue_size;
		bool disconnected;
		struct snd_timer_read *queue;
		struct snd_timer_tread *tqueue;
		spinlock_t qlock;
		unsigned long last_resolution;
		unsigned int filter;
		struct timespec tstamp;
		wait_queue_head_t qchange_sleep;
		struct fasync_struct *fasync;
		struct mutex ioctl_lock;
	} cocci_id/* sound/core/timer.c 47 */;
	struct timespec cocci_id/* sound/core/timer.c 456 */;
	struct device *cocci_id/* sound/core/timer.c 411 */;
	struct device **cocci_id/* sound/core/timer.c 344 */;
	void cocci_id/* sound/core/timer.c 236 */(struct snd_timer_instance *timeri,
						  struct device **card_devp_to_put);
	void __exit cocci_id/* sound/core/timer.c 2208 */;
	void cocci_id/* sound/core/timer.c 2208 */;
	int __init cocci_id/* sound/core/timer.c 2174 */;
	struct device cocci_id/* sound/core/timer.c 2168 */;
	const struct file_operations cocci_id/* sound/core/timer.c 2146 */;
	__poll_t cocci_id/* sound/core/timer.c 2120 */;
	poll_table *cocci_id/* sound/core/timer.c 2120 */;
	wait_queue_entry_t cocci_id/* sound/core/timer.c 2064 */;
	struct snd_timer_read cocci_id/* sound/core/timer.c 2059 */;
	loff_t *cocci_id/* sound/core/timer.c 2051 */;
	size_t cocci_id/* sound/core/timer.c 2051 */;
	char __user *cocci_id/* sound/core/timer.c 2050 */;
	ssize_t cocci_id/* sound/core/timer.c 2050 */;
	struct snd_timer *cocci_id/* sound/core/timer.c 200 */;
	int cocci_id/* sound/core/timer.c 1985 */;
	int __user *cocci_id/* sound/core/timer.c 1975 */;
	void __user *cocci_id/* sound/core/timer.c 1974 */;
	struct snd_timer_user *cocci_id/* sound/core/timer.c 1973 */;
	unsigned long cocci_id/* sound/core/timer.c 1971 */;
	struct file *cocci_id/* sound/core/timer.c 1970 */;
	unsigned int cocci_id/* sound/core/timer.c 1970 */;
	long cocci_id/* sound/core/timer.c 1970 */;
	enum{SNDRV_TIMER_IOCTL_START_OLD=_IO('T', 0x20), SNDRV_TIMER_IOCTL_STOP_OLD=_IO('T',
											0x21), SNDRV_TIMER_IOCTL_CONTINUE_OLD=_IO('T',
																  0x22), SNDRV_TIMER_IOCTL_PAUSE_OLD=_IO('T',
																					 0x23),} cocci_id/* sound/core/timer.c 1963 */;
	struct snd_timer_status cocci_id/* sound/core/timer.c 1882 */;
	struct snd_timer_status __user *cocci_id/* sound/core/timer.c 1879 */;
	u64 cocci_id/* sound/core/timer.c 1794 */;
	struct snd_timer_params cocci_id/* sound/core/timer.c 1781 */;
	struct snd_timer_params __user *cocci_id/* sound/core/timer.c 1778 */;
	struct snd_timer_info *cocci_id/* sound/core/timer.c 1751 */;
	struct snd_timer_info __user *cocci_id/* sound/core/timer.c 1748 */;
	void *cocci_id/* sound/core/timer.c 1734 */;
	struct snd_timer_instance *cocci_id/* sound/core/timer.c 171 */;
	char cocci_id/* sound/core/timer.c 1708 */[32];
	struct snd_timer_select cocci_id/* sound/core/timer.c 1707 */;
	struct snd_timer_select __user *cocci_id/* sound/core/timer.c 1704 */;
	struct snd_timer_gstatus cocci_id/* sound/core/timer.c 1671 */;
	struct snd_timer_gstatus __user *cocci_id/* sound/core/timer.c 1669 */;
	struct snd_timer_gparams cocci_id/* sound/core/timer.c 1661 */;
	struct snd_timer_gparams __user *cocci_id/* sound/core/timer.c 1659 */;
	struct snd_timer_gparams *cocci_id/* sound/core/timer.c 1633 */;
	struct snd_timer_ginfo *cocci_id/* sound/core/timer.c 1594 */;
	struct snd_timer_ginfo __user *cocci_id/* sound/core/timer.c 1592 */;
	struct snd_timer cocci_id/* sound/core/timer.c 1514 */;
	struct snd_timer_id __user *cocci_id/* sound/core/timer.c 1500 */;
	struct inode *cocci_id/* sound/core/timer.c 1438 */;
	struct snd_timer_tread *cocci_id/* sound/core/timer.c 1414 */;
	struct snd_timer_read *cocci_id/* sound/core/timer.c 1413 */;
	struct snd_timer_tread cocci_id/* sound/core/timer.c 1325 */;
	struct snd_timer_id *cocci_id/* sound/core/timer.c 128 */;
	void __init cocci_id/* sound/core/timer.c 1247 */;
	struct snd_info_entry *cocci_id/* sound/core/timer.c 1245 */;
	struct snd_info_buffer *cocci_id/* sound/core/timer.c 1200 */;
	struct snd_timer_system_private *cocci_id/* sound/core/timer.c 1174 */;
	struct snd_timer_hardware cocci_id/* sound/core/timer.c 1156 */;
	struct timer_list *cocci_id/* sound/core/timer.c 1101 */;
	struct snd_timer_system_private {
		struct timer_list tlist;
		struct snd_timer *snd_timer;
		unsigned long last_expires;
		unsigned long last_jiffies;
		unsigned long correction;
	} cocci_id/* sound/core/timer.c 1093 */;
	struct snd_device cocci_id/* sound/core/timer.c 1081 */;
	struct snd_timer_id cocci_id/* sound/core/timer.c 1062 */;
	struct snd_timer **cocci_id/* sound/core/timer.c 1060 */;
	char *cocci_id/* sound/core/timer.c 1060 */;
	struct timespec *cocci_id/* sound/core/timer.c 1028 */;
	struct snd_device *cocci_id/* sound/core/timer.c 1012 */;
}
