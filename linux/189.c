cocci_test_suite() {
	int cocci_id/* kernel/irq/timings.c 899 */[];
	struct irq_timings *cocci_id/* kernel/irq/timings.c 890 */;
	unsigned cocci_id/* kernel/irq/timings.c 830 */;
	int __init cocci_id/* kernel/irq/timings.c 814 */;
	struct timings_intervals *cocci_id/* kernel/irq/timings.c 769 */;
	int cocci_id/* kernel/irq/timings.c 709 */[IRQ_TIMINGS_SIZE];
	struct timings_intervals cocci_id/* kernel/irq/timings.c 699 */[]__initdata;
	u64 cocci_id/* kernel/irq/timings.c 640 */[]__initdata;
	struct timings_intervals {
		u64 *intervals;
		size_t count;
	} cocci_id/* kernel/irq/timings.c 632 */;
	struct irqt_stat __percpu *cocci_id/* kernel/irq/timings.c 602 */;
	void cocci_id/* kernel/irq/timings.c 446 */;
	u64 cocci_id/* kernel/irq/timings.c 382 */;
	struct irqt_stat *cocci_id/* kernel/irq/timings.c 382 */;
	int cocci_id/* kernel/irq/timings.c 382 */;
	int *cocci_id/* kernel/irq/timings.c 317 */;
	size_t cocci_id/* kernel/irq/timings.c 317 */;
	s64 cocci_id/* kernel/irq/timings.c 302 */;
	struct irqt_stat {
		u64 last_ts;
		u64 ema_time[PREDICTION_BUFFER_SIZE];
		int timings[IRQ_TIMINGS_SIZE];
		int circ_timings[IRQ_TIMINGS_SIZE];
		int count;
	} cocci_id/* kernel/irq/timings.c 289 */;
	__typeof__(struct irq_timings) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
