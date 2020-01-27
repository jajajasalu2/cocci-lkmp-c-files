cocci_test_suite() {
	void cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 731 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 656 */;
	struct mthca_db_page *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 572 */;
	u32 cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 567 */;
	__be32 **cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 567 */;
	enum mthca_db_type cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 566 */;
	struct mthca_dev *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 566 */;
	int cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 566 */;
	struct mthca_user_db_table {
		struct mutex mutex;
		struct {
			u64 uvirt;
			struct scatterlist mem;
			int refcount;
		} page[0];
	} cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 55 */;
	struct mthca_user_db_table *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 548 */;
	struct mthca_uar *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 547 */;
	enum{MTHCA_ICM_ALLOC_SIZE=1 << 18, MTHCA_TABLE_CHUNK_SIZE=1 << 18,} cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 50 */;
	struct page *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 449 */[1];
	unsigned cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 364 */;
	u64 cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 357 */;
	struct mthca_icm_table *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 356 */;
	dma_addr_t *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 278 */;
	struct mthca_icm_chunk *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 141 */;
	gfp_t cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 138 */;
	struct mthca_icm *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 137 */;
	void *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 126 */;
	struct scatterlist *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 123 */;
	struct device *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 123 */;
	struct page *cocci_id/* drivers/infiniband/hw/mthca/mthca_memfree.c 109 */;
}
