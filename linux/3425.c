cocci_test_suite() {
	struct media_bay_info cocci_id/* drivers/macintosh/mediabay.c 742 */;
	char *cocci_id/* drivers/macintosh/mediabay.c 742 */;
	int __init cocci_id/* drivers/macintosh/mediabay.c 737 */;
	struct macio_driver cocci_id/* drivers/macintosh/mediabay.c 726 */;
	struct media_bay_info cocci_id/* drivers/macintosh/mediabay.c 72 */[MAX_BAYS];
	struct of_device_id cocci_id/* drivers/macintosh/mediabay.c 706 */[];
	const struct mb_ops cocci_id/* drivers/macintosh/mediabay.c 678 */;
	pm_message_t cocci_id/* drivers/macintosh/mediabay.c 615 */;
	unsigned long cocci_id/* drivers/macintosh/mediabay.c 561 */;
	struct device_node *cocci_id/* drivers/macintosh/mediabay.c 560 */;
	u32 __iomem *cocci_id/* drivers/macintosh/mediabay.c 559 */;
	const struct of_device_id *cocci_id/* drivers/macintosh/mediabay.c 556 */;
	struct media_bay_info {
		u32 __iomem *base;
		int content_id;
		int state;
		int last_value;
		int value_count;
		int timer;
		struct macio_dev *mdev;
		const struct mb_ops *ops;
		int index;
		int cached_gpio;
		int sleeping;
		int user_lock;
		struct mutex lock;
	} cocci_id/* drivers/macintosh/mediabay.c 54 */;
	struct macio_driver *cocci_id/* drivers/macintosh/mediabay.c 449 */;
	struct device *cocci_id/* drivers/macintosh/mediabay.c 445 */;
	void *cocci_id/* drivers/macintosh/mediabay.c 445 */;
	struct mb_ops {
		char *name;
		void (*init)(struct media_bay_info *bay);
		u8 (*content)(struct media_bay_info *bay);
		void (*power)(struct media_bay_info *bay, int on_off);
		int (*setup_bus)(struct media_bay_info *bay, u8 device_id);
		void (*un_reset)(struct media_bay_info *bay);
		void (*un_reset_ide)(struct media_bay_info *bay);
	} cocci_id/* drivers/macintosh/mediabay.c 44 */;
	struct media_bay_info *cocci_id/* drivers/macintosh/mediabay.c 392 */;
	struct macio_dev *cocci_id/* drivers/macintosh/mediabay.c 390 */;
	int cocci_id/* drivers/macintosh/mediabay.c 390 */;
	char *cocci_id/* drivers/macintosh/mediabay.c 352 */[];
	volatile u8 __iomem *cocci_id/* drivers/macintosh/mediabay.c 33 */;
	void cocci_id/* drivers/macintosh/mediabay.c 190 */;
	u8 cocci_id/* drivers/macintosh/mediabay.c 139 */;
	enum{mb_empty=0, mb_powering_up, mb_enabling_bay, mb_resetting, mb_ide_resetting, mb_up, mb_powering_down,} cocci_id/* drivers/macintosh/mediabay.c 113 */;
}
