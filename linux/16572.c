cocci_test_suite() {
	struct tape_34xx_block_id *cocci_id/* drivers/s390/char/tape_34xx.c 995 */;
	int cocci_id/* drivers/s390/char/tape_34xx.c 964 */;
	struct tape_34xx_sbid cocci_id/* drivers/s390/char/tape_34xx.c 926 */;
	struct tape_34xx_sbid *cocci_id/* drivers/s390/char/tape_34xx.c 905 */;
	struct list_head *cocci_id/* drivers/s390/char/tape_34xx.c 904 */;
	struct tape_34xx_block_id cocci_id/* drivers/s390/char/tape_34xx.c 902 */;
	char __user *cocci_id/* drivers/s390/char/tape_34xx.c 875 */;
	struct display_struct cocci_id/* drivers/s390/char/tape_34xx.c 873 */;
	unsigned long cocci_id/* drivers/s390/char/tape_34xx.c 870 */;
	unsigned int cocci_id/* drivers/s390/char/tape_34xx.c 870 */;
	unsigned char *cocci_id/* drivers/s390/char/tape_34xx.c 59 */;
	struct tape_device *cocci_id/* drivers/s390/char/tape_34xx.c 58 */;
	struct tape_request *cocci_id/* drivers/s390/char/tape_34xx.c 56 */;
	void cocci_id/* drivers/s390/char/tape_34xx.c 56 */;
	void cocci_id/* drivers/s390/char/tape_34xx.c 50 */(struct tape_device *,
							    int);
	struct tape_34xx_sbid {
		struct list_head list;
		struct tape_34xx_block_id bid;
	} cocci_id/* drivers/s390/char/tape_34xx.c 45 */;
	struct tape_34xx_block_id {
		unsigned int wrap:1;
		unsigned int segment:7;
		unsigned int format:2;
		unsigned int block:22;
	} cocci_id/* drivers/s390/char/tape_34xx.c 35 */;
	__u8 *cocci_id/* drivers/s390/char/tape_34xx.c 321 */;
	debug_info_t *cocci_id/* drivers/s390/char/tape_34xx.c 28 */;
	struct irb *cocci_id/* drivers/s390/char/tape_34xx.c 263 */;
	struct tape_34xx_work *cocci_id/* drivers/s390/char/tape_34xx.c 157 */;
	enum tape_op cocci_id/* drivers/s390/char/tape_34xx.c 155 */;
	struct tape_34xx_work cocci_id/* drivers/s390/char/tape_34xx.c 140 */;
	struct work_struct *cocci_id/* drivers/s390/char/tape_34xx.c 137 */;
	long cocci_id/* drivers/s390/char/tape_34xx.c 1203 */;
	struct tape_34xx_work {
		struct tape_device *device;
		enum tape_op op;
		struct work_struct work;
	} cocci_id/* drivers/s390/char/tape_34xx.c 120 */;
	struct ccw_driver cocci_id/* drivers/s390/char/tape_34xx.c 1184 */;
	struct ccw_device *cocci_id/* drivers/s390/char/tape_34xx.c 1176 */;
	struct ccw_device_id cocci_id/* drivers/s390/char/tape_34xx.c 1169 */[];
	struct tape_discipline cocci_id/* drivers/s390/char/tape_34xx.c 1157 */;
	void *cocci_id/* drivers/s390/char/tape_34xx.c 115 */;
	tape_mtop_fn cocci_id/* drivers/s390/char/tape_34xx.c 1119 */[TAPE_NR_MTOPS];
	__u64 *cocci_id/* drivers/s390/char/tape_34xx.c 1075 */;
	struct {
		struct tape_34xx_block_id cbid;
		struct tape_34xx_block_id dbid;
	}__attribute__((packed)) cocci_id/* drivers/s390/char/tape_34xx.c 1069 */;
	struct list_head cocci_id/* drivers/s390/char/tape_34xx.c 1041 */;
}
