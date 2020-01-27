cocci_test_suite() {
	bool cocci_id/* block/blk-rq-qos.c 9 */;
	atomic_t *cocci_id/* block/blk-rq-qos.c 9 */;
	unsigned int cocci_id/* block/blk-rq-qos.c 9 */;
	struct request *cocci_id/* block/blk-rq-qos.c 41 */;
	struct rq_qos *cocci_id/* block/blk-rq-qos.c 32 */;
	struct bio *cocci_id/* block/blk-rq-qos.c 32 */;
	void cocci_id/* block/blk-rq-qos.c 32 */;
	struct request_queue *cocci_id/* block/blk-rq-qos.c 295 */;
	struct rq_qos_wait_data cocci_id/* block/blk-rq-qos.c 253 */;
	cleanup_cb_t *cocci_id/* block/blk-rq-qos.c 251 */;
	acquire_inflight_cb_t *cocci_id/* block/blk-rq-qos.c 250 */;
	struct rq_wait *cocci_id/* block/blk-rq-qos.c 249 */;
	void *cocci_id/* block/blk-rq-qos.c 249 */;
	struct rq_qos_wait_data *cocci_id/* block/blk-rq-qos.c 215 */;
	struct wait_queue_entry *cocci_id/* block/blk-rq-qos.c 212 */;
	int cocci_id/* block/blk-rq-qos.c 212 */;
	struct rq_qos_wait_data {
		struct wait_queue_entry wq;
		struct task_struct *task;
		struct rq_wait *rqw;
		acquire_inflight_cb_t *cb;
		void *private_data;
		bool got_token;
	} cocci_id/* block/blk-rq-qos.c 203 */;
	struct rq_depth *cocci_id/* block/blk-rq-qos.c 116 */;
}
