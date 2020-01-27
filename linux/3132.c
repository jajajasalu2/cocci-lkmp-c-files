cocci_test_suite() {
	struct swim3 __iomem *cocci_id/* drivers/block/swim3.c 911 */;
	unsigned long cocci_id/* drivers/block/swim3.c 897 */;
	fmode_t cocci_id/* drivers/block/swim3.c 896 */;
	struct block_device *cocci_id/* drivers/block/swim3.c 896 */;
	struct floppy_struct cocci_id/* drivers/block/swim3.c 889 */;
	void __user *cocci_id/* drivers/block/swim3.c 888 */;
	int cocci_id/* drivers/block/swim3.c 840 */;
	struct request_queue *cocci_id/* drivers/block/swim3.c 825 */;
	enum swim_state cocci_id/* drivers/block/swim3.c 793 */;
	long cocci_id/* drivers/block/swim3.c 750 */;
	irqreturn_t cocci_id/* drivers/block/swim3.c 638 */;
	struct swim3 {
		REG(data);
		REG(timer);
		REG(error);
		REG(mode);
		REG(select);
		REG(setup);
		REG(control);
		REG(status);
		REG(intr);
		REG(nseek);
		REG(ctrack);
		REG(csect);
		REG(gap3);
		REG(sector);
		REG(nsect);
		REG(intr_enable);
	} cocci_id/* drivers/block/swim3.c 61 */;
	struct timer_list *cocci_id/* drivers/block/swim3.c 539 */;
	struct floppy_state *cocci_id/* drivers/block/swim3.c 470 */;
	void cocci_id/* drivers/block/swim3.c 470 */;
	enum swim_state{idle, locating, seeking, settling, do_transfer, jogging, available, revalidating, ejecting,} cocci_id/* drivers/block/swim3.c 43 */;
	struct request *cocci_id/* drivers/block/swim3.c 422 */;
	struct dbdma_regs __iomem *cocci_id/* drivers/block/swim3.c 421 */;
	struct gendisk *cocci_id/* drivers/block/swim3.c 41 */[MAX_FLOPPIES];
	void *cocci_id/* drivers/block/swim3.c 408 */;
	struct dbdma_cmd *cocci_id/* drivers/block/swim3.c 407 */;
	void (*cocci_id/* drivers/block/swim3.c 363 */)(struct timer_list *t);
	const struct blk_mq_queue_data *cocci_id/* drivers/block/swim3.c 309 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/swim3.c 308 */;
	bool cocci_id/* drivers/block/swim3.c 257 */;
	blk_status_t cocci_id/* drivers/block/swim3.c 257 */;
	int cocci_id/* drivers/block/swim3.c 255 */(struct gendisk *disk);
	unsigned int cocci_id/* drivers/block/swim3.c 253 */(struct gendisk *disk,
							     unsigned int clearing);
	void cocci_id/* drivers/block/swim3.c 252 */(struct gendisk *disk,
						     fmode_t mode);
	int cocci_id/* drivers/block/swim3.c 251 */(struct block_device *bdev,
						    fmode_t mode);
	int cocci_id/* drivers/block/swim3.c 249 */(struct block_device *bdev,
						    fmode_t mode,
						    unsigned int cmd,
						    unsigned long param);
	int cocci_id/* drivers/block/swim3.c 248 */(struct floppy_state *fs);
	int cocci_id/* drivers/block/swim3.c 245 */(struct floppy_state *fs,
						    enum swim_state state,
						    int interruptible);
	irqreturn_t cocci_id/* drivers/block/swim3.c 243 */(int irq,
							    void *dev_id);
	void cocci_id/* drivers/block/swim3.c 239 */(struct timer_list *t);
	void cocci_id/* drivers/block/swim3.c 238 */(struct floppy_state *fs);
	void cocci_id/* drivers/block/swim3.c 237 */(struct dbdma_cmd *cp,
						     int cmd, void *buf,
						     int count);
	void cocci_id/* drivers/block/swim3.c 236 */(struct floppy_state *fs,
						     int n);
	unsigned short cocci_id/* drivers/block/swim3.c 229 */[];
	struct floppy_state cocci_id/* drivers/block/swim3.c 218 */[MAX_FLOPPIES];
	struct floppy_state {
		enum swim_state state;
		struct swim3 __iomem *swim3;
		struct dbdma_regs __iomem *dma;
		int swim3_intr;
		int dma_intr;
		int cur_cyl;
		int cur_sector;
		int req_cyl;
		int head;
		int req_sector;
		int scount;
		int retries;
		int settle_time;
		int secpercyl;
		int secpertrack;
		int total_secs;
		int write_prot;
		struct dbdma_cmd *dma_cmd;
		int ref_count;
		int expect_cyl;
		struct timer_list timeout;
		int timeout_pending;
		int ejected;
		wait_queue_head_t wait;
		int wanted;
		struct macio_dev *mdev;
		char dbdma_cmd_space[5 * sizeof(struct dbdma_cmd)];
		int index;
		struct request *cur_req;
		struct blk_mq_tag_set tag_set;
	} cocci_id/* drivers/block/swim3.c 175 */;
	struct macio_driver cocci_id/* drivers/block/swim3.c 1250 */;
	const struct of_device_id cocci_id/* drivers/block/swim3.c 1236 */[];
	const struct of_device_id *cocci_id/* drivers/block/swim3.c 1173 */;
	struct dbdma_cmd cocci_id/* drivers/block/swim3.c 1142 */;
	struct device_node *cocci_id/* drivers/block/swim3.c 1086 */;
	struct macio_dev *cocci_id/* drivers/block/swim3.c 1084 */;
	const struct blk_mq_ops cocci_id/* drivers/block/swim3.c 1061 */;
	const struct block_device_operations cocci_id/* drivers/block/swim3.c 1053 */;
	struct gendisk *cocci_id/* drivers/block/swim3.c 1006 */;
	unsigned int cocci_id/* drivers/block/swim3.c 1006 */;
}
