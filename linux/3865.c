cocci_test_suite() {
	struct hisi_acc_hw_sgl cocci_id/* drivers/crypto/hisilicon/sgl.c 68 */;
	struct acc_hw_sge cocci_id/* drivers/crypto/hisilicon/sgl.c 67 */;
	struct device *cocci_id/* drivers/crypto/hisilicon/sgl.c 56 */;
	struct hisi_acc_sgl_pool {
		struct mem_block {
			struct hisi_acc_hw_sgl *sgl;
			dma_addr_t sgl_dma;
			size_t size;
		} mem_block[HISI_ACC_MEM_BLOCK_NR];
		u32 sgl_num_per_block;
		u32 block_num;
		u32 count;
		u32 sge_nr;
		size_t sgl_size;
	} cocci_id/* drivers/crypto/hisilicon/sgl.c 34 */;
	struct hisi_acc_hw_sgl {
		dma_addr_t next_dma;
		__le16 entry_sum_in_chain;
		__le16 entry_sum_in_sgl;
		__le16 entry_length_in_sgl;
		__le16 pad0;
		__le64 pad1[5];
		struct hisi_acc_hw_sgl *next;
		struct acc_hw_sge sge_entries[];
	}__aligned(1) cocci_id/* drivers/crypto/hisilicon/sgl.c 23 */;
	struct acc_hw_sge *cocci_id/* drivers/crypto/hisilicon/sgl.c 203 */;
	dma_addr_t cocci_id/* drivers/crypto/hisilicon/sgl.c 202 */;
	struct scatterlist *cocci_id/* drivers/crypto/hisilicon/sgl.c 197 */;
	u16 cocci_id/* drivers/crypto/hisilicon/sgl.c 173 */;
	void *cocci_id/* drivers/crypto/hisilicon/sgl.c 161 */;
	struct mem_block *cocci_id/* drivers/crypto/hisilicon/sgl.c 150 */;
	u32 cocci_id/* drivers/crypto/hisilicon/sgl.c 148 */;
	dma_addr_t *cocci_id/* drivers/crypto/hisilicon/sgl.c 148 */;
	struct hisi_acc_sgl_pool *cocci_id/* drivers/crypto/hisilicon/sgl.c 147 */;
	struct hisi_acc_hw_sgl *cocci_id/* drivers/crypto/hisilicon/sgl.c 147 */;
	int cocci_id/* drivers/crypto/hisilicon/sgl.c 132 */;
	struct acc_hw_sge {
		dma_addr_t buf;
		void *page_ctrl;
		__le32 len;
		__le32 pad;
		__le32 pad0;
		__le32 pad1;
	} cocci_id/* drivers/crypto/hisilicon/sgl.c 13 */;
	void cocci_id/* drivers/crypto/hisilicon/sgl.c 129 */;
}
