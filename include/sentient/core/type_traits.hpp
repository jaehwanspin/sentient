#ifndef __SENTIENT_CORE_TYPE_TRAITS_HPP__
#define __SENTIENT_CORE_TYPE_TRAITS_HPP__

/**
 * @file type_traits.hpp
 * @author Jin (jaehwanspin@gmail.com)
 * @brief Type(Model) attributes utilities
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <type_traits>

namespace sentient
{
namespace type_traits
{

/**
 * @brief basic sentient model attribute
 * 
 */
struct sentient_model_attr { using base_type = sentient_model_attr; };

/**
 * @brief static sized model attribute
 * 
 */
struct static_model_attr : sentient_model_attr { using model_flexiblity_attr_type = static_model_attr; };

/**
 * @brief dynamic sized model attribute
 * 
 */
struct dynamic_model_attr : sentient_model_attr { using model_flexiblity_attr_type = dynamic_model_attr; };

template <char ... _DatabaseName>
struct dbms_compatible_attr : sentient_model_attr
{
	static constexpr const char database_name[sizeof...(_DatabaseName)] = { (_DatabaseName)... };
	using dbms_compatibility_attr_type = dbms_compatible_attr;
};

template <typename _Model>
struct is_sentient_model :
	std::is_same<typename _Model::base_type, sentient_model_attr> { };
template <typename _Model>
constexpr inline bool is_sentient_model_v = is_sentient_model<_Model>::value;

template <typename _Model>
struct is_static_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, static_model_attr> { };
template <typename _Model>
constexpr inline bool is_static_model_v = is_static_model<_Model>::value;

template <typename _Model>
struct is_dynamic_model :
	std::is_same<typename _Model::model_flexiblity_attr_type, dynamic_model_attr> { };
template <typename _Model>
constexpr inline bool is_dynamic_model_v = is_dynamic_model<_Model>::value;

template <typename _Model, char ... _DatabaseName>
struct is_dbms_compatible_model :
	std::is_same<typename _Model::dbms_compatibility_attr_type,
				 dbms_compatible_attr<_DatabaseName ... >> { };
template <typename _Model, char ... _DatabaseName>
constexpr inline bool is_dbms_compatible_model_v =
	is_dbms_compatible_model<_Model, _DatabaseName ...>::value;


namespace concepts
{
	
} // concepts
} // type_traits
} // sentient
#endif