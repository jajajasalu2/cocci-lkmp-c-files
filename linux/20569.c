cocci_test_suite() {
	int cocci_id/* arch/x86/platform/uv/uv_time.c 86 */;
	struct uv_rtc_timer_head **cocci_id/* arch/x86/platform/uv/uv_time.c 61 */;
	struct uv_rtc_timer_head {
		spinlock_t lock;
		int next_cpu;
		int ncpus;
		struct {
			int lcpu;
			u64 expires;
		} cpu[1];
	} cocci_id/* arch/x86/platform/uv/uv_time.c 46 */;
	struct work_struct *cocci_id/* arch/x86/platform/uv/uv_time.c 342 */;
	char *cocci_id/* arch/x86/platform/uv/uv_time.c 334 */;
	int __init cocci_id/* arch/x86/platform/uv/uv_time.c 334 */;
	struct clock_event_device *cocci_id/* arch/x86/platform/uv/uv_time.c 323 */;
	struct clock_event_device cocci_id/* arch/x86/platform/uv/uv_time.c 32 */;
	unsigned long cocci_id/* arch/x86/platform/uv/uv_time.c 288 */;
	struct clocksource *cocci_id/* arch/x86/platform/uv/uv_time.c 286 */;
	u64 cocci_id/* arch/x86/platform/uv/uv_time.c 28 */;
	struct clocksource cocci_id/* arch/x86/platform/uv/uv_time.c 24 */;
	int cocci_id/* arch/x86/platform/uv/uv_time.c 22 */(struct clock_event_device *evt);
	u64 *cocci_id/* arch/x86/platform/uv/uv_time.c 217 */;
	int cocci_id/* arch/x86/platform/uv/uv_time.c 21 */(unsigned long,
							    struct clock_event_device *);
	u64 cocci_id/* arch/x86/platform/uv/uv_time.c 20 */(struct clocksource *cs);
	struct uv_rtc_timer_head cocci_id/* arch/x86/platform/uv/uv_time.c 159 */;
	struct uv_rtc_timer_head *cocci_id/* arch/x86/platform/uv/uv_time.c 156 */;
	void *cocci_id/* arch/x86/platform/uv/uv_time.c 148 */;
	void cocci_id/* arch/x86/platform/uv/uv_time.c 144 */;
	__typeof__(struct clock_event_device) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
