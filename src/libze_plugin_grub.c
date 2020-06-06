#include "libze_plugin_grub.h"

#include <libze/libze.h>

/********************************************************************
 ********************** Plugin initialization ***********************
 ********************************************************************/

libze_error
libze_plugin_grub_init(libze_handle *lzeh) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Pre-activate ****************************
 ********************************************************************/

/**
 * @brief Pre-activate hook for plugin
 * @param[in] lzeh
 * @return @p LIBZE_ERROR_SUCCESS
 */
libze_error
libze_plugin_grub_pre_activate(libze_handle *lzeh) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Mid-activate ****************************
 ********************************************************************/

libze_error
libze_plugin_grub_mid_activate(libze_handle *lzeh, libze_activate_data *activate_data) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Post-activate ****************************
 ********************************************************************/

libze_error
libze_plugin_grub_post_activate(libze_handle *lzeh, char const be_name[LIBZE_MAX_PATH_LEN]) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Post-create ****************************
 ********************************************************************/

libze_error
libze_plugin_grub_post_create(libze_handle *lzeh, libze_create_data *create_data) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Post-destroy ****************************
 ********************************************************************/

libze_error
libze_plugin_grub_post_destroy(libze_handle *lzeh, char const be_name[LIBZE_MAX_PATH_LEN]) {
    return LIBZE_ERROR_SUCCESS;
}

/********************************************************************
 ************************** Post-rename ****************************
 ********************************************************************/

libze_error
libze_plugin_grub_post_rename(libze_handle *lzeh, char const be_name_old[LIBZE_MAX_PATH_LEN],
                              char const be_name_new[LIBZE_MAX_PATH_LEN]) {
    return LIBZE_ERROR_SUCCESS;
}