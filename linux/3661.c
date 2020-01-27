cocci_test_suite() {
	u64 cocci_id/* drivers/firmware/arm_scmi/sensors.c 97 */;
	struct scmi_msg_resp_sensor_attributes *cocci_id/* drivers/firmware/arm_scmi/sensors.c 83 */;
	struct scmi_xfer *cocci_id/* drivers/firmware/arm_scmi/sensors.c 82 */;
	struct sensors_info *cocci_id/* drivers/firmware/arm_scmi/sensors.c 79 */;
	const struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/sensors.c 78 */;
	int cocci_id/* drivers/firmware/arm_scmi/sensors.c 78 */;
	struct sensors_info {
		int num_sensors;
		int max_requests;
		u64 reg_addr;
		u32 reg_size;
		struct scmi_sensor_info *sensors;
	} cocci_id/* drivers/firmware/arm_scmi/sensors.c 70 */;
	struct scmi_msg_sensor_reading_get {
		__le32 id;
		__le32 flags;
#define SENSOR_READ_ASYNC BIT(0)
		} cocci_id/* drivers/firmware/arm_scmi/sensors.c 64 */;
	struct scmi_msg_set_sensor_trip_point {
		__le32 id;
		__le32 event_control;
#define SENSOR_TP_EVENT_MASK (0x3)
#define SENSOR_TP_DISABLED 0x0
#define SENSOR_TP_POSITIVE 0x1
#define SENSOR_TP_NEGATIVE 0x2
#define SENSOR_TP_BOTH 0x3
#define SENSOR_TP_ID (x)(((x) & 0xff) << 4)
					__le32 value_low;
		__le32 value_high;
	} cocci_id/* drivers/firmware/arm_scmi/sensors.c 51 */;
	struct scmi_msg_sensor_trip_point_notify {
		__le32 id;
		__le32 event_control;
#define SENSOR_TP_NOTIFY_ALL BIT(0)
		} cocci_id/* drivers/firmware/arm_scmi/sensors.c 45 */;
	int __init cocci_id/* drivers/firmware/arm_scmi/sensors.c 303 */;
	void cocci_id/* drivers/firmware/arm_scmi/sensors.c 303 */;
	struct scmi_handle *cocci_id/* drivers/firmware/arm_scmi/sensors.c 274 */;
	struct scmi_sensor_ops cocci_id/* drivers/firmware/arm_scmi/sensors.c 266 */;
	struct scmi_msg_resp_sensor_description {
		__le16 num_returned;
		__le16 num_remaining;
		struct {
			__le32 id;
			__le32 attributes_low;
#define SUPPORTS_ASYNC_READ (x)((x) & BIT(31))
#define NUM_TRIP_POINTS (x)((x) & 0xff)
							__le32 attributes_high;
#define SENSOR_TYPE (x)((x) & 0xff)
#define SENSOR_SCALE (x)(((x) >> 11) & 0x1f)
#define SENSOR_SCALE_SIGN BIT(4)
#define SENSOR_SCALE_EXTEND GENMASK(7, 5)
#define SENSOR_UPDATE_SCALE (x)(((x) >> 22) & 0x1f)
#define SENSOR_UPDATE_BASE (x)(((x) >> 27) & 0x1f)
													u8 name[SCMI_MAX_STR_SIZE];
		} desc[0];
	} cocci_id/* drivers/firmware/arm_scmi/sensors.c 26 */;
	const struct scmi_sensor_info *cocci_id/* drivers/firmware/arm_scmi/sensors.c 251 */;
	__le32 *cocci_id/* drivers/firmware/arm_scmi/sensors.c 239 */;
	void *cocci_id/* drivers/firmware/arm_scmi/sensors.c 238 */;
	struct scmi_msg_sensor_reading_get *cocci_id/* drivers/firmware/arm_scmi/sensors.c 221 */;
	u64 *cocci_id/* drivers/firmware/arm_scmi/sensors.c 217 */;
	struct scmi_msg_set_sensor_trip_point *cocci_id/* drivers/firmware/arm_scmi/sensors.c 197 */;
	u8 cocci_id/* drivers/firmware/arm_scmi/sensors.c 192 */;
	struct scmi_msg_sensor_trip_point_notify *cocci_id/* drivers/firmware/arm_scmi/sensors.c 173 */;
	struct scmi_msg_resp_sensor_attributes {
		__le16 num_sensors;
		u8 max_requests;
		u8 reserved;
		__le32 reg_addr_low;
		__le32 reg_addr_high;
		__le32 reg_size;
	} cocci_id/* drivers/firmware/arm_scmi/sensors.c 17 */;
	bool cocci_id/* drivers/firmware/arm_scmi/sensors.c 168 */;
	struct scmi_sensor_info *cocci_id/* drivers/firmware/arm_scmi/sensors.c 140 */;
	__le32 cocci_id/* drivers/firmware/arm_scmi/sensors.c 115 */;
	struct scmi_msg_resp_sensor_description *cocci_id/* drivers/firmware/arm_scmi/sensors.c 112 */;
	u16 cocci_id/* drivers/firmware/arm_scmi/sensors.c 110 */;
	u32 cocci_id/* drivers/firmware/arm_scmi/sensors.c 109 */;
	enum scmi_sensor_protocol_cmd{SENSOR_DESCRIPTION_GET=0x3, SENSOR_TRIP_POINT_NOTIFY=0x4, SENSOR_TRIP_POINT_CONFIG=0x5, SENSOR_READING_GET=0x6,} cocci_id/* drivers/firmware/arm_scmi/sensors.c 10 */;
}
