cocci_test_suite() {
	int cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 49 */;
	struct ib_atomic_wr cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 44 */;
	u32 cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 36 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 36 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 34 */(struct rvt_qp *qp);
	struct workqueue_struct *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 32 */;
	struct tid_rdma_params *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 253 */;
	struct ib_qp *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 244 */;
	struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 242 */;
	struct hfi1_opfn_type cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 23 */[STL_VERBS_EXTD_MAX];
	u64 cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 222 */;
	u16 cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 219 */;
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 218 */;
	struct hfi1_opfn_type *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 217 */;
	struct hfi1_qp_priv *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 216 */;
	struct rvt_qp *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 214 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 214 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 179 */;
	struct hfi1_opfn_type {
		bool (*request)(struct rvt_qp *qp, u64 *data);
		bool (*response)(struct rvt_qp *qp, u64 *data);
		bool (*reply)(struct rvt_qp *qp, u64 data);
		void (*error)(struct rvt_qp *qp);
	} cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 16 */;
	struct ib_atomic_eth *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 136 */;
	struct rvt_ack_entry *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 135 */;
	struct hfi1_qp_priv cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 117 */;
	struct hfi1_opfn_data cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 116 */;
	struct hfi1_opfn_data *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 113 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/hfi1/opfn.c 111 */;
}
