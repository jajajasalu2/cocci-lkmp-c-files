cocci_test_suite() {
	struct dm_hot_add_response cocci_id/* drivers/hv/hv_balloon.c 987 */;
	struct hv_hotadd_state cocci_id/* drivers/hv/hv_balloon.c 957 */;
	struct hv_hotadd_gap cocci_id/* drivers/hv/hv_balloon.c 810 */;
	enum dm_message_type{DM_ERROR=0, DM_VERSION_REQUEST=1, DM_VERSION_RESPONSE=2, DM_CAPABILITIES_REPORT=3, DM_CAPABILITIES_RESPONSE=4, DM_STATUS_REPORT=5, DM_BALLOON_REQUEST=6, DM_BALLOON_RESPONSE=7, DM_UNBALLOON_REQUEST=8, DM_UNBALLOON_RESPONSE=9, DM_MEM_HOT_ADD_REQUEST=10, DM_MEM_HOT_ADD_RESPONSE=11, DM_VERSION_03_MAX=11, DM_INFO_MESSAGE=12, DM_VERSION_1_MAX=12,} cocci_id/* drivers/hv/hv_balloon.c 76 */;
	struct notifier_block cocci_id/* drivers/hv/hv_balloon.c 668 */;
	struct memory_notify *cocci_id/* drivers/hv/hv_balloon.c 631 */;
	struct notifier_block *cocci_id/* drivers/hv/hv_balloon.c 628 */;
	enum{DYNMEM_PROTOCOL_VERSION_1=DYNMEM_MAKE_VERSION(0, 3), DYNMEM_PROTOCOL_VERSION_2=DYNMEM_MAKE_VERSION(1,
														0), DYNMEM_PROTOCOL_VERSION_3=DYNMEM_MAKE_VERSION(2,
																				  0), DYNMEM_PROTOCOL_VERSION_WIN7=DYNMEM_PROTOCOL_VERSION_1, DYNMEM_PROTOCOL_VERSION_WIN8=DYNMEM_PROTOCOL_VERSION_2, DYNMEM_PROTOCOL_VERSION_WIN10=DYNMEM_PROTOCOL_VERSION_3, DYNMEM_PROTOCOL_VERSION_CURRENT=DYNMEM_PROTOCOL_VERSION_WIN10,} cocci_id/* drivers/hv/hv_balloon.c 58 */;
	void cocci_id/* drivers/hv/hv_balloon.c 571 */(struct hv_dynmem_device *dm);
	struct hv_dynmem_device cocci_id/* drivers/hv/hv_balloon.c 569 */;
	struct hv_dynmem_device {
		struct hv_device *dev;
		enum hv_dm_state state;
		struct completion host_event;
		struct completion config_event;
		unsigned int num_pages_ballooned;
		unsigned int num_pages_onlined;
		unsigned int num_pages_added;
		struct balloon_state balloon_wrk;
		struct hot_add_wrk ha_wrk;
		bool host_specified_ha_region;
		struct completion ol_waitevent;
		bool ha_waiting;
		struct task_struct *thread;
		spinlock_t ha_lock;
		struct list_head ha_region_list;
		__u32 next_version;
		__u32 version;
	} cocci_id/* drivers/hv/hv_balloon.c 503 */;
	__u8 cocci_id/* drivers/hv/hv_balloon.c 499 */[HV_HYP_PAGE_SIZE];
	enum hv_dm_state{DM_INITIALIZING=0, DM_INITIALIZED, DM_BALLOON_UP, DM_BALLOON_DOWN, DM_HOT_ADD, DM_INIT_ERROR,} cocci_id/* drivers/hv/hv_balloon.c 488 */;
	atomic_t cocci_id/* drivers/hv/hv_balloon.c 480 */;
	uint cocci_id/* drivers/hv/hv_balloon.c 468 */;
	bool cocci_id/* drivers/hv/hv_balloon.c 461 */;
	struct hot_add_wrk {
		union dm_mem_page_range ha_page_range;
		union dm_mem_page_range ha_region_range;
		struct work_struct wrk;
	} cocci_id/* drivers/hv/hv_balloon.c 455 */;
	struct balloon_state {
		__u32 num_pages;
		struct work_struct wrk;
	} cocci_id/* drivers/hv/hv_balloon.c 450 */;
	struct hv_hotadd_gap {
		struct list_head list;
		unsigned long start_pfn;
		unsigned long end_pfn;
	} cocci_id/* drivers/hv/hv_balloon.c 444 */;
	struct hv_hotadd_state {
		struct list_head list;
		unsigned long start_pfn;
		unsigned long covered_start_pfn;
		unsigned long covered_end_pfn;
		unsigned long ha_end_pfn;
		unsigned long end_pfn;
		struct list_head gap_list;
	} cocci_id/* drivers/hv/hv_balloon.c 431 */;
	struct dm_info_msg {
		struct dm_header hdr;
		__u32 reserved;
		__u32 info_size;
		__u8 info[];
	} cocci_id/* drivers/hv/hv_balloon.c 408 */;
	struct dm_info_header {
		enum dm_info_type type;
		__u32 data_size;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 394 */;
	enum dm_info_type{INFO_TYPE_MAX_PAGE_CNT=0, MAX_INFO_TYPE,} cocci_id/* drivers/hv/hv_balloon.c 384 */;
	struct dm_hot_add_response {
		struct dm_header hdr;
		__u32 page_count;
		__u32 result;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 374 */;
	struct dm_hot_add {
		struct dm_header hdr;
		union dm_mem_page_range range;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 349 */;
	struct dm_unballoon_response {
		struct dm_header hdr;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 337 */;
	struct dm_unballoon_request {
		struct dm_header hdr;
		__u32 more_pages:1;
		__u32 reservedz:31;
		__u32 range_count;
		union dm_mem_page_range range_array[];
	}__packed cocci_id/* drivers/hv/hv_balloon.c 323 */;
	struct dm_balloon_response {
		struct dm_header hdr;
		__u32 reservedz;
		__u32 more_pages:1;
		__u32 range_count:31;
		union dm_mem_page_range range_array[];
	}__packed cocci_id/* drivers/hv/hv_balloon.c 300 */;
	struct dm_balloon {
		struct dm_header hdr;
		__u32 num_pages;
		__u32 reservedz;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 279 */;
	struct dm_status {
		struct dm_header hdr;
		__u64 num_avail;
		__u64 num_committed;
		__u64 page_file_size;
		__u64 zero_free;
		__u32 page_file_writes;
		__u32 io_diff;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 260 */;
	struct dm_capabilities_resp_msg {
		struct dm_header hdr;
		__u64 is_accepted:1;
		__u64 reservedz:63;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 234 */;
	struct dm_capabilities {
		struct dm_header hdr;
		union dm_caps caps;
		__u64 min_page_cnt;
		__u64 max_page_number;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 217 */;
	struct dm_version_response {
		struct dm_header hdr;
		__u64 is_accepted:1;
		__u64 reservedz:63;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 206 */;
	struct dm_version_request {
		struct dm_header hdr;
		union dm_version version;
		__u32 is_last_attempt:1;
		__u32 reservedz:31;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 188 */;
	int __init cocci_id/* drivers/hv/hv_balloon.c 1854 */;
	struct hv_driver cocci_id/* drivers/hv/hv_balloon.c 1842 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/hv/hv_balloon.c 1833 */[];
	struct hv_hotadd_gap *cocci_id/* drivers/hv/hv_balloon.c 1751 */;
	struct hv_hotadd_state *cocci_id/* drivers/hv/hv_balloon.c 1750 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/hv/hv_balloon.c 1690 */;
	struct dm_message {
		struct dm_header hdr;
		__u8 data[];
	}__packed cocci_id/* drivers/hv/hv_balloon.c 168 */;
	unsigned long cocci_id/* drivers/hv/hv_balloon.c 1585 */;
	struct dm_capabilities cocci_id/* drivers/hv/hv_balloon.c 1584 */;
	struct dm_version_request cocci_id/* drivers/hv/hv_balloon.c 1583 */;
	struct hv_device *cocci_id/* drivers/hv/hv_balloon.c 1581 */;
	struct dm_info_msg *cocci_id/* drivers/hv/hv_balloon.c 1570 */;
	struct dm_header {
		__u16 type;
		__u16 size;
		__u32 trans_id;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 157 */;
	struct dm_hot_add cocci_id/* drivers/hv/hv_balloon.c 1545 */;
	struct dm_capabilities_resp_msg *cocci_id/* drivers/hv/hv_balloon.c 1512 */;
	struct dm_version_response *cocci_id/* drivers/hv/hv_balloon.c 1507 */;
	struct dm_hot_add *cocci_id/* drivers/hv/hv_balloon.c 1492 */;
	struct dm_balloon *cocci_id/* drivers/hv/hv_balloon.c 1491 */;
	struct dm_header *cocci_id/* drivers/hv/hv_balloon.c 1489 */;
	struct dm_message *cocci_id/* drivers/hv/hv_balloon.c 1488 */;
	u64 cocci_id/* drivers/hv/hv_balloon.c 1487 */;
	u32 cocci_id/* drivers/hv/hv_balloon.c 1486 */;
	void *cocci_id/* drivers/hv/hv_balloon.c 1483 */;
	void cocci_id/* drivers/hv/hv_balloon.c 1391 */(void *context);
	struct dm_unballoon_response cocci_id/* drivers/hv/hv_balloon.c 1363 */;
	union dm_mem_page_range *cocci_id/* drivers/hv/hv_balloon.c 1361 */;
	struct dm_unballoon_request *cocci_id/* drivers/hv/hv_balloon.c 1359 */;
	void cocci_id/* drivers/hv/hv_balloon.c 1358 */;
	union dm_mem_page_range {
		struct {
			__u64 start_page:40;
			__u64 page_cnt:24;
		} finfo;
		__u64 page_range;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 131 */;
	struct dm_balloon_response cocci_id/* drivers/hv/hv_balloon.c 1302 */;
	long cocci_id/* drivers/hv/hv_balloon.c 1273 */;
	struct work_struct *cocci_id/* drivers/hv/hv_balloon.c 1264 */;
	union dm_mem_page_range cocci_id/* drivers/hv/hv_balloon.c 1224 */;
	struct page *cocci_id/* drivers/hv/hv_balloon.c 1218 */;
	int cocci_id/* drivers/hv/hv_balloon.c 1215 */;
	struct dm_balloon_response *cocci_id/* drivers/hv/hv_balloon.c 1214 */;
	struct hv_dynmem_device *cocci_id/* drivers/hv/hv_balloon.c 1212 */;
	unsigned int cocci_id/* drivers/hv/hv_balloon.c 1212 */;
	__u64 cocci_id/* drivers/hv/hv_balloon.c 1198 */;
	union dm_caps {
		struct {
			__u64 balloon:1;
			__u64 hot_add:1;
			__u64 hot_add_alignment:4;
			__u64 reservedz:58;
		} cap_bits;
		__u64 caps;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 115 */;
	struct dm_status cocci_id/* drivers/hv/hv_balloon.c 1134 */;
	__u64 *cocci_id/* drivers/hv/hv_balloon.c 1080 */;
	struct dm_info_header *cocci_id/* drivers/hv/hv_balloon.c 1073 */;
	union dm_version {
		struct {
			__u16 minor_version;
			__u16 major_version;
		};
		__u32 version;
	}__packed cocci_id/* drivers/hv/hv_balloon.c 106 */;
}
