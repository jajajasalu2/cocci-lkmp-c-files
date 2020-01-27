cocci_test_suite() {
	struct iowait_work *cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 91 */;
	struct iowait *cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 81 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 81 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 53 */;
	void (*cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 50 */)(struct iowait *wait);
	void (*cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 49 */)(struct iowait *wait,
								     int reason);
	int (*cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 44 */)(struct sdma_engine *sde,
								    struct iowait_work *wait,
								    struct sdma_txreq *tx,
								    uint seq,
								    bool pkts_sent);
	void (*cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 42 */)(struct work_struct *work);
	u32 cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 23 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 18 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 116 */;
	uint cocci_id/* drivers/infiniband/hw/hfi1/iowait.c 112 */;
}
