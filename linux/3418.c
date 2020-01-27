cocci_test_suite() {
	struct adb_request cocci_id/* drivers/macintosh/adbhid.c 955 */;
	u16 cocci_id/* drivers/macintosh/adbhid.c 944 */;
	const u16 cocci_id/* drivers/macintosh/adbhid.c 79 */[128];
	struct adbhid cocci_id/* drivers/macintosh/adbhid.c 767 */;
	char *cocci_id/* drivers/macintosh/adbhid.c 760 */;
	struct input_dev *cocci_id/* drivers/macintosh/adbhid.c 757 */;
	struct notifier_block *cocci_id/* drivers/macintosh/adbhid.c 717 */;
	void *cocci_id/* drivers/macintosh/adbhid.c 717 */;
	unsigned long cocci_id/* drivers/macintosh/adbhid.c 717 */;
	int cocci_id/* drivers/macintosh/adbhid.c 716 */;
	unsigned char cocci_id/* drivers/macintosh/adbhid.c 687 */;
	unsigned int cocci_id/* drivers/macintosh/adbhid.c 684 */;
	struct notifier_block cocci_id/* drivers/macintosh/adbhid.c 66 */;
	int cocci_id/* drivers/macintosh/adbhid.c 65 */(struct notifier_block *,
							unsigned long, void *);
	struct adb_request *cocci_id/* drivers/macintosh/adbhid.c 636 */;
	int cocci_id/* drivers/macintosh/adbhid.c 629 */[16];
	unsigned char *cocci_id/* drivers/macintosh/adbhid.c 503 */;
	void cocci_id/* drivers/macintosh/adbhid.c 502 */;
	struct adbhid *cocci_id/* drivers/macintosh/adbhid.c 287 */;
	struct adb_ids cocci_id/* drivers/macintosh/adbhid.c 245 */;
	void cocci_id/* drivers/macintosh/adbhid.c 240 */(int id);
	void cocci_id/* drivers/macintosh/adbhid.c 235 */(int, int, int);
	void cocci_id/* drivers/macintosh/adbhid.c 233 */(void);
	struct adbhid *cocci_id/* drivers/macintosh/adbhid.c 231 */[16];
	struct adbhid {
		struct input_dev *input;
		int id;
		int default_id;
		int original_handler_id;
		int current_handler_id;
		int mouse_kind;
		u16 *keycode;
		char name[64];
		char phys[32];
		int flags;
	} cocci_id/* drivers/macintosh/adbhid.c 210 */;
	void __exit cocci_id/* drivers/macintosh/adbhid.c 1271 */;
	int __init cocci_id/* drivers/macintosh/adbhid.c 1254 */;
	unsigned char cocci_id/* drivers/macintosh/adbhid.c 1091 */[8];
}
