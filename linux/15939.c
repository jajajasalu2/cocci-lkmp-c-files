cocci_test_suite() {
	struct uwbd_event cocci_id/* drivers/staging/uwb/uwbd.c 88 */[];
	struct uwbd_event {
		uwbd_evt_handler_f handler;
		const char *name;
	} cocci_id/* drivers/staging/uwb/uwbd.c 82 */;
	int (*cocci_id/* drivers/staging/uwb/uwbd.c 74 */)(struct uwb_event *);
	struct task_struct *cocci_id/* drivers/staging/uwb/uwbd.c 291 */;
	struct uwb_event cocci_id/* drivers/staging/uwb/uwbd.c 271 */;
	struct uwb_event *cocci_id/* drivers/staging/uwb/uwbd.c 257 */;
	unsigned long cocci_id/* drivers/staging/uwb/uwbd.c 256 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/uwbd.c 255 */;
	void *cocci_id/* drivers/staging/uwb/uwbd.c 253 */;
	int cocci_id/* drivers/staging/uwb/uwbd.c 253 */;
	void cocci_id/* drivers/staging/uwb/uwbd.c 215 */;
	u16 cocci_id/* drivers/staging/uwb/uwbd.c 171 */;
	u8 cocci_id/* drivers/staging/uwb/uwbd.c 170 */;
	uwbd_evt_handler_f cocci_id/* drivers/staging/uwb/uwbd.c 169 */;
	struct uwbd_evt_type_handler *cocci_id/* drivers/staging/uwb/uwbd.c 168 */;
	const struct uwbd_event cocci_id/* drivers/staging/uwb/uwbd.c 140 */[];
	struct uwbd_evt_type_handler cocci_id/* drivers/staging/uwb/uwbd.c 132 */[];
	struct uwbd_evt_type_handler {
		const char *name;
		struct uwbd_event *uwbd_events;
		size_t size;
	} cocci_id/* drivers/staging/uwb/uwbd.c 125 */;
}
