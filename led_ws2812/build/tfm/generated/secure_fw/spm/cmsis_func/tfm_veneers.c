/*
 * Copyright (c) 2018-2022, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/***********  WARNING: This is an auto-generated file. Do not edit!  ***********/

#include "tfm_secure_api.h"
#include "spm_partition_defs.h"

/******** TFM_SP_CRYPTO ********/
psa_status_t tfm_crypto_get_key_attributes(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_open_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_close_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_reset_key_attributes(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_import_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_destroy_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_export_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_export_public_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_purge_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_copy_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_compute(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_compare(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_update(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_finish(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_verify(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_abort(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_hash_clone(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_compute(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_verify(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_sign_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_verify_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_update(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_sign_finish(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_verify_finish(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_mac_abort(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_encrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_decrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_encrypt_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_decrypt_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_generate_iv(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_set_iv(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_update(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_finish(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_cipher_abort(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_encrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_decrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_encrypt_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_decrypt_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_generate_nonce(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_set_nonce(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_set_lengths(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_update_ad(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_update(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_finish(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_verify(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_aead_abort(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_sign_message(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_verify_message(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_sign_hash(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_verify_hash(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_asymmetric_encrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_asymmetric_decrypt(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_setup(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_get_capacity(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_set_capacity(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_input_bytes(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_input_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_key_agreement(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_output_bytes(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_output_key(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_key_derivation_abort(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_raw_key_agreement(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_generate_random(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t tfm_crypto_generate_key(psa_invec *, size_t, psa_outvec *, size_t);

/******** TFM_SP_PLATFORM ********/
psa_status_t platform_sp_system_reset(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t platform_sp_ioctl(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t platform_sp_nv_counter_read(psa_invec *, size_t, psa_outvec *, size_t);
psa_status_t platform_sp_nv_counter_increment(psa_invec *, size_t, psa_outvec *, size_t);


#define TFM_VENEER_FUNCTION(partition_name, func_name, sfn_name) \
    __tfm_secure_gateway_attributes__ \
    psa_status_t func_name##_veneer(psa_invec *in_vec, \
                                    size_t in_len, \
                                    psa_outvec *out_vec, \
                                    size_t out_len) \
    { \
        bool is_ns = tfm_core_is_ns_client(); \
      \
        TFM_CORE_IOVEC_SFN_REQUEST(partition_name, \
                                   is_ns, \
                                   (void *) sfn_name, \
                                   in_vec, in_len, out_vec, out_len); \
    }

/******** TFM_SP_CRYPTO ********/
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_get_key_attributes, tfm_crypto_get_key_attributes)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_open_key, tfm_crypto_open_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_close_key, tfm_crypto_close_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_reset_key_attributes, tfm_crypto_reset_key_attributes)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_import_key, tfm_crypto_import_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_destroy_key, tfm_crypto_destroy_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_export_key, tfm_crypto_export_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_export_public_key, tfm_crypto_export_public_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_purge_key, tfm_crypto_purge_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_copy_key, tfm_crypto_copy_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_compute, tfm_crypto_hash_compute)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_compare, tfm_crypto_hash_compare)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_setup, tfm_crypto_hash_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_update, tfm_crypto_hash_update)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_finish, tfm_crypto_hash_finish)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_verify, tfm_crypto_hash_verify)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_abort, tfm_crypto_hash_abort)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_hash_clone, tfm_crypto_hash_clone)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_compute, tfm_crypto_mac_compute)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_verify, tfm_crypto_mac_verify)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_sign_setup, tfm_crypto_mac_sign_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_verify_setup, tfm_crypto_mac_verify_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_update, tfm_crypto_mac_update)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_sign_finish, tfm_crypto_mac_sign_finish)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_verify_finish, tfm_crypto_mac_verify_finish)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_mac_abort, tfm_crypto_mac_abort)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_encrypt, tfm_crypto_cipher_encrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_decrypt, tfm_crypto_cipher_decrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_encrypt_setup, tfm_crypto_cipher_encrypt_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_decrypt_setup, tfm_crypto_cipher_decrypt_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_generate_iv, tfm_crypto_cipher_generate_iv)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_set_iv, tfm_crypto_cipher_set_iv)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_update, tfm_crypto_cipher_update)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_finish, tfm_crypto_cipher_finish)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_cipher_abort, tfm_crypto_cipher_abort)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_encrypt, tfm_crypto_aead_encrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_decrypt, tfm_crypto_aead_decrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_encrypt_setup, tfm_crypto_aead_encrypt_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_decrypt_setup, tfm_crypto_aead_decrypt_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_generate_nonce, tfm_crypto_aead_generate_nonce)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_set_nonce, tfm_crypto_aead_set_nonce)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_set_lengths, tfm_crypto_aead_set_lengths)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_update_ad, tfm_crypto_aead_update_ad)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_update, tfm_crypto_aead_update)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_finish, tfm_crypto_aead_finish)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_verify, tfm_crypto_aead_verify)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_aead_abort, tfm_crypto_aead_abort)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_sign_message, tfm_crypto_sign_message)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_verify_message, tfm_crypto_verify_message)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_sign_hash, tfm_crypto_sign_hash)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_verify_hash, tfm_crypto_verify_hash)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_asymmetric_encrypt, tfm_crypto_asymmetric_encrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_asymmetric_decrypt, tfm_crypto_asymmetric_decrypt)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_setup, tfm_crypto_key_derivation_setup)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_get_capacity, tfm_crypto_key_derivation_get_capacity)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_set_capacity, tfm_crypto_key_derivation_set_capacity)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_input_bytes, tfm_crypto_key_derivation_input_bytes)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_input_key, tfm_crypto_key_derivation_input_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_key_agreement, tfm_crypto_key_derivation_key_agreement)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_output_bytes, tfm_crypto_key_derivation_output_bytes)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_output_key, tfm_crypto_key_derivation_output_key)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_key_derivation_abort, tfm_crypto_key_derivation_abort)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_raw_key_agreement, tfm_crypto_raw_key_agreement)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_generate_random, tfm_crypto_generate_random)
TFM_VENEER_FUNCTION(TFM_SP_CRYPTO, tfm_crypto_generate_key, tfm_crypto_generate_key)
/******** TFM_SP_PLATFORM ********/
TFM_VENEER_FUNCTION(TFM_SP_PLATFORM, tfm_platform_sp_system_reset, platform_sp_system_reset)
TFM_VENEER_FUNCTION(TFM_SP_PLATFORM, tfm_platform_sp_ioctl, platform_sp_ioctl)
TFM_VENEER_FUNCTION(TFM_SP_PLATFORM, tfm_platform_sp_nv_counter_read, platform_sp_nv_counter_read)
TFM_VENEER_FUNCTION(TFM_SP_PLATFORM, tfm_platform_sp_nv_counter_increment, platform_sp_nv_counter_increment)
