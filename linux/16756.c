cocci_test_suite() {
	struct hv_kbd_dev {
		struct hv_device *hv_dev;
		struct serio *hv_serio;
		struct synth_kbd_protocol_request protocol_req;
		struct synth_kbd_protocol_response protocol_resp;
		struct completion wait_event;
		spinlock_t lock;
		bool started;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 89 */;
	struct synth_kbd_keystroke {
		struct synth_kbd_msg_hdr header;
		__le16 make_code;
		__le16 reserved0;
		__le32 info;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 68 */;
	struct synth_kbd_protocol_response {
		struct synth_kbd_msg_hdr header;
		__le32 proto_status;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 59 */;
	struct synth_kbd_protocol_request {
		struct synth_kbd_msg_hdr header;
		union synth_kbd_version version_requested;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 53 */;
	union synth_kbd_version {
		__le32 version;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 46 */;
	struct synth_kbd_msg {
		struct synth_kbd_msg_hdr header;
		char data[];
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 41 */;
	void __exit cocci_id/* drivers/input/serio/hyperv-keyboard.c 406 */;
	void cocci_id/* drivers/input/serio/hyperv-keyboard.c 406 */;
	int __init cocci_id/* drivers/input/serio/hyperv-keyboard.c 401 */;
	struct hv_driver cocci_id/* drivers/input/serio/hyperv-keyboard.c 391 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/input/serio/hyperv-keyboard.c 383 */[];
	struct synth_kbd_msg_hdr {
		__le32 type;
	} cocci_id/* drivers/input/serio/hyperv-keyboard.c 37 */;
	struct serio cocci_id/* drivers/input/serio/hyperv-keyboard.c 320 */;
	struct hv_kbd_dev cocci_id/* drivers/input/serio/hyperv-keyboard.c 319 */;
	struct serio *cocci_id/* drivers/input/serio/hyperv-keyboard.c 316 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/input/serio/hyperv-keyboard.c 313 */;
	enum synth_kbd_msg_type{SYNTH_KBD_PROTOCOL_REQUEST=1, SYNTH_KBD_PROTOCOL_RESPONSE=2, SYNTH_KBD_EVENT=3, SYNTH_KBD_LED_INDICATORS=4,} cocci_id/* drivers/input/serio/hyperv-keyboard.c 27 */;
	unsigned long cocci_id/* drivers/input/serio/hyperv-keyboard.c 269 */;
	struct synth_kbd_protocol_request cocci_id/* drivers/input/serio/hyperv-keyboard.c 263 */;
	u32 cocci_id/* drivers/input/serio/hyperv-keyboard.c 259 */;
	struct synth_kbd_protocol_response *cocci_id/* drivers/input/serio/hyperv-keyboard.c 258 */;
	struct synth_kbd_protocol_request *cocci_id/* drivers/input/serio/hyperv-keyboard.c 257 */;
	struct hv_kbd_dev *cocci_id/* drivers/input/serio/hyperv-keyboard.c 256 */;
	struct hv_device *cocci_id/* drivers/input/serio/hyperv-keyboard.c 254 */;
	int cocci_id/* drivers/input/serio/hyperv-keyboard.c 254 */;
	void *cocci_id/* drivers/input/serio/hyperv-keyboard.c 226 */;
	struct synth_kbd_msg_hdr cocci_id/* drivers/input/serio/hyperv-keyboard.c 215 */;
	struct synth_kbd_msg *cocci_id/* drivers/input/serio/hyperv-keyboard.c 187 */;
	u64 cocci_id/* drivers/input/serio/hyperv-keyboard.c 185 */;
	struct vmpacket_descriptor *cocci_id/* drivers/input/serio/hyperv-keyboard.c 183 */;
	struct synth_kbd_keystroke cocci_id/* drivers/input/serio/hyperv-keyboard.c 137 */;
	struct synth_kbd_protocol_response cocci_id/* drivers/input/serio/hyperv-keyboard.c 118 */;
	u16 cocci_id/* drivers/input/serio/hyperv-keyboard.c 108 */;
	struct synth_kbd_keystroke *cocci_id/* drivers/input/serio/hyperv-keyboard.c 104 */;
}
