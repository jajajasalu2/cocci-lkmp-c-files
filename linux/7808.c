cocci_test_suite() {
	phys_addr_t cocci_id/* drivers/ntb/test/ntb_tool.c 876 */;
	struct tool_mw_wrap *cocci_id/* drivers/ntb/test/ntb_tool.c 873 */;
	loff_t cocci_id/* drivers/ntb/test/ntb_tool.c 733 */;
	unsigned int cocci_id/* drivers/ntb/test/ntb_tool.c 708 */;
	resource_size_t cocci_id/* drivers/ntb/test/ntb_tool.c 646 */;
	struct tool_mw *cocci_id/* drivers/ntb/test/ntb_tool.c 626 */;
	struct tool_peer *cocci_id/* drivers/ntb/test/ntb_tool.c 518 */;
	char cocci_id/* drivers/ntb/test/ntb_tool.c 498 */[3];
	bool cocci_id/* drivers/ntb/test/ntb_tool.c 471 */;
	char *cocci_id/* drivers/ntb/test/ntb_tool.c 365 */;
	int (*cocci_id/* drivers/ntb/test/ntb_tool.c 362 */)(struct ntb_dev *,
							     u64);
	char cocci_id/* drivers/ntb/test/ntb_tool.c 346 */[TOOL_BUF_LEN];
	u64 (*cocci_id/* drivers/ntb/test/ntb_tool.c 343 */)(struct ntb_dev *);
	const struct ntb_ctx_ops cocci_id/* drivers/ntb/test/ntb_tool.c 330 */;
	u64 cocci_id/* drivers/ntb/test/ntb_tool.c 307 */;
	void *cocci_id/* drivers/ntb/test/ntb_tool.c 304 */;
	enum ntb_width cocci_id/* drivers/ntb/test/ntb_tool.c 293 */;
	enum ntb_speed cocci_id/* drivers/ntb/test/ntb_tool.c 292 */;
	struct dentry *cocci_id/* drivers/ntb/test/ntb_tool.c 282 */;
	struct tool_ctx {
		struct ntb_dev *ntb;
		wait_queue_head_t link_wq;
		wait_queue_head_t db_wq;
		wait_queue_head_t msg_wq;
		int outmw_cnt;
		struct tool_mw *outmws;
		int peer_cnt;
		struct tool_peer *peers;
		int inmsg_cnt;
		struct tool_msg *inmsgs;
		int inspad_cnt;
		struct tool_spad *inspads;
		struct dentry *dbgfs_dir;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 256 */;
	struct tool_peer {
		int pidx;
		struct tool_ctx *tc;
		int inmw_cnt;
		struct tool_mw *inmws;
		int outmw_cnt;
		struct tool_mw_wrap *outmws;
		int outmsg_cnt;
		struct tool_msg *outmsgs;
		int outspad_cnt;
		struct tool_spad *outspads;
		struct dentry *dbgfs_dir;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 242 */;
	struct tool_spad {
		int sidx;
		int pidx;
		struct tool_ctx *tc;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 236 */;
	struct tool_msg {
		int midx;
		int pidx;
		struct tool_ctx *tc;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 230 */;
	struct tool_mw_wrap {
		int pidx;
		struct tool_mw *mw;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 225 */;
	struct tool_mw {
		int widx;
		int pidx;
		struct tool_ctx *tc;
		union {
			u8 *mm_base;
			u8 __iomem *io_base;
		};
		union {
			dma_addr_t dma_base;
			u64 tr_base;
		};
		resource_size_t size;
		struct dentry *dbgfs_file;
	} cocci_id/* drivers/ntb/test/ntb_tool.c 205 */;
	void __exit cocci_id/* drivers/ntb/test/ntb_tool.c 1687 */;
	int __init cocci_id/* drivers/ntb/test/ntb_tool.c 1672 */;
	struct ntb_client cocci_id/* drivers/ntb/test/ntb_tool.c 1665 */;
	struct ntb_client *cocci_id/* drivers/ntb/test/ntb_tool.c 1610 */;
	struct tool_ctx *cocci_id/* drivers/ntb/test/ntb_tool.c 1463 */;
	void cocci_id/* drivers/ntb/test/ntb_tool.c 1463 */;
	struct ntb_dev *cocci_id/* drivers/ntb/test/ntb_tool.c 1441 */;
	u32 cocci_id/* drivers/ntb/test/ntb_tool.c 1283 */;
	struct tool_msg *cocci_id/* drivers/ntb/test/ntb_tool.c 1280 */;
	struct tool_spad *cocci_id/* drivers/ntb/test/ntb_tool.c 1198 */;
	loff_t *cocci_id/* drivers/ntb/test/ntb_tool.c 1129 */;
	size_t cocci_id/* drivers/ntb/test/ntb_tool.c 1129 */;
	const char __user *cocci_id/* drivers/ntb/test/ntb_tool.c 1128 */;
	struct file *cocci_id/* drivers/ntb/test/ntb_tool.c 1127 */;
	ssize_t cocci_id/* drivers/ntb/test/ntb_tool.c 1127 */;
	char __user *cocci_id/* drivers/ntb/test/ntb_tool.c 1061 */;
	int cocci_id/* drivers/ntb/test/ntb_tool.c 1011 */;
}
