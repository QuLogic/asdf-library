/******************************************************************************
 * Copyright 2015 ASDF developers
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
/** 
 * @file gen_sf_parfile_provenance.h
 * @brief 
 * @author Matthieu Lefebvre
 */

#ifndef _ASDF_GEN_SF_PARFILE_PROVENANCE_
#define _ASDF_GEN_SF_PARFILE_PROVENANCE_

#ifdef __cplusplus
extern "C" {
#endif

/** 
 * @brief Generate a provenance entity with id prov_id and label prov_label
 *        from a specfem style parameter file ("Par_file").
 * 
 * @param filename Name of the "Par_file".
 * @param prov_label Description, for instance "SPECFEM Input Parameters".
 * @param prov_id Unique id for this provenance item.
 * 
 * @return A pointer to the generated C string.
 *
 * @note Bind C++ functions with the C API.
 *
 * @warning DO NOT FORGET TO CALL clean_sf_parfile_provenance
 */
char *generate_sf_parfile_provenance(const char *filename,
                                     const char *prov_label,
                                     const char *prov_id);

/** 
 * @brief Deallocate the sub_provenance string build by
 *        generate_sf_parfile_provenance.
 * 
 * @param sub_provenance Pointer to the C string to deallocate.
 *
 * @note Bind C++ functions with the C API.
 */
void clean_sf_parfile_provenance(char *sub_provenance);

#ifdef __cplusplus
}
#endif

#endif  // _ASDF_GEN_SF_PARFILE_PROVENANCE_
