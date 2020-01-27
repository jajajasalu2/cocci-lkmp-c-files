cocci_test_suite() {
	struct uwb_rc_neh {
		struct kref kref;
		struct uwb_rc *rc;
		u8 evt_type;
		__le16 evt;
		u8 context;
		u8 completed;
		uwb_rc_cmd_cb_f cb;
		void *arg;
		struct timer_list timer;
		struct list_head list_node;
	} cocci_id/* drivers/staging/uwb/neh.c 89 */;
	struct uwb_rc_neh cocci_id/* drivers/staging/uwb/neh.c 599 */;
	struct timer_list *cocci_id/* drivers/staging/uwb/neh.c 554 */;
	ssize_t cocci_id/* drivers/staging/uwb/neh.c 499 */;
	struct uwb_event *cocci_id/* drivers/staging/uwb/neh.c 366 */;
	const struct uwb_rceb *cocci_id/* drivers/staging/uwb/neh.c 314 */;
	bool cocci_id/* drivers/staging/uwb/neh.c 291 */;
	struct uwb_rceb *cocci_id/* drivers/staging/uwb/neh.c 285 */;
	size_t cocci_id/* drivers/staging/uwb/neh.c 285 */;
	unsigned long cocci_id/* drivers/staging/uwb/neh.c 200 */;
	uwb_rc_cmd_cb_f cocci_id/* drivers/staging/uwb/neh.c 197 */;
	void *cocci_id/* drivers/staging/uwb/neh.c 197 */;
	u8 cocci_id/* drivers/staging/uwb/neh.c 196 */;
	u16 cocci_id/* drivers/staging/uwb/neh.c 196 */;
	struct uwb_rccb *cocci_id/* drivers/staging/uwb/neh.c 195 */;
	struct device *cocci_id/* drivers/staging/uwb/neh.c 171 */;
	void cocci_id/* drivers/staging/uwb/neh.c 169 */;
	struct uwb_rc_neh *cocci_id/* drivers/staging/uwb/neh.c 149 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/neh.c 149 */;
	int cocci_id/* drivers/staging/uwb/neh.c 149 */;
	struct kref *cocci_id/* drivers/staging/uwb/neh.c 106 */;
	void cocci_id/* drivers/staging/uwb/neh.c 104 */(struct timer_list *t);
}
