cocci_test_suite() {
	struct delta_ipc_cb_msg {
		struct delta_ipc_header_msg header;
		int err;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 95 */;
	struct delta_ipc_close_msg {
		struct delta_ipc_header_msg header;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 91 */;
	struct delta_ipc_decode_msg {
		struct delta_ipc_header_msg header;
		u32 param_size;
		dma_addr_t param_paddr;
		u32 status_size;
		dma_addr_t status_paddr;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 83 */;
	struct delta_ipc_set_stream_msg {
		struct delta_ipc_header_msg header;
		u32 param_size;
		dma_addr_t param_paddr;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 77 */;
	struct delta_ipc_open_msg {
		struct delta_ipc_header_msg header;
		u32 ipc_buf_size;
		dma_addr_t ipc_buf_paddr;
		char name[32];
		u32 param_size;
		dma_addr_t param_paddr;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 68 */;
	struct rpmsg_driver cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 574 */;
	struct rpmsg_device_id cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 569 */[];
	struct rpmsg_driver *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 553 */;
	struct delta_ipc_cb_msg *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 497 */;
	u32 cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 494 */;
	struct rpmsg_device *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 493 */;
	void *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 493 */;
	int cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 493 */;
	bool cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 46 */;
	struct delta_ipc_close_msg cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 439 */;
	struct delta_dev *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 437 */;
	struct delta_ctx *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 436 */;
	dma_addr_t cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 41 */;
	struct delta_ipc_decode_msg cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 326 */;
	struct delta_ipc_param *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 319 */;
	struct delta_ipc_header_msg {
		u32 tag;
		void *host_hdl;
		u32 copro_hdl;
		u32 command;
	} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 29 */;
	struct delta_ctx cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 27 */;
	struct delta_dev cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 24 */;
	struct delta_ipc_set_stream_msg cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 235 */;
	enum delta_ipc_fw_command{DELTA_IPC_OPEN, DELTA_IPC_SET_STREAM, DELTA_IPC_DECODE, DELTA_IPC_CLOSE,} cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 16 */;
	struct delta_buf *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 118 */;
	struct delta_ipc_open_msg cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 117 */;
	struct delta_buf **cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 112 */;
	void **cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 112 */;
	const char *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 110 */;
	struct delta_ipc_header_msg *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 102 */;
	enum delta_ipc_fw_command cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 101 */;
	struct delta_ipc_ctx *cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 100 */;
	void cocci_id/* drivers/media/platform/sti/delta/delta-ipc.c 100 */;
}
