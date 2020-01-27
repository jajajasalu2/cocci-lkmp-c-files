cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/keyboard/atkbd.c 955 */[];
	unsigned int cocci_id/* drivers/input/keyboard/atkbd.c 922 */;
	const unsigned int *cocci_id/* drivers/input/keyboard/atkbd.c 921 */;
	const void *cocci_id/* drivers/input/keyboard/atkbd.c 919 */;
	void cocci_id/* drivers/input/keyboard/atkbd.c 918 */;
	unsigned char cocci_id/* drivers/input/keyboard/atkbd.c 853 */[1];
	const unsigned short cocci_id/* drivers/input/keyboard/atkbd.c 73 */[ATKBD_KEYMAP_SIZE];
	unsigned char cocci_id/* drivers/input/keyboard/atkbd.c 725 */[2];
	struct ps2dev *cocci_id/* drivers/input/keyboard/atkbd.c 687 */;
	struct atkbd *cocci_id/* drivers/input/keyboard/atkbd.c 685 */;
	int cocci_id/* drivers/input/keyboard/atkbd.c 685 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/atkbd.c 588 */;
	bool cocci_id/* drivers/input/keyboard/atkbd.c 58 */;
	const short cocci_id/* drivers/input/keyboard/atkbd.c 538 */[4];
	const short cocci_id/* drivers/input/keyboard/atkbd.c 535 */[32];
	unsigned short cocci_id/* drivers/input/keyboard/atkbd.c 376 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/atkbd.c 368 */;
	unsigned char cocci_id/* drivers/input/keyboard/atkbd.c 330 */;
	unsigned long cocci_id/* drivers/input/keyboard/atkbd.c 311 */;
	const unsigned int cocci_id/* drivers/input/keyboard/atkbd.c 302 */[];
	struct attribute_group cocci_id/* drivers/input/keyboard/atkbd.c 298 */;
	struct attribute *cocci_id/* drivers/input/keyboard/atkbd.c 287 */[];
	ssize_t cocci_id/* drivers/input/keyboard/atkbd.c 250 */(struct device *dev,
								 const char *buf,
								 size_t count,
								 ssize_t (*handler)(struct atkbd *, const char *, size_t));
	ssize_t cocci_id/* drivers/input/keyboard/atkbd.c 248 */(struct device *dev,
								 char *buf,
								 ssize_t (*handler)(struct atkbd *, char *));
	unsigned int (*cocci_id/* drivers/input/keyboard/atkbd.c 240 */)(struct atkbd *,
									 unsigned int);
	void *cocci_id/* drivers/input/keyboard/atkbd.c 239 */;
	void (*cocci_id/* drivers/input/keyboard/atkbd.c 238 */)(struct atkbd *,
								 const void *data);
	struct atkbd {
		struct ps2dev ps2dev;
		struct input_dev *dev;
		char name[64];
		char phys[32];
		unsigned short id;
		unsigned short keycode[ATKBD_KEYMAP_SIZE];
	DECLARE_BITMAP(force_release_mask,ATKBD_KEYMAP_SIZE)
		;
		unsigned char set;
		bool translated;
		bool extra;
		bool write;
		bool softrepeat;
		bool softraw;
		bool scroll;
		bool enabled;
		unsigned char emul;
		bool resend;
		bool release;
		unsigned long xl_bit;
		unsigned int last;
		unsigned long time;
		unsigned long err_count;
		struct delayed_work event_work;
		unsigned long event_jiffies;
		unsigned long event_mask;
		struct mutex mutex;
	} cocci_id/* drivers/input/keyboard/atkbd.c 197 */;
	void __exit cocci_id/* drivers/input/keyboard/atkbd.c 1813 */;
	const struct {
		unsigned short keycode;
		unsigned char set2;
	} cocci_id/* drivers/input/keyboard/atkbd.c 180 */[];
	const struct dmi_system_id cocci_id/* drivers/input/keyboard/atkbd.c 1660 */[]__initconst;
	const struct dmi_system_id *cocci_id/* drivers/input/keyboard/atkbd.c 1648 */;
	int __init cocci_id/* drivers/input/keyboard/atkbd.c 1648 */;
	struct serio *cocci_id/* drivers/input/keyboard/atkbd.c 1320 */;
	ssize_t (*cocci_id/* drivers/input/keyboard/atkbd.c 1318 */)(struct atkbd *,
								     const char *,
								     size_t);
	const char *cocci_id/* drivers/input/keyboard/atkbd.c 1317 */;
	struct device *cocci_id/* drivers/input/keyboard/atkbd.c 1317 */;
	ssize_t cocci_id/* drivers/input/keyboard/atkbd.c 1317 */;
	size_t cocci_id/* drivers/input/keyboard/atkbd.c 1317 */;
	ssize_t (*cocci_id/* drivers/input/keyboard/atkbd.c 1309 */)(struct atkbd *,
								     char *);
	char *cocci_id/* drivers/input/keyboard/atkbd.c 1308 */;
	struct serio_driver cocci_id/* drivers/input/keyboard/atkbd.c 1295 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/atkbd.c 1271 */[];
	const unsigned short cocci_id/* drivers/input/keyboard/atkbd.c 120 */[128];
	struct atkbd cocci_id/* drivers/input/keyboard/atkbd.c 1137 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/atkbd.c 1134 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/atkbd.c 1131 */;
}
