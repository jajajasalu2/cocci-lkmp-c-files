cocci_test_suite() {
	int cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 93 */;
	struct ishtp_fw_client *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 862 */;
	struct ishtp_cl_data cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 847 */;
	struct work_struct *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 843 */;
	const guid_t cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 79 */;
	struct ishtp_cl *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 771 */;
	struct shim_fw_info cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 770 */;
	u8 *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 750 */;
	struct loader_msg_hdr cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 745 */;
	struct loader_start cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 744 */;
	u64 cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 674 */;
	size_t cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 648 */;
	struct loader_xfer_dma_fragment cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 636 */;
	u32 cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 634 */;
	dma_addr_t cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 633 */;
	void *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 632 */;
	const struct shim_fw_info cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 629 */;
	const struct firmware *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 628 */;
	struct loader_xfer_ipc_fragment *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 552 */;
	struct loader_xfer_query_response cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 471 */;
	struct loader_xfer_query cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 470 */;
	struct shim_fw_info *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 467 */;
	struct ishtp_cl_rb *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 446 */;
	struct ishtp_cl_device *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 444 */;
	enum ish_loader_commands{LOADER_CMD_XFER_QUERY=0, LOADER_CMD_XFER_FRAGMENT, LOADER_CMD_START,} cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 42 */;
	struct loader_msg_hdr *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 283 */;
	struct device *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 255 */;
	const char *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 254 */;
	char *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 251 */;
	struct ishtp_cl_data *cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 250 */;
	struct loader_xfer_ipc_fragment cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 236 */;
	struct ishtp_cl_data {
		struct ishtp_cl *loader_ishtp_cl;
		struct ishtp_cl_device *cl_device;
		struct response_info response;
		struct work_struct work_ishtp_reset;
		struct work_struct work_fw_load;
		bool flag_retry;
		int retry_count;
	} cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 208 */;
	struct response_info {
		void *data;
		size_t max_size;
		size_t size;
		int error;
		bool received;
		wait_queue_head_t wait_queue;
	} cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 189 */;
	struct loader_start {
		struct loader_msg_hdr hdr;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 168 */;
	struct loader_xfer_dma_fragment {
		struct loader_xfer_fragment fragment;
		u64 ddr_phys_addr;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 163 */;
	struct loader_xfer_ipc_fragment {
		struct loader_xfer_fragment fragment;
		u8 data[]____cacheline_aligned;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 158 */;
	struct loader_xfer_fragment {
		struct loader_msg_hdr hdr;
		u32 xfer_mode;
		u32 offset;
		u32 size;
		u32 is_last;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 150 */;
	struct loader_xfer_query_response {
		struct loader_msg_hdr hdr;
		struct shim_fw_info fw_info;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 145 */;
	struct shim_fw_info {
		struct ish_fw_version ish_fw_version;
		u32 protocol_version;
		union loader_version ldr_version;
		struct loader_capability ldr_capability;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 138 */;
	struct loader_capability {
		u32 max_fw_image_size;
		u32 xfer_mode;
		u32 max_dma_buf_size;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 132 */;
	union loader_version {
		u32 value;
		struct {
			u8 major;
			u8 minor;
			u8 hotfix;
			u8 build;
		};
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 122 */;
	struct ish_fw_version {
		u16 major;
		u16 minor;
		u16 hotfix;
		u16 build;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 115 */;
	struct loader_xfer_query {
		struct loader_msg_hdr hdr;
		u32 image_size;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 110 */;
	void __exit cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 1070 */;
	void cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 1070 */;
	int __init cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 1065 */;
	struct ishtp_cl_driver cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 1057 */;
	struct loader_msg_hdr {
		u8 command;
		u8 reserved[2];
		u8 status;
	}__packed cocci_id/* drivers/hid/intel-ish-hid/ishtp-fw-loader.c 104 */;
}
