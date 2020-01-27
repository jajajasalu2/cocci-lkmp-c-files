cocci_test_suite() {
	event_word_t *cocci_id/* drivers/xen/events/events_fifo.c 66 */[MAX_EVENT_ARRAY_PAGES]__read_mostly;
	struct evtchn_fifo_queue {
		uint32_t head[EVTCHN_FIFO_MAX_QUEUES];
	} cocci_id/* drivers/xen/events/events_fifo.c 60 */;
	int __init cocci_id/* drivers/xen/events/events_fifo.c 433 */;
	void *cocci_id/* drivers/xen/events/events_fifo.c 400 */;
	int cocci_id/* drivers/xen/events/events_fifo.c 398 */;
	const struct evtchn_ops cocci_id/* drivers/xen/events/events_fifo.c 383 */;
	unsigned long cocci_id/* drivers/xen/events/events_fifo.c 330 */;
	struct evtchn_fifo_control_block *cocci_id/* drivers/xen/events/events_fifo.c 329 */;
	bool cocci_id/* drivers/xen/events/events_fifo.c 327 */;
	unsigned cocci_id/* drivers/xen/events/events_fifo.c 327 */;
	void cocci_id/* drivers/xen/events/events_fifo.c 327 */;
	event_word_t *cocci_id/* drivers/xen/events/events_fifo.c 290 */;
	struct evtchn_fifo_queue *cocci_id/* drivers/xen/events/events_fifo.c 287 */;
	unsigned long *cocci_id/* drivers/xen/events/events_fifo.c 284 */;
	event_word_t cocci_id/* drivers/xen/events/events_fifo.c 260 */;
	uint32_t cocci_id/* drivers/xen/events/events_fifo.c 258 */;
	volatile event_word_t *cocci_id/* drivers/xen/events/events_fifo.c 258 */;
	struct evtchn_unmask cocci_id/* drivers/xen/events/events_fifo.c 253 */;
	struct irq_info *cocci_id/* drivers/xen/events/events_fifo.c 189 */;
	struct evtchn_expand_array cocci_id/* drivers/xen/events/events_fifo.c 154 */;
	unsigned int cocci_id/* drivers/xen/events/events_fifo.c 107 */;
	struct evtchn_init_control cocci_id/* drivers/xen/events/events_fifo.c 106 */;
	__typeof__(struct evtchn_fifo_queue) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct evtchn_fifo_control_block *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
