#ifdef __cplusplus
extern "C" {
#endif

size_t snd_control_id_sizeof();
#define snd_control_id_alloca(ptr) ({ assert(ptr); *ptr = (snd_control_id_t *) alloca(snd_control_id_sizeof()); memset(*ptr, 0, snd_control_id_sizeof()); 0; })
int snd_control_id_malloc(snd_control_id_t **ptr);
void snd_control_id_free(snd_control_id_t *obj);
void snd_control_id_copy(snd_control_id_t *dst, const snd_control_id_t *src);

unsigned int snd_control_id_get_numid(const snd_control_id_t *obj);

snd_control_iface_t snd_control_id_get_interface(const snd_control_id_t *obj);

unsigned int snd_control_id_get_device(const snd_control_id_t *obj);

unsigned int snd_control_id_get_subdevice(const snd_control_id_t *obj);

const char *snd_control_id_get_name(const snd_control_id_t *obj);

unsigned int snd_control_id_get_index(const snd_control_id_t *obj);

void snd_control_id_set_numid(snd_control_id_t *obj, unsigned int val);

void snd_control_id_set_interface(snd_control_id_t *obj, snd_control_iface_t val);

void snd_control_id_set_device(snd_control_id_t *obj, unsigned int val);

void snd_control_id_set_subdevice(snd_control_id_t *obj, unsigned int val);

void snd_control_id_set_name(snd_control_id_t *obj, const char *val);

void snd_control_id_set_index(snd_control_id_t *obj, unsigned int val);

size_t snd_ctl_info_sizeof();
#define snd_ctl_info_alloca(ptr) ({ assert(ptr); *ptr = (snd_ctl_info_t *) alloca(snd_ctl_info_sizeof()); memset(*ptr, 0, snd_ctl_info_sizeof()); 0; })
int snd_ctl_info_malloc(snd_ctl_info_t **ptr);
void snd_ctl_info_free(snd_ctl_info_t *obj);
void snd_ctl_info_copy(snd_ctl_info_t *dst, const snd_ctl_info_t *src);

int snd_ctl_info_get_card(const snd_ctl_info_t *obj);

snd_card_type_t snd_ctl_info_get_type(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_id(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_abbreviation(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_name(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_longname(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_mixerid(const snd_ctl_info_t *obj);

const char *snd_ctl_info_get_mixername(const snd_ctl_info_t *obj);

size_t snd_ctl_event_sizeof();
#define snd_ctl_event_alloca(ptr) ({ assert(ptr); *ptr = (snd_ctl_event_t *) alloca(snd_ctl_event_sizeof()); memset(*ptr, 0, snd_ctl_event_sizeof()); 0; })
int snd_ctl_event_malloc(snd_ctl_event_t **ptr);
void snd_ctl_event_free(snd_ctl_event_t *obj);
void snd_ctl_event_copy(snd_ctl_event_t *dst, const snd_ctl_event_t *src);

snd_ctl_event_type_t snd_ctl_event_get_type(const snd_ctl_event_t *obj);

unsigned int snd_ctl_event_get_numid(const snd_ctl_event_t *obj);

void snd_ctl_event_get_id(const snd_ctl_event_t *obj, snd_control_id_t *ptr);

snd_control_iface_t snd_ctl_event_get_interface(const snd_ctl_event_t *obj);

unsigned int snd_ctl_event_get_device(const snd_ctl_event_t *obj);

unsigned int snd_ctl_event_get_subdevice(const snd_ctl_event_t *obj);

const char *snd_ctl_event_get_name(const snd_ctl_event_t *obj);

unsigned int snd_ctl_event_get_index(const snd_ctl_event_t *obj);

size_t snd_control_list_sizeof();
#define snd_control_list_alloca(ptr) ({ assert(ptr); *ptr = (snd_control_list_t *) alloca(snd_control_list_sizeof()); memset(*ptr, 0, snd_control_list_sizeof()); 0; })
int snd_control_list_malloc(snd_control_list_t **ptr);
void snd_control_list_free(snd_control_list_t *obj);
void snd_control_list_copy(snd_control_list_t *dst, const snd_control_list_t *src);

void snd_control_list_set_offset(snd_control_list_t *obj, unsigned int val);

unsigned int snd_control_list_get_used(const snd_control_list_t *obj);

unsigned int snd_control_list_get_count(const snd_control_list_t *obj);

void snd_control_list_get_id(const snd_control_list_t *obj, unsigned int idx, snd_control_id_t *ptr);

unsigned int snd_control_list_get_numid(const snd_control_list_t *obj, unsigned int idx);

snd_control_iface_t snd_control_list_get_interface(const snd_control_list_t *obj, unsigned int idx);

unsigned int snd_control_list_get_device(const snd_control_list_t *obj, unsigned int idx);

unsigned int snd_control_list_get_subdevice(const snd_control_list_t *obj, unsigned int idx);

const char *snd_control_list_get_name(const snd_control_list_t *obj, unsigned int idx);

unsigned int snd_control_list_get_index(const snd_control_list_t *obj, unsigned int idx);

size_t snd_control_info_sizeof();
#define snd_control_info_alloca(ptr) ({ assert(ptr); *ptr = (snd_control_info_t *) alloca(snd_control_info_sizeof()); memset(*ptr, 0, snd_control_info_sizeof()); 0; })
int snd_control_info_malloc(snd_control_info_t **ptr);
void snd_control_info_free(snd_control_info_t *obj);
void snd_control_info_copy(snd_control_info_t *dst, const snd_control_info_t *src);

snd_control_type_t snd_control_info_get_type(const snd_control_info_t *obj);

int snd_control_info_is_readable(const snd_control_info_t *obj);

int snd_control_info_is_writable(const snd_control_info_t *obj);

int snd_control_info_is_volatile(const snd_control_info_t *obj);

int snd_control_info_is_inactive(const snd_control_info_t *obj);

int snd_control_info_is_locked(const snd_control_info_t *obj);

int snd_control_info_is_indirect(const snd_control_info_t *obj);

unsigned int snd_control_info_get_count(const snd_control_info_t *obj);

long snd_control_info_get_min(const snd_control_info_t *obj);

long snd_control_info_get_max(const snd_control_info_t *obj);

long snd_control_info_get_step(const snd_control_info_t *obj);

unsigned int snd_control_info_get_items(const snd_control_info_t *obj);

void snd_control_info_set_item(snd_control_info_t *obj, unsigned int val);

const char *snd_control_info_get_item_name(const snd_control_info_t *obj);

void snd_control_info_get_id(const snd_control_info_t *obj, snd_control_id_t *ptr);

unsigned int snd_control_info_get_numid(const snd_control_info_t *obj);

snd_control_iface_t snd_control_info_get_interface(const snd_control_info_t *obj);

unsigned int snd_control_info_get_device(const snd_control_info_t *obj);

unsigned int snd_control_info_get_subdevice(const snd_control_info_t *obj);

const char *snd_control_info_get_name(const snd_control_info_t *obj);

unsigned int snd_control_info_get_index(const snd_control_info_t *obj);

void snd_control_info_set_id(snd_control_info_t *obj, const snd_control_id_t *ptr);

void snd_control_info_set_numid(snd_control_info_t *obj, unsigned int val);

void snd_control_info_set_interface(snd_control_info_t *obj, snd_control_iface_t val);

void snd_control_info_set_device(snd_control_info_t *obj, unsigned int val);

void snd_control_info_set_subdevice(snd_control_info_t *obj, unsigned int val);

void snd_control_info_set_name(snd_control_info_t *obj, const char *val);

void snd_control_info_set_index(snd_control_info_t *obj, unsigned int val);

size_t snd_control_sizeof();
#define snd_control_alloca(ptr) ({ assert(ptr); *ptr = (snd_control_t *) alloca(snd_control_sizeof()); memset(*ptr, 0, snd_control_sizeof()); 0; })
int snd_control_malloc(snd_control_t **ptr);
void snd_control_free(snd_control_t *obj);
void snd_control_copy(snd_control_t *dst, const snd_control_t *src);

void snd_control_get_id(const snd_control_t *obj, snd_control_id_t *ptr);

unsigned int snd_control_get_numid(const snd_control_t *obj);

snd_control_iface_t snd_control_get_interface(const snd_control_t *obj);

unsigned int snd_control_get_device(const snd_control_t *obj);

unsigned int snd_control_get_subdevice(const snd_control_t *obj);

const char *snd_control_get_name(const snd_control_t *obj);

unsigned int snd_control_get_index(const snd_control_t *obj);

void snd_control_set_id(snd_control_t *obj, const snd_control_id_t *ptr);

void snd_control_set_numid(snd_control_t *obj, unsigned int val);

void snd_control_set_interface(snd_control_t *obj, snd_control_iface_t val);

void snd_control_set_device(snd_control_t *obj, unsigned int val);

void snd_control_set_subdevice(snd_control_t *obj, unsigned int val);

void snd_control_set_name(snd_control_t *obj, const char *val);

void snd_control_set_index(snd_control_t *obj, unsigned int val);

long snd_control_get_boolean(const snd_control_t *obj, unsigned int idx);

long snd_control_get_integer(const snd_control_t *obj, unsigned int idx);

unsigned int snd_control_get_enumerated(const snd_control_t *obj, unsigned int idx);

unsigned char snd_control_get_byte(const snd_control_t *obj, unsigned int idx);

void snd_control_set_boolean(snd_control_t *obj, unsigned int idx, long val);

void snd_control_set_integer(snd_control_t *obj, unsigned int idx, long val);

void snd_control_set_enumerated(snd_control_t *obj, unsigned int idx, unsigned int val);

void snd_control_set_byte(snd_control_t *obj, unsigned int idx, unsigned char val);

const void * snd_control_get_bytes(const snd_control_t *obj);

void snd_control_get_iec958(const snd_control_t *obj, snd_aes_iec958_t *ptr);

void snd_control_set_iec958(snd_control_t *obj, const snd_aes_iec958_t *ptr);

size_t snd_hcontrol_list_sizeof();
#define snd_hcontrol_list_alloca(ptr) ({ assert(ptr); *ptr = (snd_hcontrol_list_t *) alloca(snd_hcontrol_list_sizeof()); memset(*ptr, 0, snd_hcontrol_list_sizeof()); 0; })
int snd_hcontrol_list_malloc(snd_hcontrol_list_t **ptr);
void snd_hcontrol_list_free(snd_hcontrol_list_t *obj);
void snd_hcontrol_list_copy(snd_hcontrol_list_t *dst, const snd_hcontrol_list_t *src);

void snd_hcontrol_list_set_offset(snd_hcontrol_list_t *obj, unsigned int val);

unsigned int snd_hcontrol_list_get_used(const snd_hcontrol_list_t *obj);

unsigned int snd_hcontrol_list_get_count(const snd_hcontrol_list_t *obj);

void snd_hcontrol_list_get_id(const snd_hcontrol_list_t *obj, unsigned int idx, snd_control_id_t *ptr);

unsigned int snd_hcontrol_list_get_numid(const snd_hcontrol_list_t *obj, unsigned int idx);

snd_control_iface_t snd_hcontrol_list_get_interface(const snd_hcontrol_list_t *obj, unsigned int idx);

unsigned int snd_hcontrol_list_get_device(const snd_hcontrol_list_t *obj, unsigned int idx);

unsigned int snd_hcontrol_list_get_subdevice(const snd_hcontrol_list_t *obj, unsigned int idx);

const char *snd_hcontrol_list_get_name(const snd_hcontrol_list_t *obj, unsigned int idx);

unsigned int snd_hcontrol_list_get_index(const snd_hcontrol_list_t *obj, unsigned int idx);

size_t snd_hcontrol_sizeof();
#define snd_hcontrol_alloca(ptr) ({ assert(ptr); *ptr = (snd_hcontrol_t *) alloca(snd_hcontrol_sizeof()); memset(*ptr, 0, snd_hcontrol_sizeof()); 0; })
int snd_hcontrol_malloc(snd_hcontrol_t **ptr);
void snd_hcontrol_free(snd_hcontrol_t *obj);
void snd_hcontrol_copy(snd_hcontrol_t *dst, const snd_hcontrol_t *src);

void snd_hcontrol_get_id(const snd_hcontrol_t *obj, snd_control_id_t *ptr);

unsigned int snd_hcontrol_get_numid(const snd_hcontrol_t *obj);

snd_control_iface_t snd_hcontrol_get_interface(const snd_hcontrol_t *obj);

unsigned int snd_hcontrol_get_device(const snd_hcontrol_t *obj);

unsigned int snd_hcontrol_get_subdevice(const snd_hcontrol_t *obj);

const char *snd_hcontrol_get_name(const snd_hcontrol_t *obj);

unsigned int snd_hcontrol_get_index(const snd_hcontrol_t *obj);

void snd_hcontrol_set_callback_change(snd_hcontrol_t *obj, snd_hcontrol_callback_t val);

void snd_hcontrol_set_callback_value(snd_hcontrol_t *obj, snd_hcontrol_callback_t val);

void snd_hcontrol_set_callback_remove(snd_hcontrol_t *obj, snd_hcontrol_callback_t val);

void * snd_hcontrol_get_private_data(const snd_hcontrol_t *obj);

void snd_hcontrol_set_private_data(snd_hcontrol_t *obj, void * val);

void snd_hcontrol_set_private_free(snd_hcontrol_t *obj, snd_hcontrol_private_free_t val);


#ifdef __cplusplus
}
#endif
