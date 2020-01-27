cocci_test_suite() {
	struct flash_block {
		char *data;
		unsigned long length;
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 95 */;
	const struct rtas_flash_file *cocci_id/* arch/powerpc/kernel/rtas_flash.c 767 */;
	void __exit cocci_id/* arch/powerpc/kernel/rtas_flash.c 755 */;
	int __init cocci_id/* arch/powerpc/kernel/rtas_flash.c 699 */;
	const struct rtas_flash_file cocci_id/* arch/powerpc/kernel/rtas_flash.c 661 */[];
	struct rtas_flash_file {
		const char *filename;
		const char *rtas_call_name;
		int *status;
		const struct file_operations fops;
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 654 */;
	char cocci_id/* arch/powerpc/kernel/rtas_flash.c 487 */[VALIDATE_MSG_LEN];
	struct rtas_validate_flash_t *const cocci_id/* arch/powerpc/kernel/rtas_flash.c 485 */;
	struct rtas_validate_flash_t *cocci_id/* arch/powerpc/kernel/rtas_flash.c 465 */;
	u32 cocci_id/* arch/powerpc/kernel/rtas_flash.c 456 */;
	char cocci_id/* arch/powerpc/kernel/rtas_flash.c 407 */[10];
	const char cocci_id/* arch/powerpc/kernel/rtas_flash.c 405 */[];
	const char __user *cocci_id/* arch/powerpc/kernel/rtas_flash.c 401 */;
	char cocci_id/* arch/powerpc/kernel/rtas_flash.c 390 */[RTAS_MSG_MAXLEN];
	struct rtas_manage_flash_t *const cocci_id/* arch/powerpc/kernel/rtas_flash.c 389 */;
	loff_t *cocci_id/* arch/powerpc/kernel/rtas_flash.c 387 */;
	struct file *cocci_id/* arch/powerpc/kernel/rtas_flash.c 386 */;
	char __user *cocci_id/* arch/powerpc/kernel/rtas_flash.c 386 */;
	ssize_t cocci_id/* arch/powerpc/kernel/rtas_flash.c 386 */;
	s32 cocci_id/* arch/powerpc/kernel/rtas_flash.c 376 */;
	struct rtas_manage_flash_t *cocci_id/* arch/powerpc/kernel/rtas_flash.c 374 */;
	unsigned int cocci_id/* arch/powerpc/kernel/rtas_flash.c 374 */;
	struct rtas_update_flash_t *const cocci_id/* arch/powerpc/kernel/rtas_flash.c 275 */;
	const char *cocci_id/* arch/powerpc/kernel/rtas_flash.c 239 */;
	char *cocci_id/* arch/powerpc/kernel/rtas_flash.c 237 */;
	size_t cocci_id/* arch/powerpc/kernel/rtas_flash.c 237 */;
	struct inode *cocci_id/* arch/powerpc/kernel/rtas_flash.c 208 */;
	void cocci_id/* arch/powerpc/kernel/rtas_flash.c 194 */;
	unsigned long cocci_id/* arch/powerpc/kernel/rtas_flash.c 167 */;
	struct flash_block_list *cocci_id/* arch/powerpc/kernel/rtas_flash.c 163 */;
	int cocci_id/* arch/powerpc/kernel/rtas_flash.c 163 */;
	struct rtas_validate_flash_t cocci_id/* arch/powerpc/kernel/rtas_flash.c 157 */;
	struct rtas_manage_flash_t cocci_id/* arch/powerpc/kernel/rtas_flash.c 156 */;
	struct rtas_update_flash_t cocci_id/* arch/powerpc/kernel/rtas_flash.c 155 */;
	struct rtas_validate_flash_t {
		int status;
		char *buf;
		unsigned int buf_size;
		unsigned int update_results;
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 147 */;
	struct rtas_manage_flash_t {
		int status;
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 141 */;
	struct rtas_update_flash_t {
		int status;
		struct flash_block_list *flist;
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 134 */;
	struct kmem_cache *cocci_id/* arch/powerpc/kernel/rtas_flash.c 116 */;
	struct flash_block_list {
		unsigned long num_blocks;
		struct flash_block_list *next;
		struct flash_block blocks[FLASH_BLOCKS_PER_NODE];
	} cocci_id/* arch/powerpc/kernel/rtas_flash.c 107 */;
	struct flash_block cocci_id/* arch/powerpc/kernel/rtas_flash.c 106 */;
}
