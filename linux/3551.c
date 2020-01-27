cocci_test_suite() {
	struct sd_response_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u8 command_type;
		u8 command_index;
		u8 command_response[0];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 92 */;
	struct sd_common_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 86 */;
	struct urb *cocci_id/* drivers/mmc/host/vub300.c 820 */;
	struct sd_irqpoll_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u8 command_type;
		u8 padding[16];
		u8 poll_timeout_msb;
		u8 poll_timeout_lsb;
		u8 reserved[42];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 75 */;
	struct timer_list *cocci_id/* drivers/mmc/host/vub300.c 741 */;
	unsigned long cocci_id/* drivers/mmc/host/vub300.c 657 */;
	struct sd_command_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u8 command_type;
		u8 command_index;
		u8 transfer_size[4];
		u8 response_type;
		u8 arguments[4];
		u8 block_count[2];
		u8 block_size[2];
		u8 block_boundary[2];
		u8 reserved[44];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 60 */;
	struct offload_registers_access cocci_id/* drivers/mmc/host/vub300.c 535 */;
	u8 cocci_id/* drivers/mmc/host/vub300.c 531 */;
	struct offload_registers_access *cocci_id/* drivers/mmc/host/vub300.c 530 */;
	struct host_controller_info {
		u8 info_size;
		u16 firmware_version;
		u8 number_of_ports;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 53 */;
	struct vub300_mmc_host *cocci_id/* drivers/mmc/host/vub300.c 529 */;
	void cocci_id/* drivers/mmc/host/vub300.c 529 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/vub300.c 372 */;
	struct kref *cocci_id/* drivers/mmc/host/vub300.c 369 */;
	struct vub300_mmc_host cocci_id/* drivers/mmc/host/vub300.c 355 */;
	struct vub300_mmc_host {
		struct usb_device *udev;
		struct usb_interface *interface;
		struct kref kref;
		struct mutex cmd_mutex;
		struct mutex irq_mutex;
		char vub_name[3 + (9 * 8) + 4 + 1];
		u8 cmnd_out_ep;
		u8 cmnd_res_ep;
		u8 data_out_ep;
		u8 data_inp_ep;
		bool card_powered;
		bool card_present;
		bool read_only;
		bool large_usb_packets;
		bool app_spec;
		bool irq_enabled;
		bool irq_disabled;
		unsigned bus_width:4;
		u8 total_offload_count;
		u8 dynamic_register_count;
		u8 resp_len;
		u32 datasize;
		int errors;
		int usb_transport_fail;
		int usb_timed_out;
		int irqs_queued;
		struct sdio_register sdio_register[16];
		struct offload_interrupt_function_register {
#define MAXREGBITS 4
#define MAXREGS (1 << MAXREGBITS)
#define MAXREGMASK (MAXREGS - 1)
					u8 offload_count;
			u32 offload_point;
			struct offload_registers_access reg[MAXREGS];
		} fn[8];
		u16 fbs[8];
		struct mmc_command *cmd;
		struct mmc_request *req;
		struct mmc_data *data;
		struct mmc_host *mmc;
		struct urb *urb;
		struct urb *command_out_urb;
		struct urb *command_res_urb;
		struct completion command_complete;
		struct completion irqpoll_complete;
		union sd_command cmnd;
		union sd_response resp;
		struct timer_list sg_transfer_timer;
		struct usb_sg_request sg_request;
		struct timer_list inactivity_timer;
		struct work_struct deadwork;
		struct work_struct cmndwork;
		struct delayed_work pollwork;
		struct host_controller_info hc_info;
		struct sd_status_header system_port_status;
		u8 padded_buffer[64];
	} cocci_id/* drivers/mmc/host/vub300.c 296 */;
	struct sdio_register {
		unsigned func_num:3;
		unsigned sdio_reg:17;
		unsigned activate:1;
		unsigned prepared:1;
		unsigned regvalue:8;
		unsigned response:8;
		unsigned sparebit:26;
	} cocci_id/* drivers/mmc/host/vub300.c 286 */;
	struct usb_interface *cocci_id/* drivers/mmc/host/vub300.c 277 */;
	struct workqueue_struct *cocci_id/* drivers/mmc/host/vub300.c 273 */;
	const struct usb_device_id cocci_id/* drivers/mmc/host/vub300.c 266 */[];
	void __exit cocci_id/* drivers/mmc/host/vub300.c 2454 */;
	int __init cocci_id/* drivers/mmc/host/vub300.c 2414 */;
	struct usb_driver cocci_id/* drivers/mmc/host/vub300.c 2402 */;
	pm_message_t cocci_id/* drivers/mmc/host/vub300.c 2373 */;
	bool cocci_id/* drivers/mmc/host/vub300.c 232 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/mmc/host/vub300.c 2219 */;
	char cocci_id/* drivers/mmc/host/vub300.c 2092 */[32];
	char cocci_id/* drivers/mmc/host/vub300.c 2091 */[48];
	struct usb_device *cocci_id/* drivers/mmc/host/vub300.c 2085 */;
	struct usb_host_interface *cocci_id/* drivers/mmc/host/vub300.c 2084 */;
	const struct usb_device_id *cocci_id/* drivers/mmc/host/vub300.c 2081 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/vub300.c 2073 */;
	u64 cocci_id/* drivers/mmc/host/vub300.c 1984 */;
	u32 cocci_id/* drivers/mmc/host/vub300.c 1969 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/vub300.c 1965 */;
	u8 cocci_id/* drivers/mmc/host/vub300.c 1964 */[8];
	struct mmc_request *cocci_id/* drivers/mmc/host/vub300.c 1747 */;
	struct work_struct *cocci_id/* drivers/mmc/host/vub300.c 1739 */;
	enum SD_RESPONSE_TYPE{SDRT_UNSPECIFIED=0, SDRT_NONE, SDRT_1, SDRT_1B, SDRT_2, SDRT_3, SDRT_4, SDRT_5, SDRT_5B, SDRT_6, SDRT_7,} cocci_id/* drivers/mmc/host/vub300.c 168 */;
	struct sd_register_header cocci_id/* drivers/mmc/host/vub300.c 1644 */;
	union sd_command {
		struct sd_command_header head;
		struct sd_irqpoll_header poll;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 163 */;
	long cocci_id/* drivers/mmc/host/vub300.c 1595 */;
	unsigned char cocci_id/* drivers/mmc/host/vub300.c 1558 */[64 * 4];
	union sd_response {
		struct sd_common_header common;
		struct sd_status_header status;
		struct sd_error_header error;
		struct sd_interrupt_header interrupt;
		struct sd_response_header response;
		struct sd_offloaded_interrupt irq;
		struct sd_offloaded_piggyback pig;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 153 */;
	struct sd_offloaded_piggyback {
		struct sd_register_header sdio;
		struct offload_registers_access reg[PIGGYBACK_REGISTER_ACCESSES];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 148 */;
	u8 *cocci_id/* drivers/mmc/host/vub300.c 1468 */;
	unsigned cocci_id/* drivers/mmc/host/vub300.c 1440 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/vub300.c 1431 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/vub300.c 1431 */;
	int cocci_id/* drivers/mmc/host/vub300.c 1430 */;
	struct completion cocci_id/* drivers/mmc/host/vub300.c 1403 */;
	int *cocci_id/* drivers/mmc/host/vub300.c 1399 */;
	void *cocci_id/* drivers/mmc/host/vub300.c 1398 */;
	struct completion *cocci_id/* drivers/mmc/host/vub300.c 1394 */;
	struct sd_register_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u8 command_type;
		u8 command_index;
		u8 command_response[6];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 138 */;
	struct sdio_func *cocci_id/* drivers/mmc/host/vub300.c 1365 */;
	struct mmc_card *cocci_id/* drivers/mmc/host/vub300.c 1357 */;
	unsigned int cocci_id/* drivers/mmc/host/vub300.c 1315 */;
	struct sd_offloaded_interrupt {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		struct offload_registers_access reg[INTERRUPT_REGISTER_ACCESSES];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 131 */;
	struct offload_registers_access {
		u8 command_byte[4];
		u8 Respond_Byte[4];
	}__packed cocci_id/* drivers/mmc/host/vub300.c 125 */;
	const u8 *cocci_id/* drivers/mmc/host/vub300.c 1205 */;
	u16 cocci_id/* drivers/mmc/host/vub300.c 1203 */;
	const struct firmware *cocci_id/* drivers/mmc/host/vub300.c 1200 */;
	struct sd_interrupt_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 119 */;
	struct sd_error_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u8 error_code;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 112 */;
	struct sd_status_header {
		u8 header_size;
		u8 header_type;
		u8 port_number;
		u16 port_flags;
		u32 sdio_clock;
		u16 host_header_size;
		u16 func_header_size;
		u16 ctrl_header_size;
	}__packed cocci_id/* drivers/mmc/host/vub300.c 101 */;
}
