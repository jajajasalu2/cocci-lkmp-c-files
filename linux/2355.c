cocci_test_suite() {
	enum ps3_sys_manager_service_id{PS3_SM_SERVICE_ID_REQUEST=1, PS3_SM_SERVICE_ID_RESPONSE=2, PS3_SM_SERVICE_ID_COMMAND=3, PS3_SM_SERVICE_ID_EXTERN_EVENT=4, PS3_SM_SERVICE_ID_SET_NEXT_OP=5, PS3_SM_SERVICE_ID_REQUEST_ERROR=6, PS3_SM_SERVICE_ID_SET_ATTR=8,} cocci_id/* drivers/ps3/ps3-sys-manager.c 96 */;
	enum{PS3_SM_RX_MSG_LEN_MIN=24, PS3_SM_RX_MSG_LEN_MAX=32,} cocci_id/* drivers/ps3/ps3-sys-manager.c 76 */;
	int __init cocci_id/* drivers/ps3/ps3-sys-manager.c 742 */;
	struct ps3_vuart_port_driver cocci_id/* drivers/ps3/ps3-sys-manager.c 733 */;
	struct ps3_sys_manager_ops cocci_id/* drivers/ps3/ps3-sys-manager.c 701 */;
	struct ps3_system_bus_device *cocci_id/* drivers/ps3/ps3-sys-manager.c 579 */;
	void cocci_id/* drivers/ps3/ps3-sys-manager.c 579 */;
	const struct ps3_sys_manager_header *cocci_id/* drivers/ps3/ps3-sys-manager.c 57 */;
	const char *cocci_id/* drivers/ps3/ps3-sys-manager.c 57 */;
	int cocci_id/* drivers/ps3/ps3-sys-manager.c 57 */;
	void __maybe_unused cocci_id/* drivers/ps3/ps3-sys-manager.c 56 */;
	struct ps3_sys_manager_header cocci_id/* drivers/ps3/ps3-sys-manager.c 529 */;
	struct {
		u8 version;
		u8 type;
		u8 reserved_1[14];
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 488 */;
	struct ps3_sys_manager_header {
		u8 version;
		u8 size;
		u16 reserved_1;
		u32 payload_size;
		u16 service_id;
		u16 reserved_2;
		u32 request_tag;
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 44 */;
	struct {
		u8 version;
		u8 type;
		u8 reserved_1[2];
		u32 value;
		u8 reserved_2[8];
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 406 */;
	struct {
		u8 version;
		u8 reserved_1[3];
		u8 status;
		u8 reserved_2[11];
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 373 */;
	u64 cocci_id/* drivers/ps3/ps3-sys-manager.c 370 */;
	struct {
		u8 version;
		u8 type;
		u8 gos_id;
		u8 reserved_1[13];
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 336 */;
	struct {
		u8 version;
		u8 type;
		u8 gos_id;
		u8 reserved_1;
		u32 wake_source;
		u8 reserved_2[8];
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 292 */;
	enum ps3_sys_manager_wake_source cocci_id/* drivers/ps3/ps3-sys-manager.c 289 */;
	enum ps3_sys_manager_next_op cocci_id/* drivers/ps3/ps3-sys-manager.c 288 */;
	struct {
		u8 version;
		u8 reserved_1[3];
		u32 attribute;
	} cocci_id/* drivers/ps3/ps3-sys-manager.c 258 */;
	enum ps3_sys_manager_attr cocci_id/* drivers/ps3/ps3-sys-manager.c 255 */;
	const void *cocci_id/* drivers/ps3/ps3-sys-manager.c 231 */;
	unsigned int cocci_id/* drivers/ps3/ps3-sys-manager.c 223 */;
	enum ps3_sys_manager_cmd{PS3_SM_CMD_SHUTDOWN=1,} cocci_id/* drivers/ps3/ps3-sys-manager.c 210 */;
	u32 cocci_id/* drivers/ps3/ps3-sys-manager.c 199 */;
	enum ps3_sys_manager_wake_source{PS3_SM_WAKE_DEFAULT=0, PS3_SM_WAKE_W_O_L=0x00000400, PS3_SM_WAKE_P_O_R=0x80000000,} cocci_id/* drivers/ps3/ps3-sys-manager.c 186 */;
	enum ps3_sys_manager_next_op{PS3_SM_NEXT_OP_SYS_SHUTDOWN=1, PS3_SM_NEXT_OP_SYS_REBOOT=2, PS3_SM_NEXT_OP_LPAR_REBOOT=0x82,} cocci_id/* drivers/ps3/ps3-sys-manager.c 167 */;
	enum ps3_sys_manager_button_event{PS3_SM_BUTTON_EVENT_HARD=0, PS3_SM_BUTTON_EVENT_SOFT=1,} cocci_id/* drivers/ps3/ps3-sys-manager.c 158 */;
	enum ps3_sys_manager_event{PS3_SM_EVENT_POWER_PRESSED=3, PS3_SM_EVENT_POWER_RELEASED=4, PS3_SM_EVENT_RESET_PRESSED=5, PS3_SM_EVENT_RESET_RELEASED=6, PS3_SM_EVENT_THERMAL_ALERT=7, PS3_SM_EVENT_THERMAL_CLEARED=8,} cocci_id/* drivers/ps3/ps3-sys-manager.c 141 */;
	enum ps3_sys_manager_attr{PS3_SM_ATTR_POWER=1, PS3_SM_ATTR_RESET=2, PS3_SM_ATTR_THERMAL=4, PS3_SM_ATTR_CONTROLLER=8, PS3_SM_ATTR_ALL=0x0f,} cocci_id/* drivers/ps3/ps3-sys-manager.c 120 */;
}
