cocci_test_suite() {
	struct wakeup_source *cocci_id/* kernel/time/alarmtimer.c 90 */;
	struct platform_device *cocci_id/* kernel/time/alarmtimer.c 877 */;
	int __init cocci_id/* kernel/time/alarmtimer.c 875 */;
	struct platform_driver cocci_id/* kernel/time/alarmtimer.c 862 */;
	struct class_interface *cocci_id/* kernel/time/alarmtimer.c 86 */;
	const struct dev_pm_ops cocci_id/* kernel/time/alarmtimer.c 857 */;
	const struct k_clock cocci_id/* kernel/time/alarmtimer.c 838 */;
	struct alarm cocci_id/* kernel/time/alarmtimer.c 801 */;
	struct restart_block *cocci_id/* kernel/time/alarmtimer.c 800 */;
	const struct timespec64 *cocci_id/* kernel/time/alarmtimer.c 797 */;
	long __sched cocci_id/* kernel/time/alarmtimer.c 776 */;
	struct timespec64 cocci_id/* kernel/time/alarmtimer.c 747 */;
	void *cocci_id/* kernel/time/alarmtimer.c 726 */;
	struct rtc_device *cocci_id/* kernel/time/alarmtimer.c 72 */;
	struct task_struct *cocci_id/* kernel/time/alarmtimer.c 707 */;
	struct alarm_base *cocci_id/* kernel/time/alarmtimer.c 668 */;
	clockid_t cocci_id/* kernel/time/alarmtimer.c 666 */;
	struct timespec64 *cocci_id/* kernel/time/alarmtimer.c 666 */;
	const clockid_t cocci_id/* kernel/time/alarmtimer.c 649 */;
	bool cocci_id/* kernel/time/alarmtimer.c 629 */;
	struct rtc_timer cocci_id/* kernel/time/alarmtimer.c 61 */;
	unsigned long cocci_id/* kernel/time/alarmtimer.c 539 */;
	struct k_itimer cocci_id/* kernel/time/alarmtimer.c 536 */;
	struct k_itimer *cocci_id/* kernel/time/alarmtimer.c 536 */;
	enum alarmtimer_restart cocci_id/* kernel/time/alarmtimer.c 533 */;
	s64 cocci_id/* kernel/time/alarmtimer.c 452 */;
	u64 cocci_id/* kernel/time/alarmtimer.c 441 */;
	int cocci_id/* kernel/time/alarmtimer.c 429 */;
	struct alarm_base {
		spinlock_t lock;
		struct timerqueue_head timerqueue;
		ktime_t (*gettime)(void);
		clockid_t base_clockid;
	} cocci_id/* kernel/time/alarmtimer.c 42 */[ALARM_NUMTYPE];
	enum alarmtimer_restart (*cocci_id/* kernel/time/alarmtimer.c 327 */)(struct alarm *,
									      ktime_t);
	enum alarmtimer_type cocci_id/* kernel/time/alarmtimer.c 326 */;
	struct alarm *cocci_id/* kernel/time/alarmtimer.c 326 */;
	void cocci_id/* kernel/time/alarmtimer.c 325 */;
	struct device *cocci_id/* kernel/time/alarmtimer.c 303 */;
	struct timerqueue_node *cocci_id/* kernel/time/alarmtimer.c 265 */;
	struct rtc_time cocci_id/* kernel/time/alarmtimer.c 248 */;
	ktime_t cocci_id/* kernel/time/alarmtimer.c 225 */;
	const struct alarm *cocci_id/* kernel/time/alarmtimer.c 225 */;
	enum hrtimer_restart cocci_id/* kernel/time/alarmtimer.c 197 */;
	struct hrtimer *cocci_id/* kernel/time/alarmtimer.c 197 */;
	struct class_interface cocci_id/* kernel/time/alarmtimer.c 127 */;
}
