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
 * @file gen_provenance_entity.h
 * @brief 
 * @author Matthieu Lefebvre
 */

#ifndef _ASDF_GEN_PROVENANCE_ENTITY_
#define _ASDF_GEN_PROVENANCE_ENTITY_

/** 
 * @brief Generate a provenance entity identified by label, type, and id, from the
 *        values in params.
 * 
 * @param label
 * @param id
 * @param params
 * 
 * @return  The generated string
 */
std::string generate_provenance_entity(const std::string label, 
                                       const std::string id,
                                       const std::vector<parameter> params);

#endif  // _ASDF_GEN_PROVENANCE_ENTITY_
