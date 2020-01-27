cocci_test_suite() {
	__le64 *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 72 */;
	u64 cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 46 */;
	struct dpdmai_rsp_get_tx_queue *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 350 */;
	u32 *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 348 */;
	struct dpdmai_rsp_get_tx_queue {
		__le64 pad;
		__le32 fqid;
	} cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 31 */;
	struct dpdmai_cmd_queue *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 309 */;
	u8 cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 307 */;
	struct dpdmai_rx_queue_attr *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 307 */;
	const struct dpdmai_rx_queue_cfg *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 273 */;
	struct dpdmai_rsp_get_attributes *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 237 */;
	struct dpdmai_attr *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 235 */;
	struct dpdmai_cmd_queue {
		__le32 dest_id;
		u8 priority;
		u8 queue;
		u8 dest_type;
		u8 pad;
		__le64 user_ctx;
		union {
			__le32 options;
			__le32 fqid;
		};
	} cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 18 */;
	const struct dpdmai_cfg *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 141 */;
	u16 *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 141 */;
	struct fsl_mc_command cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 107 */;
	u32 cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 105 */;
	u16 cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 105 */;
	struct fsl_mc_io *cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 105 */;
	int cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 105 */;
	struct dpdmai_rsp_get_attributes {
		__le32 id;
		u8 num_of_priorities;
		u8 pad0[3];
		__le16 major;
		__le16 minor;
	} cocci_id/* drivers/dma/fsl-dpaa2-qdma/dpdmai.c 10 */;
}
