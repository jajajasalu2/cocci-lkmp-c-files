cocci_test_suite() {
	struct pci_read_block *cocci_id/* drivers/pci/controller/pci-hyperv.c 942 */;
	struct hv_read_config_compl cocci_id/* drivers/pci/controller/pci-hyperv.c 941 */;
	enum pci_message_type{PCI_MESSAGE_BASE=0x42490000, PCI_BUS_RELATIONS=PCI_MESSAGE_BASE + 0, PCI_QUERY_BUS_RELATIONS=PCI_MESSAGE_BASE + 1, PCI_POWER_STATE_CHANGE=PCI_MESSAGE_BASE + 4, PCI_QUERY_RESOURCE_REQUIREMENTS=PCI_MESSAGE_BASE + 5, PCI_QUERY_RESOURCE_RESOURCES=PCI_MESSAGE_BASE + 6, PCI_BUS_D0ENTRY=PCI_MESSAGE_BASE + 7, PCI_BUS_D0EXIT=PCI_MESSAGE_BASE + 8, PCI_READ_BLOCK=PCI_MESSAGE_BASE + 9, PCI_WRITE_BLOCK=PCI_MESSAGE_BASE + 0xA, PCI_EJECT=PCI_MESSAGE_BASE + 0xB, PCI_QUERY_STOP=PCI_MESSAGE_BASE + 0xC, PCI_REENABLE=PCI_MESSAGE_BASE + 0xD, PCI_QUERY_STOP_FAILED=PCI_MESSAGE_BASE + 0xE, PCI_EJECTION_COMPLETE=PCI_MESSAGE_BASE + 0xF, PCI_RESOURCES_ASSIGNED=PCI_MESSAGE_BASE + 0x10, PCI_RESOURCES_RELEASED=PCI_MESSAGE_BASE + 0x11, PCI_INVALIDATE_BLOCK=PCI_MESSAGE_BASE + 0x12, PCI_QUERY_PROTOCOL_VERSION=PCI_MESSAGE_BASE + 0x13, PCI_CREATE_INTERRUPT_MESSAGE=PCI_MESSAGE_BASE + 0x14, PCI_DELETE_INTERRUPT_MESSAGE=PCI_MESSAGE_BASE + 0x15, PCI_RESOURCES_ASSIGNED2=PCI_MESSAGE_BASE + 0x16, PCI_CREATE_INTERRUPT_MESSAGE2=PCI_MESSAGE_BASE + 0x17, PCI_DELETE_INTERRUPT_MESSAGE2=PCI_MESSAGE_BASE + 0x18, PCI_MESSAGE_MAXIMUM,} cocci_id/* drivers/pci/controller/pci-hyperv.c 94 */;
	struct {
		struct pci_packet pkt;
		char buf[sizeof(struct pci_read_block)];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 937 */;
	unsigned int *cocci_id/* drivers/pci/controller/pci-hyperv.c 932 */;
	struct pci_read_block_response cocci_id/* drivers/pci/controller/pci-hyperv.c 901 */;
	struct pci_read_block_response *cocci_id/* drivers/pci/controller/pci-hyperv.c 897 */;
	struct hv_read_config_compl *cocci_id/* drivers/pci/controller/pci-hyperv.c 896 */;
	struct hv_read_config_compl {
		struct hv_pci_compl comp_pkt;
		void *buf;
		unsigned int len;
		unsigned int bytes_returned;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 879 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pci-hyperv.c 849 */;
	u32 cocci_id/* drivers/pci/controller/pci-hyperv.c 754 */;
	u8 *cocci_id/* drivers/pci/controller/pci-hyperv.c 670 */;
	void __iomem *cocci_id/* drivers/pci/controller/pci-hyperv.c 664 */;
	unsigned long cocci_id/* drivers/pci/controller/pci-hyperv.c 663 */;
	u32 *cocci_id/* drivers/pci/controller/pci-hyperv.c 661 */;
	struct hv_pci_dev *cocci_id/* drivers/pci/controller/pci-hyperv.c 660 */;
	int cocci_id/* drivers/pci/controller/pci-hyperv.c 660 */;
	void cocci_id/* drivers/pci/controller/pci-hyperv.c 660 */;
	enum pci_protocol_version_t{PCI_PROTOCOL_VERSION_1_1=PCI_MAKE_VERSION(1,
									      1), PCI_PROTOCOL_VERSION_1_2=PCI_MAKE_VERSION(1,
															    2),} cocci_id/* drivers/pci/controller/pci-hyperv.c 63 */;
	union win_slot_encoding cocci_id/* drivers/pci/controller/pci-hyperv.c 620 */;
	void cocci_id/* drivers/pci/controller/pci-hyperv.c 587 */(struct hv_pcibus_device *hv_pcibus);
	struct hv_pci_dev *cocci_id/* drivers/pci/controller/pci-hyperv.c 573 */(struct hv_pcibus_device *hbus,
										 u32 wslot);
	struct pci_response cocci_id/* drivers/pci/controller/pci-hyperv.c 565 */;
	struct hv_pci_compl *cocci_id/* drivers/pci/controller/pci-hyperv.c 563 */;
	void cocci_id/* drivers/pci/controller/pci-hyperv.c 548 */(void *context);
	struct hv_pci_compl {
		struct completion host_event;
		s32 completion_status;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 543 */;
	struct hv_pci_dev {
		struct list_head list_entry;
		refcount_t refs;
		enum hv_pcichild_state state;
		struct pci_slot *pci_slot;
		struct pci_function_description desc;
		bool reported_missing;
		struct hv_pcibus_device *hbus;
		struct work_struct wrk;
		void (*block_invalidate)(void *context, u64 block_mask);
		void *invalidate_context;
		u32 probed_bar[PCI_STD_NUM_BARS];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 522 */;
	enum hv_pcichild_state{hv_pcichild_init=0, hv_pcichild_requirements, hv_pcichild_resourced, hv_pcichild_ejecting, hv_pcichild_maximum,} cocci_id/* drivers/pci/controller/pci-hyperv.c 514 */;
	struct hv_dr_state {
		struct list_head list_entry;
		u32 device_count;
		struct pci_function_description func[0];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 508 */;
	struct hv_dr_work {
		struct work_struct wrk;
		struct hv_pcibus_device *bus;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 503 */;
	struct hv_pcibus_device {
		struct pci_sysdata sysdata;
		enum pci_protocol_version_t protocol_version;
		enum hv_pcibus_state state;
		refcount_t remove_lock;
		struct hv_device *hdev;
		resource_size_t low_mmio_space;
		resource_size_t high_mmio_space;
		struct resource *mem_config;
		struct resource *low_mmio_res;
		struct resource *high_mmio_res;
		struct completion *survey_event;
		struct completion remove_event;
		struct pci_bus *pci_bus;
		spinlock_t config_lock;
		spinlock_t device_list_lock;
		void __iomem *cfg_addr;
		struct list_head resources_for_children;
		struct list_head children;
		struct list_head dr_list;
		struct msi_domain_info msi_info;
		struct msi_controller msi_chip;
		struct irq_domain *irq_domain;
		spinlock_t retarget_msi_interrupt_lock;
		struct workqueue_struct *wq;
		struct retarget_msi_interrupt retarget_msi_interrupt_params;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 458 */;
	enum hv_pcibus_state{hv_pcibus_init=0, hv_pcibus_probed, hv_pcibus_installed, hv_pcibus_removing, hv_pcibus_removed, hv_pcibus_maximum,} cocci_id/* drivers/pci/controller/pci-hyperv.c 449 */;
	struct retarget_msi_interrupt {
		u64 partition_id;
		u64 device_id;
		struct hv_interrupt_entry int_entry;
		u64 reserved2;
		struct hv_device_interrupt_target int_target;
	}__packed __aligned(8) cocci_id/* drivers/pci/controller/pci-hyperv.c 437 */;
	struct hv_device_interrupt_target {
		u32 vector;
		u32 flags;
		union {
			u64 vp_mask;
			struct hv_vpset vp_set;
		};
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 428 */;
	struct hv_interrupt_entry {
		u32 source;
		u32 reserved1;
		u32 address;
		u32 data;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 415 */;
	struct pci_eject_response {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		u32 status;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 401 */;
	struct pci_dev_incoming {
		struct pci_incoming_message incoming;
		union win_slot_encoding wslot;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 396 */;
	struct pci_dev_inval_block {
		struct pci_incoming_message incoming;
		union win_slot_encoding wslot;
		u64 block_mask;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 390 */;
	struct pci_write_block {
		struct pci_message message_type;
		u32 block_id;
		union win_slot_encoding wslot;
		u32 byte_count;
		u8 bytes[HV_CONFIG_BLOCK_SIZE_MAX];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 382 */;
	struct pci_read_block_response {
		struct vmpacket_descriptor hdr;
		u32 status;
		u8 bytes[HV_CONFIG_BLOCK_SIZE_MAX];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 373 */;
	struct pci_read_block {
		struct pci_message message_type;
		u32 block_id;
		union win_slot_encoding wslot;
		u32 bytes_requested;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 366 */;
	struct pci_delete_interrupt {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		struct tran_int_desc int_desc;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 357 */;
	struct pci_create_interrupt2 {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		struct hv_msi_desc2 int_desc;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 351 */;
	struct pci_create_int_response {
		struct pci_response response;
		u32 reserved;
		struct tran_int_desc int_desc;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 345 */;
	struct pci_create_interrupt {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		struct hv_msi_desc int_desc;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 339 */;
	struct pci_resources_assigned2 {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		u8 memory_range[0x14][6];
		u32 msi_descriptor_count;
		u8 reserved[70];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 331 */;
	int __init cocci_id/* drivers/pci/controller/pci-hyperv.c 3272 */;
	void __exit cocci_id/* drivers/pci/controller/pci-hyperv.c 3263 */;
	struct hv_driver cocci_id/* drivers/pci/controller/pci-hyperv.c 3254 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/pci/controller/pci-hyperv.c 3245 */[];
	struct pci_resources_assigned {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		u8 memory_range[0x14][6];
		u32 msi_descriptors;
		u32 reserved[4];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 323 */;
	enum pci_protocol_version_t cocci_id/* drivers/pci/controller/pci-hyperv.c 3208 */[1];
	enum hv_pcibus_state cocci_id/* drivers/pci/controller/pci-hyperv.c 3161 */;
	struct pci_set_power_response {
		struct vmpacket_descriptor hdr;
		s32 status;
		union win_slot_encoding wslot;
		u32 resultant_state;
		u32 reserved;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 315 */;
	struct pci_message cocci_id/* drivers/pci/controller/pci-hyperv.c 3103 */;
	struct pci_set_power {
		struct pci_message message_type;
		union win_slot_encoding wslot;
		u32 power_state;
		u32 reserved;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 308 */;
	struct hv_pci_compl cocci_id/* drivers/pci/controller/pci-hyperv.c 3073 */;
	struct pci_bus_relations cocci_id/* drivers/pci/controller/pci-hyperv.c 3072 */;
	struct {
		struct pci_packet teardown_packet;
		u8 buffer[sizeof(struct pci_message)];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 3068 */;
	bool cocci_id/* drivers/pci/controller/pci-hyperv.c 3065 */;
	struct hv_device *cocci_id/* drivers/pci/controller/pci-hyperv.c 3065 */;
	struct pci_q_res_req_response {
		struct vmpacket_descriptor hdr;
		s32 status;
		u32 probed_bar[PCI_STD_NUM_BARS];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 302 */;
	struct pci_bus_relations {
		struct pci_incoming_message incoming;
		u32 device_count;
		struct pci_function_description func[0];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 296 */;
	struct pci_bus_d0_entry {
		struct pci_message message_type;
		u32 reserved;
		u64 mmio_base;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 290 */;
	char *cocci_id/* drivers/pci/controller/pci-hyperv.c 2898 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/pci/controller/pci-hyperv.c 2894 */;
	unsigned int cocci_id/* drivers/pci/controller/pci-hyperv.c 2864 */;
	u16 cocci_id/* drivers/pci/controller/pci-hyperv.c 2862 */;
	struct pci_child_message cocci_id/* drivers/pci/controller/pci-hyperv.c 2808 */;
	struct pci_version_request {
		struct pci_message message_type;
		u32 protocol_version;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 280 */;
	size_t cocci_id/* drivers/pci/controller/pci-hyperv.c 2738 */;
	struct pci_resources_assigned2 *cocci_id/* drivers/pci/controller/pci-hyperv.c 2734 */;
	struct pci_resources_assigned *cocci_id/* drivers/pci/controller/pci-hyperv.c 2733 */;
	struct completion cocci_id/* drivers/pci/controller/pci-hyperv.c 2694 */;
	struct pci_packet *cocci_id/* drivers/pci/controller/pci-hyperv.c 2639 */;
	struct pci_bus_d0_entry *cocci_id/* drivers/pci/controller/pci-hyperv.c 2637 */;
	struct pci_packet {
		void (*completion_func)(void *context,
					struct pci_response *resp,
					int resp_packet_size);
		void *compl_ctxt;
		struct pci_message message[0];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 258 */;
	resource_size_t cocci_id/* drivers/pci/controller/pci-hyperv.c 2534 */;
	struct pci_response {
		struct vmpacket_descriptor hdr;
		s32 status;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 253 */;
	struct pci_incoming_message {
		struct vmpacket_descriptor hdr;
		struct pci_message message_type;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 248 */;
	struct pci_version_request cocci_id/* drivers/pci/controller/pci-hyperv.c 2441 */;
	struct pci_child_message {
		struct pci_message message_type;
		union win_slot_encoding wslot;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 243 */;
	struct pci_version_request *cocci_id/* drivers/pci/controller/pci-hyperv.c 2416 */;
	enum pci_protocol_version_t cocci_id/* drivers/pci/controller/pci-hyperv.c 2412 */[];
	struct pci_message {
		u32 type;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 239 */;
	struct pci_dev_incoming *cocci_id/* drivers/pci/controller/pci-hyperv.c 2284 */;
	struct pci_dev_inval_block *cocci_id/* drivers/pci/controller/pci-hyperv.c 2283 */;
	struct pci_incoming_message *cocci_id/* drivers/pci/controller/pci-hyperv.c 2281 */;
	unsigned char *cocci_id/* drivers/pci/controller/pci-hyperv.c 2277 */;
	struct vmpacket_descriptor *cocci_id/* drivers/pci/controller/pci-hyperv.c 2276 */;
	const int cocci_id/* drivers/pci/controller/pci-hyperv.c 2271 */;
	struct tran_int_desc {
		u16 reserved;
		u16 vector_count;
		u32 data;
		u64 address;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 227 */;
	struct hv_pci_dev cocci_id/* drivers/pci/controller/pci-hyperv.c 2192 */;
	struct {
		struct pci_packet pkt;
		u8 buffer[sizeof(struct pci_eject_response)];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 2187 */;
	struct pci_eject_response *cocci_id/* drivers/pci/controller/pci-hyperv.c 2181 */;
	struct work_struct *cocci_id/* drivers/pci/controller/pci-hyperv.c 2179 */;
	struct pci_function_description cocci_id/* drivers/pci/controller/pci-hyperv.c 2136 */;
	struct hv_dr_state cocci_id/* drivers/pci/controller/pci-hyperv.c 2135 */;
	struct hv_dr_work *cocci_id/* drivers/pci/controller/pci-hyperv.c 2121 */;
	struct hv_dr_state *cocci_id/* drivers/pci/controller/pci-hyperv.c 2120 */;
	struct pci_bus_relations *cocci_id/* drivers/pci/controller/pci-hyperv.c 2118 */;
	struct hv_msi_desc2 {
		u8 vector;
		u8 delivery_mode;
		u16 vector_count;
		u16 processor_count;
		u16 processor_array[32];
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 207 */;
	struct hv_dr_work cocci_id/* drivers/pci/controller/pci-hyperv.c 1999 */;
	struct list_head cocci_id/* drivers/pci/controller/pci-hyperv.c 1994 */;
	struct {
		struct pci_packet init_packet;
		u8 buffer[sizeof(struct pci_child_message)];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 1885 */;
	struct q_res_req_compl cocci_id/* drivers/pci/controller/pci-hyperv.c 1884 */;
	struct pci_child_message *cocci_id/* drivers/pci/controller/pci-hyperv.c 1883 */;
	struct pci_function_description *cocci_id/* drivers/pci/controller/pci-hyperv.c 1880 */;
	struct pci_q_res_req_response *cocci_id/* drivers/pci/controller/pci-hyperv.c 1850 */;
	struct q_res_req_compl *cocci_id/* drivers/pci/controller/pci-hyperv.c 1849 */;
	struct q_res_req_compl {
		struct completion host_event;
		struct hv_pci_dev *hpdev;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 1832 */;
	struct hv_msi_desc {
		u8 vector;
		u8 delivery_mode;
		u16 vector_count;
		u32 reserved;
		u64 cpu_mask;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 183 */;
	struct hv_pcibus_device *cocci_id/* drivers/pci/controller/pci-hyperv.c 1808 */;
	char cocci_id/* drivers/pci/controller/pci-hyperv.c 1769 */[SLOT_NAME_SIZE];
	struct completion *cocci_id/* drivers/pci/controller/pci-hyperv.c 1588 */;
	u64 cocci_id/* drivers/pci/controller/pci-hyperv.c 1573 */;
	struct pci_function_description {
		u16 v_id;
		u16 d_id;
		u8 rev;
		u8 prog_intf;
		u8 subclass;
		u8 base_class;
		u32 subsystem_id;
		union win_slot_encoding win_slot;
		u32 ser;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 155 */;
	struct msi_domain_ops cocci_id/* drivers/pci/controller/pci-hyperv.c 1517 */;
	msi_alloc_info_t *cocci_id/* drivers/pci/controller/pci-hyperv.c 1512 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/pci-hyperv.c 1511 */;
	struct msi_domain_info *cocci_id/* drivers/pci/controller/pci-hyperv.c 1511 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pci-hyperv.c 1502 */;
	union win_slot_encoding {
		struct {
			u32 dev:5;
			u32 func:3;
			u32 reserved:24;
		} bits;
		u32 slot;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 143 */;
	struct hv_pcibus_device cocci_id/* drivers/pci/controller/pci-hyperv.c 1374 */;
	struct {
		struct pci_packet pci_pkt;
		union {
			struct pci_create_interrupt v1;
			struct pci_create_interrupt2 v2;
		} int_pkts;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 1360 */;
	struct tran_int_desc *cocci_id/* drivers/pci/controller/pci-hyperv.c 1359 */;
	struct compose_comp_ctxt cocci_id/* drivers/pci/controller/pci-hyperv.c 1358 */;
	struct cpumask *cocci_id/* drivers/pci/controller/pci-hyperv.c 1356 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/pci-hyperv.c 1355 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pci-hyperv.c 1354 */;
	struct irq_cfg *cocci_id/* drivers/pci/controller/pci-hyperv.c 1351 */;
	struct msi_msg *cocci_id/* drivers/pci/controller/pci-hyperv.c 1349 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pci-hyperv.c 1349 */;
	struct pci_create_interrupt2 *cocci_id/* drivers/pci/controller/pci-hyperv.c 1315 */;
	u8 cocci_id/* drivers/pci/controller/pci-hyperv.c 1297 */;
	struct pci_create_interrupt *cocci_id/* drivers/pci/controller/pci-hyperv.c 1296 */;
	union pci_version {
		struct {
			u16 minor_version;
			u16 major_version;
		} parts;
		u32 version;
	}__packed cocci_id/* drivers/pci/controller/pci-hyperv.c 129 */;
	struct pci_create_int_response *cocci_id/* drivers/pci/controller/pci-hyperv.c 1287 */;
	struct compose_comp_ctxt *cocci_id/* drivers/pci/controller/pci-hyperv.c 1286 */;
	struct pci_response *cocci_id/* drivers/pci/controller/pci-hyperv.c 1283 */;
	void *cocci_id/* drivers/pci/controller/pci-hyperv.c 1283 */;
	struct compose_comp_ctxt {
		struct hv_pci_compl comp_pkt;
		struct tran_int_desc int_desc;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 1278 */;
	cpumask_var_t cocci_id/* drivers/pci/controller/pci-hyperv.c 1190 */;
	struct retarget_msi_interrupt *cocci_id/* drivers/pci/controller/pci-hyperv.c 1187 */;
	struct msi_desc *cocci_id/* drivers/pci/controller/pci-hyperv.c 1185 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/pci-hyperv.c 1160 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pci-hyperv.c 1133 */;
	struct {
		struct pci_packet pkt;
		u8 buffer[sizeof(struct pci_delete_interrupt)];
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 1106 */;
	struct pci_delete_interrupt *cocci_id/* drivers/pci/controller/pci-hyperv.c 1105 */;
	void (*cocci_id/* drivers/pci/controller/pci-hyperv.c 1081 */)(void *context,
								       u64 block_mask);
	struct pci_write_block cocci_id/* drivers/pci/controller/pci-hyperv.c 1041 */;
	struct pci_write_block *cocci_id/* drivers/pci/controller/pci-hyperv.c 1023 */;
	struct {
		struct pci_packet pkt;
		char buf[sizeof(struct pci_write_block)];
		u32 reserved;
	} cocci_id/* drivers/pci/controller/pci-hyperv.c 1017 */;
}
