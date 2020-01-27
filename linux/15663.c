cocci_test_suite() {
	const struct sysfs_ops cocci_id/* drivers/staging/greybus/audio_manager_module.c 59 */;
	const char *cocci_id/* drivers/staging/greybus/audio_manager_module.c 45 */;
	size_t cocci_id/* drivers/staging/greybus/audio_manager_module.c 45 */;
	struct gb_audio_manager_module_attribute *cocci_id/* drivers/staging/greybus/audio_manager_module.c 31 */;
	struct attribute *cocci_id/* drivers/staging/greybus/audio_manager_module.c 29 */;
	char *cocci_id/* drivers/staging/greybus/audio_manager_module.c 29 */;
	struct kobject *cocci_id/* drivers/staging/greybus/audio_manager_module.c 28 */;
	ssize_t cocci_id/* drivers/staging/greybus/audio_manager_module.c 28 */;
	void cocci_id/* drivers/staging/greybus/audio_manager_module.c 232 */;
	struct gb_audio_manager_module *cocci_id/* drivers/staging/greybus/audio_manager_module.c 189 */;
	struct gb_audio_manager_module_descriptor *cocci_id/* drivers/staging/greybus/audio_manager_module.c 186 */;
	struct kset *cocci_id/* drivers/staging/greybus/audio_manager_module.c 185 */;
	struct gb_audio_manager_module **cocci_id/* drivers/staging/greybus/audio_manager_module.c 184 */;
	int cocci_id/* drivers/staging/greybus/audio_manager_module.c 183 */;
	struct gb_audio_manager_module_attribute {
		struct attribute attr;
		ssize_t (*show)(struct gb_audio_manager_module *module,
				struct gb_audio_manager_module_attribute *attr,
				char *buf);
		ssize_t (*store)(struct gb_audio_manager_module *module,
				 struct gb_audio_manager_module_attribute *attr,
				 const char *buf, size_t count);
	} cocci_id/* drivers/staging/greybus/audio_manager_module.c 18 */;
	char *cocci_id/* drivers/staging/greybus/audio_manager_module.c 161 */[];
	struct gb_audio_manager_module cocci_id/* drivers/staging/greybus/audio_manager_module.c 16 */;
	char cocci_id/* drivers/staging/greybus/audio_manager_module.c 155 */[64];
	char cocci_id/* drivers/staging/greybus/audio_manager_module.c 154 */[128];
	struct kobj_type cocci_id/* drivers/staging/greybus/audio_manager_module.c 146 */;
	struct attribute *cocci_id/* drivers/staging/greybus/audio_manager_module.c 136 */[];
	struct gb_audio_manager_module_attribute cocci_id/* drivers/staging/greybus/audio_manager_module.c 110 */;
}
