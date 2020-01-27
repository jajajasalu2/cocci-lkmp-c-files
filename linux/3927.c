cocci_test_suite() {
	size_t cocci_id/* drivers/greybus/svc.c 882 */;
	struct gb_module *cocci_id/* drivers/greybus/svc.c 881 */;
	struct gb_interface *cocci_id/* drivers/greybus/svc.c 877 */;
	struct gb_svc_hello_request *cocci_id/* drivers/greybus/svc.c 841 */;
	struct gb_operation *cocci_id/* drivers/greybus/svc.c 837 */;
	char cocci_id/* drivers/greybus/svc.c 794 */[GB_SVC_PWRMON_RAIL_NAME_BUFSIZE];
	struct svc_debugfs_pwrmon_rail *cocci_id/* drivers/greybus/svc.c 793 */;
	struct gb_svc_pwrmon_rail_names_get_response *cocci_id/* drivers/greybus/svc.c 763 */;
	struct dentry *cocci_id/* drivers/greybus/svc.c 762 */;
	const struct file_operations cocci_id/* drivers/greybus/svc.c 750 */;
	char cocci_id/* drivers/greybus/svc.c 707 */[16];
	loff_t *cocci_id/* drivers/greybus/svc.c 700 */;
	struct file *cocci_id/* drivers/greybus/svc.c 699 */;
	char __user *cocci_id/* drivers/greybus/svc.c 699 */;
	struct gb_svc_version_response *cocci_id/* drivers/greybus/svc.c 645 */;
	struct gb_svc_version_request *cocci_id/* drivers/greybus/svc.c 644 */;
	struct gb_svc_intf_set_pwrm_response cocci_id/* drivers/greybus/svc.c 559 */;
	struct gb_svc_intf_set_pwrm_request cocci_id/* drivers/greybus/svc.c 558 */;
	struct gb_svc_l2_timer_cfg *cocci_id/* drivers/greybus/svc.c 555 */;
	struct gb_svc_route_destroy_request cocci_id/* drivers/greybus/svc.c 536 */;
	struct gb_svc_route_create_request cocci_id/* drivers/greybus/svc.c 522 */;
	unsigned short cocci_id/* drivers/greybus/svc.c 52 */;
	struct gb_connection *cocci_id/* drivers/greybus/svc.c 502 */;
	struct gb_svc_conn_destroy_request cocci_id/* drivers/greybus/svc.c 501 */;
	void cocci_id/* drivers/greybus/svc.c 498 */;
	struct gb_svc_conn_create_request cocci_id/* drivers/greybus/svc.c 485 */;
	u8 cocci_id/* drivers/greybus/svc.c 481 */;
	u16 cocci_id/* drivers/greybus/svc.c 481 */;
	const char *cocci_id/* drivers/greybus/svc.c 48 */;
	struct gb_svc_dme_peer_set_response cocci_id/* drivers/greybus/svc.c 452 */;
	struct gb_svc_dme_peer_set_request cocci_id/* drivers/greybus/svc.c 451 */;
	u32 cocci_id/* drivers/greybus/svc.c 449 */;
	struct gb_svc_dme_peer_get_response cocci_id/* drivers/greybus/svc.c 418 */;
	struct gb_svc_dme_peer_get_request cocci_id/* drivers/greybus/svc.c 417 */;
	u32 *cocci_id/* drivers/greybus/svc.c 415 */;
	struct gb_svc_intf_resume_response cocci_id/* drivers/greybus/svc.c 389 */;
	struct gb_svc_intf_resume_request cocci_id/* drivers/greybus/svc.c 388 */;
	struct gb_svc_intf_activate_response cocci_id/* drivers/greybus/svc.c 363 */;
	struct gb_svc_intf_activate_request cocci_id/* drivers/greybus/svc.c 362 */;
	u8 *cocci_id/* drivers/greybus/svc.c 360 */;
	struct gb_svc *cocci_id/* drivers/greybus/svc.c 36 */;
	struct gb_svc_intf_unipro_response cocci_id/* drivers/greybus/svc.c 340 */;
	struct device_attribute *cocci_id/* drivers/greybus/svc.c 34 */;
	char *cocci_id/* drivers/greybus/svc.c 34 */;
	struct gb_svc_intf_unipro_request cocci_id/* drivers/greybus/svc.c 339 */;
	struct device *cocci_id/* drivers/greybus/svc.c 33 */;
	ssize_t cocci_id/* drivers/greybus/svc.c 33 */;
	struct gb_svc_intf_refclk_response cocci_id/* drivers/greybus/svc.c 317 */;
	struct gb_svc_intf_refclk_request cocci_id/* drivers/greybus/svc.c 316 */;
	bool cocci_id/* drivers/greybus/svc.c 314 */;
	struct gb_svc_intf_vsys_response cocci_id/* drivers/greybus/svc.c 294 */;
	struct gb_svc_intf_vsys_request cocci_id/* drivers/greybus/svc.c 293 */;
	struct gb_svc_intf_eject_request cocci_id/* drivers/greybus/svc.c 270 */;
	struct gb_svc_intf_device_id_request cocci_id/* drivers/greybus/svc.c 259 */;
	struct attribute *cocci_id/* drivers/greybus/svc.c 247 */[];
	int cocci_id/* drivers/greybus/svc.c 22 */(struct gb_operation *operation);
	struct gb_svc_pwrmon_intf_sample_get_response cocci_id/* drivers/greybus/svc.c 213 */;
	struct gb_svc_pwrmon_intf_sample_get_request cocci_id/* drivers/greybus/svc.c 212 */;
	struct gb_svc_pwrmon_sample_get_response cocci_id/* drivers/greybus/svc.c 176 */;
	struct gb_svc_pwrmon_sample_get_request cocci_id/* drivers/greybus/svc.c 175 */;
	struct gb_svc_deferred_request {
		struct work_struct work;
		struct gb_operation *operation;
	} cocci_id/* drivers/greybus/svc.c 17 */;
	int cocci_id/* drivers/greybus/svc.c 1346 */;
	struct gb_svc_pwrmon_rail_count_get_response cocci_id/* drivers/greybus/svc.c 132 */;
	struct gb_host_device *cocci_id/* drivers/greybus/svc.c 1302 */;
	struct device_type cocci_id/* drivers/greybus/svc.c 1297 */;
	struct gb_svc_intf_mailbox_event_request *cocci_id/* drivers/greybus/svc.c 1206 */;
	struct gb_svc_intf_oops_request *cocci_id/* drivers/greybus/svc.c 1192 */;
	struct gb_svc_module_removed_request *cocci_id/* drivers/greybus/svc.c 1173 */;
	struct gb_svc_module_inserted_request *cocci_id/* drivers/greybus/svc.c 1154 */;
	struct gb_svc_intf_reset_request *cocci_id/* drivers/greybus/svc.c 1137 */;
	struct gb_message *cocci_id/* drivers/greybus/svc.c 1136 */;
	struct gb_svc_deferred_request cocci_id/* drivers/greybus/svc.c 1085 */;
	struct gb_svc_deferred_request *cocci_id/* drivers/greybus/svc.c 1080 */;
	struct work_struct *cocci_id/* drivers/greybus/svc.c 1078 */;
}
