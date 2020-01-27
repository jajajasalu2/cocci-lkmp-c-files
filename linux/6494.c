cocci_test_suite() {
	char *cocci_id/* drivers/visorbus/visorchannel.c 71 */;
	void cocci_id/* drivers/visorbus/visorchannel.c 48 */;
	ulong cocci_id/* drivers/visorbus/visorchannel.c 385 */;
	size_t cocci_id/* drivers/visorbus/visorchannel.c 354 */;
	const guid_t *cocci_id/* drivers/visorbus/visorchannel.c 350 */;
	u64 cocci_id/* drivers/visorbus/visorchannel.c 349 */;
	gfp_t cocci_id/* drivers/visorbus/visorchannel.c 349 */;
	unsigned long cocci_id/* drivers/visorbus/visorchannel.c 289 */;
	struct visorchannel {
		u64 physaddr;
		ulong nbytes;
		void *mapped;
		bool requested;
		struct channel_header chan_hdr;
		guid_t guid;
		bool needs_lock;
		spinlock_t insert_lock;
		spinlock_t remove_lock;
		guid_t type;
		guid_t inst;
	} cocci_id/* drivers/visorbus/visorchannel.c 28 */;
	struct signal_queue_header cocci_id/* drivers/visorbus/visorchannel.c 270 */;
	u32 cocci_id/* drivers/visorbus/visorchannel.c 268 */;
	bool cocci_id/* drivers/visorbus/visorchannel.c 268 */;
	struct visorchannel *cocci_id/* drivers/visorbus/visorchannel.c 268 */;
	const guid_t cocci_id/* drivers/visorbus/visorchannel.c 26 */;
	void *cocci_id/* drivers/visorbus/visorchannel.c 190 */;
	struct channel_header cocci_id/* drivers/visorbus/visorchannel.c 179 */;
	struct signal_queue_header *cocci_id/* drivers/visorbus/visorchannel.c 159 */;
	struct channel_header *cocci_id/* drivers/visorbus/visorchannel.c 158 */;
	int cocci_id/* drivers/visorbus/visorchannel.c 158 */;
}
