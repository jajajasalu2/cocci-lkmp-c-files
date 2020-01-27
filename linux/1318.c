cocci_test_suite() {
	const struct usb_device_id *cocci_id/* drivers/usb/storage/uas.c 949 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/storage/uas.c 941 */[3];
	struct usb_host_endpoint *cocci_id/* drivers/usb/storage/uas.c 907 */[4];
	struct usb_host_interface *cocci_id/* drivers/usb/storage/uas.c 895 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/uas.c 862 */;
	struct uas_dev_info cocci_id/* drivers/usb/storage/uas.c 86 */;
	struct work_struct *cocci_id/* drivers/usb/storage/uas.c 83 */;
	void cocci_id/* drivers/usb/storage/uas.c 80 */(struct scsi_cmnd *cmnd,
							const char *prefix,
							int status);
	void cocci_id/* drivers/usb/storage/uas.c 79 */(struct uas_dev_info *devinfo);
	int cocci_id/* drivers/usb/storage/uas.c 78 */(struct scsi_cmnd *cmnd,
						       const char *caller);
	struct scsi_target *cocci_id/* drivers/usb/storage/uas.c 777 */;
	void cocci_id/* drivers/usb/storage/uas.c 77 */(struct work_struct *work);
	int cocci_id/* drivers/usb/storage/uas.c 75 */(struct scsi_cmnd *cmnd,
						       struct uas_dev_info *devinfo);
	struct uas_cmd_info {
		unsigned int state;
		unsigned int uas_tag;
		struct urb *cmd_urb;
		struct urb *data_in_urb;
		struct urb *data_out_urb;
	} cocci_id/* drivers/usb/storage/uas.c 66 */;
	struct uas_cmd_info cocci_id/* drivers/usb/storage/uas.c 617 */;
	struct scsi_pointer cocci_id/* drivers/usb/storage/uas.c 617 */;
	void (*cocci_id/* drivers/usb/storage/uas.c 609 */)(struct scsi_cmnd *);
	enum{SUBMIT_STATUS_URB=BIT(1), ALLOC_DATA_IN_URB=BIT(2), SUBMIT_DATA_IN_URB=BIT(3), ALLOC_DATA_OUT_URB=BIT(4), SUBMIT_DATA_OUT_URB=BIT(5), ALLOC_CMD_URB=BIT(6), SUBMIT_CMD_URB=BIT(7), COMMAND_INFLIGHT=BIT(8), DATA_IN_URB_INFLIGHT=BIT(9), DATA_OUT_URB_INFLIGHT=BIT(10), COMMAND_ABORTED=BIT(11), IS_IN_WORK_LIST=BIT(12),} cocci_id/* drivers/usb/storage/uas.c 50 */;
	int cocci_id/* drivers/usb/storage/uas.c 474 */;
	struct command_iu *cocci_id/* drivers/usb/storage/uas.c 473 */;
	struct scsi_device *cocci_id/* drivers/usb/storage/uas.c 470 */;
	struct usb_device *cocci_id/* drivers/usb/storage/uas.c 469 */;
	gfp_t cocci_id/* drivers/usb/storage/uas.c 466 */;
	struct urb *cocci_id/* drivers/usb/storage/uas.c 466 */;
	struct sense_iu *cocci_id/* drivers/usb/storage/uas.c 445 */;
	unsigned int cocci_id/* drivers/usb/storage/uas.c 424 */;
	struct scsi_data_buffer *cocci_id/* drivers/usb/storage/uas.c 423 */;
	enum dma_data_direction cocci_id/* drivers/usb/storage/uas.c 418 */;
	struct uas_dev_info {
		struct usb_interface *intf;
		struct usb_device *udev;
		struct usb_anchor cmd_urbs;
		struct usb_anchor sense_urbs;
		struct usb_anchor data_urbs;
		unsigned long flags;
		int qdepth,resetting;
		unsigned cmd_pipe,status_pipe,data_in_pipe,data_out_pipe;
		unsigned use_streams:1;
		unsigned shutdown:1;
		struct scsi_cmnd *cmnd[MAX_CMNDS];
		spinlock_t lock;
		struct work_struct work;
	} cocci_id/* drivers/usb/storage/uas.c 34 */;
	struct iu *cocci_id/* drivers/usb/storage/uas.c 273 */;
	u8 cocci_id/* drivers/usb/storage/uas.c 250 */;
	bool cocci_id/* drivers/usb/storage/uas.c 248 */;
	struct response_iu *cocci_id/* drivers/usb/storage/uas.c 248 */;
	const char *cocci_id/* drivers/usb/storage/uas.c 175 */;
	unsigned cocci_id/* drivers/usb/storage/uas.c 158 */;
	struct uas_dev_info *cocci_id/* drivers/usb/storage/uas.c 121 */;
	struct scsi_cmnd cocci_id/* drivers/usb/storage/uas.c 120 */;
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/uas.c 120 */;
	struct usb_driver cocci_id/* drivers/usb/storage/uas.c 1195 */;
	struct scsi_pointer *cocci_id/* drivers/usb/storage/uas.c 119 */;
	void *cocci_id/* drivers/usb/storage/uas.c 119 */;
	struct device *cocci_id/* drivers/usb/storage/uas.c 1179 */;
	struct uas_cmd_info *cocci_id/* drivers/usb/storage/uas.c 117 */;
	void cocci_id/* drivers/usb/storage/uas.c 117 */;
	struct Scsi_Host *cocci_id/* drivers/usb/storage/uas.c 1155 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/uas.c 1153 */;
	pm_message_t cocci_id/* drivers/usb/storage/uas.c 1113 */;
	unsigned long cocci_id/* drivers/usb/storage/uas.c 1016 */;
}
