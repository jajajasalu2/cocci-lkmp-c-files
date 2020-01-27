cocci_test_suite() {
	bool cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 925 */;
	struct vsp1_pre_ext_dl_body {
		u32 opcode;
		u32 flags;
		u32 address_set;
		u32 reserved;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 85 */;
	struct vsp1_dl_header_list *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 752 */;
	struct vsp1_dl_entry {
		u32 addr;
		u32 data;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 73 */;
	int cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 710 */;
	struct vsp1_dl_header_extended {
		struct vsp1_dl_header header;
		struct vsp1_dl_ext_header ext;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 68 */;
	struct vsp1_dl_list *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 626 */;
	void cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 626 */;
	struct vsp1_dl_list cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 610 */;
	void *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 567 */;
	struct vsp1_dl_manager *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 532 */;
	struct vsp1_dl_ext_cmd cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 492 */;
	struct vsp1_dl_ext_header {
		u32 padding;
		u16 pre_ext_dl_num_cmd;
		u16 flags;
		u32 pre_ext_dl_plist;
		u32 post_ext_dl_num_cmd;
		u32 post_ext_dl_plist;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 49 */;
	struct vsp1_dl_ext_cmd *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 457 */;
	struct vsp1_pre_ext_dl_body cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 443 */;
	enum vsp1_extcmd_type cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 423 */;
	struct vsp1_dl_cmd_pool *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 422 */;
	const struct vsp1_extended_command_info cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 405 */[];
	struct vsp1_extended_command_info {
		u16 opcode;
		size_t body_size;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 400 */;
	enum vsp1_extcmd_type{VSP1_EXTCMD_AUTODISP, VSP1_EXTCMD_AUTOFLD,} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 395 */;
	u32 cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 380 */;
	struct vsp1_dl_body cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 337 */;
	unsigned long cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 332 */;
	struct vsp1_dl_header {
		u32 num_lists;
		struct vsp1_dl_header_list lists[8];
		u32 next_header;
		u32 flags;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 33 */;
	struct vsp1_dl_body_pool *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 329 */;
	struct vsp1_dl_body *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 329 */;
	struct vsp1_dl_header_list {
		u32 num_bytes;
		u32 addr;
	}__packed cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 28 */;
	struct vsp1_dl_entry cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 267 */;
	size_t cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 249 */;
	struct vsp1_device *cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 248 */;
	unsigned int cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 248 */;
	struct vsp1_dl_manager {
		unsigned int index;
		bool singleshot;
		struct vsp1_device *vsp1;
		spinlock_t lock;
		struct list_head free;
		struct vsp1_dl_list *active;
		struct vsp1_dl_list *queued;
		struct vsp1_dl_list *pending;
		struct vsp1_dl_body_pool *pool;
		struct vsp1_dl_cmd_pool *cmdpool;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 216 */;
	struct vsp1_dl_list {
		struct list_head list;
		struct vsp1_dl_manager *dlm;
		struct vsp1_dl_header *header;
		struct vsp1_dl_ext_header *extension;
		dma_addr_t dma;
		struct vsp1_dl_body *body0;
		struct list_head bodies;
		struct vsp1_dl_ext_cmd *pre_cmd;
		struct vsp1_dl_ext_cmd *post_cmd;
		bool has_chain;
		struct list_head chain;
		unsigned int flags;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 183 */;
	struct vsp1_dl_cmd_pool {
		dma_addr_t dma;
		size_t size;
		void *mem;
		struct vsp1_dl_ext_cmd *cmds;
		struct list_head free;
		spinlock_t lock;
		struct vsp1_device *vsp1;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 154 */;
	struct vsp1_dl_body_pool {
		dma_addr_t dma;
		size_t size;
		void *mem;
		struct vsp1_dl_body *bodies;
		struct list_head free;
		spinlock_t lock;
		struct vsp1_device *vsp1;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 130 */;
	struct vsp1_dl_header cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 1115 */;
	struct vsp1_dl_header_extended cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 1114 */;
	struct vsp1_dl_body {
		struct list_head list;
		struct list_head free;
		refcount_t refcnt;
		struct vsp1_dl_body_pool *pool;
		struct vsp1_dl_entry *entries;
		dma_addr_t dma;
		size_t size;
		unsigned int num_entries;
		unsigned int max_entries;
	} cocci_id/* drivers/media/platform/vsp1/vsp1_dl.c 104 */;
}
