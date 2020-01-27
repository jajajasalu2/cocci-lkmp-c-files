cocci_test_suite() {
	void cocci_id/* kernel/power/wakelock.c 88 */(struct work_struct *work);
	unsigned int cocci_id/* kernel/power/wakelock.c 62 */;
	struct wakelock cocci_id/* kernel/power/wakelock.c 48 */;
	struct rb_node *cocci_id/* kernel/power/wakelock.c 40 */;
	char *cocci_id/* kernel/power/wakelock.c 38 */;
	ssize_t cocci_id/* kernel/power/wakelock.c 38 */;
	struct rb_root cocci_id/* kernel/power/wakelock.c 36 */;
	struct wakelock {
		char *name;
		struct rb_node node;
		struct wakeup_source *ws;
#ifdef CONFIG_PM_WAKELOCKS_GC
		struct list_head lru;
#endif
	} cocci_id/* kernel/power/wakelock.c 27 */;
	size_t cocci_id/* kernel/power/wakelock.c 211 */;
	const char *cocci_id/* kernel/power/wakelock.c 206 */;
	int cocci_id/* kernel/power/wakelock.c 206 */;
	struct rb_node **cocci_id/* kernel/power/wakelock.c 153 */;
	bool cocci_id/* kernel/power/wakelock.c 113 */;
	u64 cocci_id/* kernel/power/wakelock.c 112 */;
	ktime_t cocci_id/* kernel/power/wakelock.c 106 */;
	struct wakelock *cocci_id/* kernel/power/wakelock.c 105 */;
	struct work_struct *cocci_id/* kernel/power/wakelock.c 103 */;
	void cocci_id/* kernel/power/wakelock.c 103 */;
}
