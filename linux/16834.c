cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/misc/xen-kbdfront.c 92 */;
	struct xenkbd_key *cocci_id/* drivers/input/misc/xen-kbdfront.c 90 */;
	struct xenkbd_position *cocci_id/* drivers/input/misc/xen-kbdfront.c 77 */;
	struct xenkbd_motion *cocci_id/* drivers/input/misc/xen-kbdfront.c 64 */;
	void __exit cocci_id/* drivers/input/misc/xen-kbdfront.c 562 */;
	void cocci_id/* drivers/input/misc/xen-kbdfront.c 56 */(struct xenkbd_info *);
	int cocci_id/* drivers/input/misc/xen-kbdfront.c 55 */(struct xenbus_device *,
							       struct xenkbd_info *);
	int __init cocci_id/* drivers/input/misc/xen-kbdfront.c 547 */;
	int cocci_id/* drivers/input/misc/xen-kbdfront.c 54 */(struct xenbus_device *);
	struct xenbus_driver cocci_id/* drivers/input/misc/xen-kbdfront.c 539 */;
	const struct xenbus_device_id cocci_id/* drivers/input/misc/xen-kbdfront.c 534 */[];
	enum xenbus_state cocci_id/* drivers/input/misc/xen-kbdfront.c 500 */;
	struct xenbus_device *cocci_id/* drivers/input/misc/xen-kbdfront.c 499 */;
	void cocci_id/* drivers/input/misc/xen-kbdfront.c 499 */;
	int cocci_id/* drivers/input/misc/xen-kbdfront.c 49 */[KPARAM_CNT];
	enum{KPARAM_X, KPARAM_Y, KPARAM_CNT,} cocci_id/* drivers/input/misc/xen-kbdfront.c 48 */;
	struct xenbus_transaction cocci_id/* drivers/input/misc/xen-kbdfront.c 427 */;
	unsigned long cocci_id/* drivers/input/misc/xen-kbdfront.c 418 */;
	struct xenkbd_info {
		struct input_dev *kbd;
		struct input_dev *ptr;
		struct input_dev *mtouch;
		struct xenkbd_page *page;
		int gref;
		int irq;
		struct xenbus_device *xbdev;
		char phys[32];
		int mtouch_cur_contact_id;
	} cocci_id/* drivers/input/misc/xen-kbdfront.c 35 */;
	unsigned int cocci_id/* drivers/input/misc/xen-kbdfront.c 274 */;
	bool cocci_id/* drivers/input/misc/xen-kbdfront.c 204 */;
	const struct xenbus_device_id *cocci_id/* drivers/input/misc/xen-kbdfront.c 201 */;
	__u32 cocci_id/* drivers/input/misc/xen-kbdfront.c 185 */;
	struct xenkbd_page *cocci_id/* drivers/input/misc/xen-kbdfront.c 184 */;
	struct xenkbd_info *cocci_id/* drivers/input/misc/xen-kbdfront.c 183 */;
	irqreturn_t cocci_id/* drivers/input/misc/xen-kbdfront.c 181 */;
	void *cocci_id/* drivers/input/misc/xen-kbdfront.c 181 */;
	int cocci_id/* drivers/input/misc/xen-kbdfront.c 181 */;
	union xenkbd_in_event *cocci_id/* drivers/input/misc/xen-kbdfront.c 160 */;
	struct xenkbd_mtouch *cocci_id/* drivers/input/misc/xen-kbdfront.c 114 */;
}
