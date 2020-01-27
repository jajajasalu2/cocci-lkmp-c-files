cocci_test_suite() {
	struct nvme_completion *cocci_id/* drivers/nvme/target/loop.c 96 */;
	struct nvme_loop_queue cocci_id/* drivers/nvme/target/loop.c 95 */;
	struct nvmet_req *cocci_id/* drivers/nvme/target/loop.c 92 */;
	u32 cocci_id/* drivers/nvme/target/loop.c 85 */;
	struct blk_mq_tags *cocci_id/* drivers/nvme/target/loop.c 83 */;
	struct nvme_loop_iod *cocci_id/* drivers/nvme/target/loop.c 77 */;
	struct request *cocci_id/* drivers/nvme/target/loop.c 75 */;
	struct nvme_loop_ctrl *cocci_id/* drivers/nvme/target/loop.c 703 */;
	void __exit cocci_id/* drivers/nvme/target/loop.c 701 */;
	void cocci_id/* drivers/nvme/target/loop.c 701 */;
	int __init cocci_id/* drivers/nvme/target/loop.c 686 */;
	const struct nvmet_fabrics_ops cocci_id/* drivers/nvme/target/loop.c 68 */;
	struct nvmf_transport_ops cocci_id/* drivers/nvme/target/loop.c 679 */;
	void cocci_id/* drivers/nvme/target/loop.c 66 */(struct nvmet_ctrl *ctrl);
	void cocci_id/* drivers/nvme/target/loop.c 65 */(struct nvmet_req *nvme_req);
	struct nvmet_port *cocci_id/* drivers/nvme/target/loop.c 647 */;
	int cocci_id/* drivers/nvme/target/loop.c 647 */;
	bool cocci_id/* drivers/nvme/target/loop.c 571 */;
	struct nvmf_ctrl_options *cocci_id/* drivers/nvme/target/loop.c 568 */;
	struct nvme_ctrl *cocci_id/* drivers/nvme/target/loop.c 567 */;
	struct device *cocci_id/* drivers/nvme/target/loop.c 567 */;
	struct nvme_loop_queue {
		struct nvmet_cq nvme_cq;
		struct nvmet_sq nvme_sq;
		struct nvme_loop_ctrl *ctrl;
		unsigned long flags;
	} cocci_id/* drivers/nvme/target/loop.c 52 */;
	const struct nvme_ctrl_ops cocci_id/* drivers/nvme/target/loop.c 491 */;
	enum nvme_loop_queue_flags{NVME_LOOP_Q_LIVE=0,} cocci_id/* drivers/nvme/target/loop.c 48 */;
	struct nvme_loop_ctrl cocci_id/* drivers/nvme/target/loop.c 446 */;
	struct nvmet_ctrl *cocci_id/* drivers/nvme/target/loop.c 431 */;
	struct scatterlist cocci_id/* drivers/nvme/target/loop.c 345 */;
	struct nvme_loop_iod cocci_id/* drivers/nvme/target/loop.c 344 */;
	struct nvme_loop_ctrl {
		struct nvme_loop_queue *queues;
		struct blk_mq_tag_set admin_tag_set;
		struct list_head list;
		struct blk_mq_tag_set tag_set;
		struct nvme_loop_iod async_event_iod;
		struct nvme_ctrl ctrl;
		struct nvmet_ctrl *target_ctrl;
		struct nvmet_port *port;
	} cocci_id/* drivers/nvme/target/loop.c 29 */;
	const struct blk_mq_ops cocci_id/* drivers/nvme/target/loop.c 245 */;
	struct nvme_loop_queue *cocci_id/* drivers/nvme/target/loop.c 230 */;
	unsigned int cocci_id/* drivers/nvme/target/loop.c 227 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/nvme/target/loop.c 226 */;
	void *cocci_id/* drivers/nvme/target/loop.c 226 */;
	struct blk_mq_tag_set *cocci_id/* drivers/nvme/target/loop.c 203 */;
	struct nvme_loop_iod {
		struct nvme_request nvme_req;
		struct nvme_command cmd;
		struct nvme_completion cqe;
		struct nvmet_req req;
		struct nvme_loop_queue *queue;
		struct work_struct work;
		struct sg_table sg_table;
		struct scatterlist first_sgl[];
	} cocci_id/* drivers/nvme/target/loop.c 18 */;
	struct nvme_ns *cocci_id/* drivers/nvme/target/loop.c 134 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/nvme/target/loop.c 132 */;
	blk_status_t cocci_id/* drivers/nvme/target/loop.c 131 */;
	struct work_struct *cocci_id/* drivers/nvme/target/loop.c 123 */;
}