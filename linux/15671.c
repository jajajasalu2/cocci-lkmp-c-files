cocci_test_suite() {
	struct gb_lights_get_channel_config_request cocci_id/* drivers/staging/greybus/light.c 948 */;
	struct gb_lights_get_channel_config_response cocci_id/* drivers/staging/greybus/light.c 947 */;
	struct gb_light *cocci_id/* drivers/staging/greybus/light.c 944 */;
	struct led_classdev *cocci_id/* drivers/staging/greybus/light.c 890 */;
	struct gb_lights_get_channel_flash_config_response cocci_id/* drivers/staging/greybus/light.c 829 */;
	struct gb_lights_get_channel_flash_config_request cocci_id/* drivers/staging/greybus/light.c 828 */;
	struct led_classdev_flash *cocci_id/* drivers/staging/greybus/light.c 770 */;
	char *cocci_id/* drivers/staging/greybus/light.c 745 */;
	const struct led_flash_ops cocci_id/* drivers/staging/greybus/light.c 733 */;
	struct gb_lights_get_flash_fault_response cocci_id/* drivers/staging/greybus/light.c 710 */;
	struct gb_lights_get_flash_fault_request cocci_id/* drivers/staging/greybus/light.c 709 */;
	struct gb_channel cocci_id/* drivers/staging/greybus/light.c 705 */;
	u32 *cocci_id/* drivers/staging/greybus/light.c 703 */;
	void cocci_id/* drivers/staging/greybus/light.c 69 */(struct gb_channel *channel);
	struct gb_lights_set_flash_timeout_request cocci_id/* drivers/staging/greybus/light.c 678 */;
	bool *cocci_id/* drivers/staging/greybus/light.c 662 */;
	struct gb_lights_set_flash_strobe_request cocci_id/* drivers/staging/greybus/light.c 637 */;
	struct gb_lights {
		struct gb_connection *connection;
		u8 lights_count;
		struct gb_light *lights;
		struct mutex lights_lock;
	} cocci_id/* drivers/staging/greybus/light.c 62 */;
	struct v4l2_flash_config cocci_id/* drivers/staging/greybus/light.c 535 */;
	struct led_flash_setting *cocci_id/* drivers/staging/greybus/light.c 521 */;
	void cocci_id/* drivers/staging/greybus/light.c 521 */;
	const struct v4l2_flash_ops cocci_id/* drivers/staging/greybus/light.c 519 */;
	struct gb_lights_blink_request cocci_id/* drivers/staging/greybus/light.c 456 */;
	unsigned long *cocci_id/* drivers/staging/greybus/light.c 450 */;
	enum led_brightness cocci_id/* drivers/staging/greybus/light.c 442 */;
	struct gb_channel *cocci_id/* drivers/staging/greybus/light.c 417 */;
	int cocci_id/* drivers/staging/greybus/light.c 417 */;
	u8 cocci_id/* drivers/staging/greybus/light.c 386 */;
	bool cocci_id/* drivers/staging/greybus/light.c 374 */;
	struct gb_lights_set_brightness_request cocci_id/* drivers/staging/greybus/light.c 371 */;
	struct gb_lights_set_color_request cocci_id/* drivers/staging/greybus/light.c 348 */;
	struct gb_lights_set_fade_request cocci_id/* drivers/staging/greybus/light.c 322 */;
	const char *cocci_id/* drivers/staging/greybus/light.c 245 */;
	size_t cocci_id/* drivers/staging/greybus/light.c 245 */;
	struct device_attribute *cocci_id/* drivers/staging/greybus/light.c 235 */;
	struct device *cocci_id/* drivers/staging/greybus/light.c 235 */;
	ssize_t cocci_id/* drivers/staging/greybus/light.c 235 */;
	int cocci_id/* drivers/staging/greybus/light.c 174 */(struct gb_channel *channel);
	int cocci_id/* drivers/staging/greybus/light.c 173 */(struct gb_channel *channel,
							      u32 color);
	u32 cocci_id/* drivers/staging/greybus/light.c 143 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/light.c 1349 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/light.c 1343 */[];
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/light.c 1264 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/light.c 1262 */;
	struct gb_lights_event_request *cocci_id/* drivers/staging/greybus/light.c 1215 */;
	struct gb_message *cocci_id/* drivers/staging/greybus/light.c 1214 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/light.c 1208 */;
	struct gb_lights_set_flash_intensity_request cocci_id/* drivers/staging/greybus/light.c 119 */;
	struct gb_bundle *cocci_id/* drivers/staging/greybus/light.c 118 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/light.c 117 */;
	struct gb_light cocci_id/* drivers/staging/greybus/light.c 1168 */;
	struct gb_lights *cocci_id/* drivers/staging/greybus/light.c 1156 */;
	struct gb_lights_get_lights_response cocci_id/* drivers/staging/greybus/light.c 1140 */;
	struct gb_lights_get_light_config_response cocci_id/* drivers/staging/greybus/light.c 1007 */;
	struct gb_lights_get_light_config_request cocci_id/* drivers/staging/greybus/light.c 1006 */;
	struct gb_light {
		u8 id;
		char *name;
		struct gb_lights *glights;
		u32 flags;
		u8 channels_count;
		struct gb_channel *channels;
		bool has_flash;
		bool ready;
#if IS_REACHABLE(CONFIG_V4L2_FLASH_LED_CLASS)
		struct v4l2_flash *v4l2_flash;
		struct v4l2_flash *v4l2_flash_ind;
#endif
	} cocci_id/*  1 */;
	struct gb_channel {
		u8 id;
		u32 flags;
		u32 color;
		char *color_name;
		u8 fade_in;
		u8 fade_out;
		u32 mode;
		char *mode_name;
		struct attribute **attrs;
		struct attribute_group *attr_group;
		const struct attribute_group **attr_groups;
		struct led_classdev *led;
#if IS_REACHABLE(CONFIG_LEDS_CLASS_FLASH)
		struct led_classdev_flash fled;
		struct led_flash_setting intensity_uA;
		struct led_flash_setting timeout_us;
#else
		struct led_classdev cled;
#endif
		struct gb_light *light;
		bool is_registered;
		bool releasing;
		bool strobe_state;
		bool active;
		struct mutex lock;
	} cocci_id/*  1 */;
}
