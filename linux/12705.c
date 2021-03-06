cocci_test_suite() {
	struct context cocci_id/* drivers/firewire/ohci.c 99 */;
	unsigned long cocci_id/* drivers/firewire/ohci.c 980 */;
	struct descriptor *cocci_id/* drivers/firewire/ohci.c 976 */;
	struct page *cocci_id/* drivers/firewire/ohci.c 975 */[AR_BUFFERS + AR_WRAPAROUND_PAGES];
	u32 cocci_id/* drivers/firewire/ohci.c 971 */;
	void *cocci_id/* drivers/firewire/ohci.c 928 */;
	struct ar_context {
		struct fw_ohci *ohci;
		struct page *pages[AR_BUFFERS];
		void *buffer;
		struct descriptor *descriptors;
		dma_addr_t descriptors_bus;
		void *pointer;
		unsigned int last_buffer_index;
		u32 regs;
		struct tasklet_struct tasklet;
	} cocci_id/* drivers/firewire/ohci.c 87 */;
	__u32 cocci_id/* drivers/firewire/ohci.c 813 */;
	struct fw_packet cocci_id/* drivers/firewire/ohci.c 801 */;
	__le16 cocci_id/* drivers/firewire/ohci.c 721 */;
	unsigned int *cocci_id/* drivers/firewire/ohci.c 718 */;
	struct fw_ohci *cocci_id/* drivers/firewire/ohci.c 692 */;
	const char *cocci_id/* drivers/firewire/ohci.c 690 */;
	void cocci_id/* drivers/firewire/ohci.c 690 */;
	dma_addr_t cocci_id/* drivers/firewire/ohci.c 652 */;
	struct ar_context *cocci_id/* drivers/firewire/ohci.c 652 */;
	unsigned int cocci_id/* drivers/firewire/ohci.c 652 */;
	struct descriptor {
		__le16 req_count;
		__le16 control;
		__le32 data_address;
		__le32 branch_address;
		__le16 res_count;
		__le16 transfer_status;
	}__attribute__((aligned(16))) cocci_id/* drivers/firewire/ohci.c 64 */;
	const struct fw_ohci *cocci_id/* drivers/firewire/ohci.c 537 */;
	__be32 cocci_id/* drivers/firewire/ohci.c 492 */;
	char cocci_id/* drivers/firewire/ohci.c 475 */[12];
	const char *cocci_id/* drivers/firewire/ohci.c 441 */[];
	u32 *cocci_id/* drivers/firewire/ohci.c 410 */;
	int cocci_id/* drivers/firewire/ohci.c 410 */;
	char cocci_id/* drivers/firewire/ohci.c 410 */;
	const char cocci_id/* drivers/firewire/ohci.c 408 */[];
	void __exit cocci_id/* drivers/firewire/ohci.c 3874 */;
	int __init cocci_id/* drivers/firewire/ohci.c 3865 */;
	struct pci_driver cocci_id/* drivers/firewire/ohci.c 3854 */;
	const struct pci_device_id cocci_id/* drivers/firewire/ohci.c 3847 */[];
	pm_message_t cocci_id/* drivers/firewire/ohci.c 3797 */;
	unsigned short cocci_id/* drivers/firewire/ohci.c 3612 */;
	const struct pci_device_id *cocci_id/* drivers/firewire/ohci.c 3552 */;
	struct pci_dev *cocci_id/* drivers/firewire/ohci.c 3551 */;
	struct device_node *cocci_id/* drivers/firewire/ohci.c 3538 */;
	const struct fw_card_driver cocci_id/* drivers/firewire/ohci.c 3500 */;
	struct fw_iso_buffer *cocci_id/* drivers/firewire/ohci.c 3435 */;
	struct fw_iso_packet *cocci_id/* drivers/firewire/ohci.c 3434 */;
	struct device *cocci_id/* drivers/firewire/ohci.c 3301 */;
	u64 *cocci_id/* drivers/firewire/ohci.c 2938 */;
	struct fw_iso_context *cocci_id/* drivers/firewire/ohci.c 2932 */;
	const struct {
		unsigned short vendor,device,revision,flags;
	} cocci_id/* drivers/firewire/ohci.c 283 */[];
	struct iso_context cocci_id/* drivers/firewire/ohci.c 2801 */;
	u16 cocci_id/* drivers/firewire/ohci.c 2745 */;
	const u32 *cocci_id/* drivers/firewire/ohci.c 2734 */;
	struct iso_context *cocci_id/* drivers/firewire/ohci.c 2734 */;
	char cocci_id/* drivers/firewire/ohci.c 261 */[];
	struct workqueue_struct *cocci_id/* drivers/firewire/ohci.c 232 */;
	const u8 cocci_id/* drivers/firewire/ohci.c 2246 */[];
	const __be32 *cocci_id/* drivers/firewire/ohci.c 2183 */;
	__be32 *cocci_id/* drivers/firewire/ohci.c 2183 */;
	size_t cocci_id/* drivers/firewire/ohci.c 2183 */;
	irqreturn_t cocci_id/* drivers/firewire/ohci.c 2062 */;
	bool cocci_id/* drivers/firewire/ohci.c 1885 */;
	struct fw_ohci cocci_id/* drivers/firewire/ohci.c 1880 */;
	struct work_struct *cocci_id/* drivers/firewire/ohci.c 1877 */;
	struct fw_ohci {
		struct fw_card card;
	__iomem
		char *registers;
		int node_id;
		int generation;
		int request_generation;
		unsigned quirks;
		unsigned int pri_req_max;
		u32 bus_time;
		bool bus_time_running;
		bool is_root;
		bool csr_state_setclear_abdicate;
		int n_ir;
		int n_it;
		spinlock_t lock;
		struct mutex phy_reg_mutex;
		void *misc_buffer;
		dma_addr_t misc_buffer_bus;
		struct ar_context ar_request_ctx;
		struct ar_context ar_response_ctx;
		struct context at_request_ctx;
		struct context at_response_ctx;
		u32 it_context_support;
		u32 it_context_mask;
		struct iso_context *it_context_list;
		u64 ir_context_channels;
		u32 ir_context_support;
		u32 ir_context_mask;
		struct iso_context *ir_context_list;
		u64 mc_channels;
		bool mc_allocated;
		__be32 *config_rom;
		dma_addr_t config_rom_bus;
		__be32 *next_config_rom;
		dma_addr_t next_config_rom_bus;
		__be32 next_header;
		__le32 *self_id;
		dma_addr_t self_id_bus;
		struct work_struct bus_reset_work;
		u32 self_id_buffer[512];
	} cocci_id/* drivers/firewire/ohci.c 178 */;
	s32 cocci_id/* drivers/firewire/ohci.c 1717 */;
	char cocci_id/* drivers/firewire/ohci.c 1666 */[8];
	struct iso_context {
		struct fw_iso_context base;
		struct context context;
		void *header;
		size_t header_length;
		unsigned long flushing_completions;
		u32 mc_buffer_bus;
		u16 mc_completed;
		u16 last_timestamp;
		u8 sync;
		u8 tags;
	} cocci_id/* drivers/firewire/ohci.c 163 */;
	unsigned long long cocci_id/* drivers/firewire/ohci.c 1601 */;
	u64 cocci_id/* drivers/firewire/ohci.c 1593 */;
	struct context *cocci_id/* drivers/firewire/ohci.c 1418 */;
	struct driver_data cocci_id/* drivers/firewire/ohci.c 1363 */;
	__le32 cocci_id/* drivers/firewire/ohci.c 1334 */;
	__le32 *cocci_id/* drivers/firewire/ohci.c 1295 */;
	struct driver_data *cocci_id/* drivers/firewire/ohci.c 1293 */;
	struct fw_packet *cocci_id/* drivers/firewire/ohci.c 1289 */;
	struct driver_data {
		u8 inline_data[8];
		struct fw_packet *packet;
	} cocci_id/* drivers/firewire/ohci.c 1278 */;
	struct descriptor_buffer cocci_id/* drivers/firewire/ohci.c 1199 */;
	dma_addr_t *cocci_id/* drivers/firewire/ohci.c 1180 */;
	struct context {
		struct fw_ohci *ohci;
		u32 regs;
		int total_allocation;
		u32 current_bus;
		bool running;
		bool flushing;
		struct list_head buffer_list;
		struct descriptor_buffer *buffer_tail;
		struct descriptor *last;
		struct descriptor *prev;
		int prev_z;
		descriptor_callback_t callback;
		struct tasklet_struct tasklet;
	} cocci_id/* drivers/firewire/ohci.c 117 */;
	struct fw_card *cocci_id/* drivers/firewire/ohci.c 1169 */;
	descriptor_callback_t cocci_id/* drivers/firewire/ohci.c 1135 */;
	struct descriptor_buffer *cocci_id/* drivers/firewire/ohci.c 1101 */;
	struct descriptor_buffer {
		struct list_head list;
		dma_addr_t buffer_bus;
		size_t buffer_size;
		size_t used;
		struct descriptor buffer[0];
	} cocci_id/* drivers/firewire/ohci.c 109 */;
	struct descriptor cocci_id/* drivers/firewire/ohci.c 1015 */;
	int (*cocci_id/* drivers/firewire/ohci.c 101 */)(struct context *ctx,
							 struct descriptor *d,
							 struct descriptor *last);
}
