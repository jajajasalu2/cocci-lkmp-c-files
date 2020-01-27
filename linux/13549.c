cocci_test_suite() {
	struct uvc_streaming_status *cocci_id/* drivers/media/usb/uvc/uvc_status.c 93 */;
	void cocci_id/* drivers/media/usb/uvc/uvc_status.c 92 */;
	struct uvc_control_status {
		u8 bStatusType;
		u8 bOriginator;
		u8 bEvent;
		u8 bSelector;
		u8 bAttribute;
		u8 bValue[];
	}__packed cocci_id/* drivers/media/usb/uvc/uvc_status.c 83 */;
	struct uvc_streaming_status {
		u8 bStatusType;
		u8 bOriginator;
		u8 bEvent;
		u8 bValue[];
	}__packed cocci_id/* drivers/media/usb/uvc/uvc_status.c 76 */;
	gfp_t cocci_id/* drivers/media/usb/uvc/uvc_status.c 302 */;
	struct usb_host_endpoint *cocci_id/* drivers/media/usb/uvc/uvc_status.c 254 */;
	struct input_dev *cocci_id/* drivers/media/usb/uvc/uvc_status.c 23 */;
	struct uvc_control_status *cocci_id/* drivers/media/usb/uvc/uvc_status.c 220 */;
	struct uvc_control *cocci_id/* drivers/media/usb/uvc/uvc_status.c 162 */;
	struct uvc_video_chain *cocci_id/* drivers/media/usb/uvc/uvc_status.c 161 */;
	struct uvc_device *cocci_id/* drivers/media/usb/uvc/uvc_status.c 160 */;
	const char *cocci_id/* drivers/media/usb/uvc/uvc_status.c 159 */[];
	const struct uvc_control_status *cocci_id/* drivers/media/usb/uvc/uvc_status.c 157 */;
	int cocci_id/* drivers/media/usb/uvc/uvc_status.c 157 */;
	bool cocci_id/* drivers/media/usb/uvc/uvc_status.c 156 */;
	struct urb *cocci_id/* drivers/media/usb/uvc/uvc_status.c 156 */;
	struct uvc_video_chain **cocci_id/* drivers/media/usb/uvc/uvc_status.c 136 */;
	unsigned int cocci_id/* drivers/media/usb/uvc/uvc_status.c 125 */;
	u8 cocci_id/* drivers/media/usb/uvc/uvc_status.c 122 */;
	struct uvc_entity *cocci_id/* drivers/media/usb/uvc/uvc_status.c 121 */;
}
