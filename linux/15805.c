cocci_test_suite() {
	u8 *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 93 */;
	struct vchi_held_msg cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 926 */;
	const char *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 921 */;
	struct vchiq_mmal_component *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 920 */;
	union mmal_es_specific_format cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 896 */;
	struct mmal_port *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 744 */;
	struct vchi_held_msg *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 643 */;
	struct mmal_msg **cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 642 */;
	void **cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 555 */;
	const enum vchi_callback_reason cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 538 */;
	struct mmal_msg *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 440 */;
	void cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 439 */;
	struct mmal_msg_header cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 430 */;
	u32 cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 411 */;
	unsigned long cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 411 */;
	const char *const cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 40 */[];
	struct mmal_msg cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 365 */;
	struct mmal_msg_context *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 364 */;
	struct vchiq_mmal_port *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 362 */;
	struct mmal_buffer *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 362 */;
	struct vchiq_mmal_instance *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 361 */;
	int cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 360 */;
	struct mmal_msg_context cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 271 */;
	struct work_struct *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 268 */;
	struct mmal_port cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1836 */;
	struct service_creation cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1818 */;
	struct vchi_instance_handle *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1817 */;
	struct vchiq_mmal_instance **cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1813 */;
	struct vchiq_mmal_component **cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1615 */;
	struct vchiq_mmal_instance {
		struct vchi_service_handle *handle;
		struct mutex vchiq_mutex;
		void *bulk_scratch;
		struct idr context_map;
		struct mutex context_map_lock;
		int component_idx;
		struct vchiq_mmal_component component[VCHIQ_MMAL_MAX_COMPONENTS];
		struct workqueue_struct *bulk_wq;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 157 */;
	vchiq_mmal_buffer_cb cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1439 */;
	unsigned int cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1335 */;
	struct mmal_buffer cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1313 */;
	struct list_head *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1289 */;
	struct mmal_msg_port_parameter_get cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1244 */;
	void *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1229 */;
	enum mmal_msg_port_action_type cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1141 */;
	struct mmal_msg_context {
		struct vchiq_mmal_instance *instance;
		int handle;
		union {
			struct {
				struct work_struct work;
				struct work_struct buffer_to_host_work;
				struct vchiq_mmal_instance *instance;
				struct vchiq_mmal_port *port;
				struct mmal_buffer *buffer;
				unsigned long buffer_used;
				u32 mmal_flags;
				s64 pts;
				s64 dts;
				int status;
			} bulk;
			struct {
				struct vchi_held_msg msg_handle;
				struct mmal_msg *msg;
				u32 msg_len;
				struct completion cmplt;
			} sync;
		} u;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 111 */;
	struct vchiq_mmal_instance cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 108 */;
	u32 *cocci_id/* drivers/staging/vc04_services/bcm2835-camera/mmal-vchiq.c 1066 */;
}
