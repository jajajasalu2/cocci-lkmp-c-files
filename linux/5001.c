cocci_test_suite() {
	struct vnic_txreq {
		struct sdma_txreq txreq;
		struct hfi1_vnic_sdma *sdma;
		struct sk_buff *skb;
		unsigned char pad[HFI1_VNIC_MAX_PAD];
		u16 plen;
		__le64 pbc_val;
	} cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 70 */;
	struct vnic_txreq cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 311 */;
	char cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 307 */[HFI1_VNIC_TXREQ_NAME_LEN];
	struct iowait_work *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 295 */;
	struct hfi1_vnic_sdma *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 282 */;
	struct hfi1_vnic_vport_info *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 277 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 277 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 270 */;
	struct iowait *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 258 */;
	struct hfi1_vnic_sdma cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 234 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 231 */;
	uint cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 230 */;
	struct sdma_txreq *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 229 */;
	struct sk_buff *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 169 */;
	struct hfi1_devdata *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 167 */;
	unsigned char *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 162 */;
	u16 cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 131 */;
	u64 cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 128 */;
	struct vnic_txreq *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 127 */;
	struct sdma_engine *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 126 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 126 */;
	skb_frag_t *cocci_id/* drivers/infiniband/hw/hfi1/vnic_sdma.c 105 */;
}
